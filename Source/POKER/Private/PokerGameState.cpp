// PokerGameState.cpp
#include "PokerGameState.h"
#include "MyPlayer.h"
#include "AIPlayer.h"

APokerGameState::APokerGameState()
{
    PrimaryActorTick.bCanEverTick = false;
    CurrentPhase = EPokerGamePhase::None;
    DealerPosition = 0;
    bHandInProgress = false;

    RoundManager = CreateDefaultSubobject<URoundManager>(TEXT("RoundManager"));
    HandEvaluator = CreateDefaultSubobject<UHandEvaluator>(TEXT("HandEvaluator"));
}

void APokerGameState::BeginPlay()
{
    Super::BeginPlay();
    CurrentPhase = EPokerGamePhase::None;
    bHandInProgress = false;
}

void APokerGameState::AddPlayer(TScriptInterface<IPokerPlayerInterface> Player)
{
    if (Player)
    {
        Players.Add(Player);
        UE_LOG(LogTemp, Log, TEXT("Added player: %s"), *Player->GetPlayerName());
    }
}

void APokerGameState::RemovePlayer(TScriptInterface<IPokerPlayerInterface> Player)
{
    if (Player)
    {
        Players.Remove(Player);
        UE_LOG(LogTemp, Log, TEXT("Removed player: %s"), *Player->GetPlayerName());
    }
}

void APokerGameState::StartNewHand()
{
    if (Players.Num() < 2 || bHandInProgress)
    {
        UE_LOG(LogTemp, Warning, TEXT("Cannot start new hand. Players: %d, HandInProgress: %s"),
            Players.Num(), bHandInProgress ? TEXT("true") : TEXT("false"));
        return;
    }

    UE_LOG(LogTemp, Log, TEXT("\n=== Starting New Hand ==="));

    // First prepare all players for the new hand
    for (auto& Player : Players)
    {
        if (Player && Player->GetChipCount() > 0)
        {
            Player->PrepareForNewHand();
            UE_LOG(LogTemp, Log, TEXT("Prepared player %s for new hand (Chips: %d)"),
                *Player->GetPlayerName(), Player->GetChipCount());
        }
        else if (Player)
        {
            UE_LOG(LogTemp, Warning, TEXT("Player %s cannot join hand - no chips"),
                *Player->GetPlayerName());
        }
    }

    // Initialize hand
    bHandInProgress = true;
    CurrentPhase = EPokerGamePhase::PreFlop;
    CommunityCards.Empty();

    // Reset deck
    Deck.Reset();
    Deck.Shuffle();

    UE_LOG(LogTemp, Log, TEXT("Dealer: Seat %d"), DealerPosition);

    // Count active players
    int32 ActivePlayers = 0;
    for (const auto& Player : Players)
    {
        if (Player && Player->IsInHand())
        {
            ActivePlayers++;
        }
    }

    UE_LOG(LogTemp, Log, TEXT("Active players in hand: %d"), ActivePlayers);

    // Initialize round manager
    RoundManager->InitializeRound(Players, DealerPosition, 10); // Small blind = 10

    // Deal cards and start first round
    DealHoleCards();
    RoundManager->StartNewRound(CurrentPhase);

    LogGameState();
}

void APokerGameState::ProcessPlayerAction(int32 PlayerIndex, EPlayerAction Action)
{
    if (!bHandInProgress || !RoundManager)
    {
        return;
    }

    if (RoundManager->ProcessAction(PlayerIndex, Action))
    {
        if (RoundManager->IsRoundComplete())
        {
            AdvanceToNextPhase();
        }
    }
}

void APokerGameState::AdvanceToNextPhase()
{
    switch (CurrentPhase)
    {
    case EPokerGamePhase::PreFlop:
        CurrentPhase = EPokerGamePhase::Flop;
        DealCommunityCards(3);
        break;

    case EPokerGamePhase::Flop:
        CurrentPhase = EPokerGamePhase::Turn;
        DealCommunityCards(1);
        break;

    case EPokerGamePhase::Turn:
        CurrentPhase = EPokerGamePhase::River;
        DealCommunityCards(1);
        break;

    case EPokerGamePhase::River:
        CurrentPhase = EPokerGamePhase::Showdown;
        ProcessShowdown();
        return;

    case EPokerGamePhase::Showdown:
        EndHand();
        return;

    default:
        return;
    }

    // Start new betting round for next phase
    RoundManager->StartNewRound(CurrentPhase);
    LogGameState();
}

void APokerGameState::DealHoleCards()
{
    // Deal 2 cards to each player, starting after dealer
    for (int32 i = 0; i < 2; i++)
    {
        for (int32 j = 0; j < Players.Num(); j++)
        {
            int32 PlayerIndex = (DealerPosition + 1 + j) % Players.Num();
            if (Players[PlayerIndex] && Players[PlayerIndex]->IsInHand())
            {
                FCard Card = Deck.DrawCard();
                Players[PlayerIndex]->ReceiveCard(Card);
                UE_LOG(LogTemp, Log, TEXT("Player %d received: %s"),
                    PlayerIndex, *Card.ToString());
            }
        }
    }
}

void APokerGameState::DealCommunityCards(int32 NumCards)
{
    UE_LOG(LogTemp, Log, TEXT("\n=== %s ==="), *UEnum::GetValueAsString(CurrentPhase));

    for (int32 i = 0; i < NumCards; i++)
    {
        FCard Card = Deck.DrawCard();
        CommunityCards.Add(Card);
    }

    LogCommunityCards();
}

void APokerGameState::ProcessShowdown()
{
    UE_LOG(LogTemp, Log, TEXT("\n=== Showdown ==="));
    LogCommunityCards();

    TArray<TPair<int32, FHandRank>> PlayerHands;
    TArray<int32> ActivePlayerIndices;

    // Collect all active players and evaluate their hands
    for (int32 i = 0; i < Players.Num(); i++)
    {
        if (Players[i] && Players[i]->IsInHand())
        {
            AMyPlayer* PlayerPtr = Cast<AMyPlayer>(Players[i].GetObject());
            if (PlayerPtr)
            {
                // Get hole cards from player
                const TArray<FCard>& PlayerCards = PlayerPtr->GetHoleCards();
                FHandRank HandRank = HandEvaluator->EvaluateHand(PlayerCards, CommunityCards);
                PlayerHands.Add(TPair<int32, FHandRank>(i, HandRank));
                ActivePlayerIndices.Add(i);

                // Log player's hand for debugging
                UE_LOG(LogTemp, Log, TEXT("Player %s hand evaluation:"), *PlayerPtr->GetPlayerName());
                for (const FCard& Card : PlayerCards)
                {
                    UE_LOG(LogTemp, Log, TEXT("  %s"), *Card.ToString());
                }
            }
        }
    }

    // If no active players, just end the hand
    if (PlayerHands.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("No active players at showdown!"));
        EndHand();
        return;
    }

    // Sort hands by rank (best to worst)
    PlayerHands.Sort([](const TPair<int32, FHandRank>& A, const TPair<int32, FHandRank>& B) {
        return B.Value < A.Value;
        });

    // Find all players with the best hand (to handle splits)
    TArray<int32> Winners;
    FHandRank BestHand = PlayerHands[0].Value;
    for (const auto& PlayerHand : PlayerHands)
    {
        if (PlayerHand.Value == BestHand)
        {
            Winners.Add(PlayerHand.Key);
        }
        else
        {
            break;  // No more winners once we find a worse hand
        }
    }

    // Distribute pot among winners
    if (Winners.Num() > 0)
    {
        int32 TotalPot = RoundManager->GetMainPot();
        int32 WinAmount = TotalPot / Winners.Num();  // Split pot evenly among winners

        for (int32 WinnerIndex : Winners)
        {
            if (Players[WinnerIndex])
            {
                Players[WinnerIndex]->WinPot(WinAmount);
                UE_LOG(LogTemp, Log, TEXT("Player %s wins %d chips"),
                    *Players[WinnerIndex]->GetPlayerName(), WinAmount);
            }
        }
    }

    LogHandResults();
    EndHand();
}

void APokerGameState::EndCurrentHand()
{
    if (bHandInProgress)
    {
        CurrentPhase = EPokerGamePhase::HandComplete;
        EndHand();
    }
}

void APokerGameState::EndHand()
{
    // Clear all player hands and reset states
    for (auto& Player : Players)
    {
        if (Player)
        {
            Player->ClearHand();
        }
    }

    // Reset game state
    bHandInProgress = false;
    CurrentPhase = EPokerGamePhase::None;
    CommunityCards.Empty();

    // Rotate dealer position
    DealerPosition = (DealerPosition + 1) % Players.Num();

    UE_LOG(LogTemp, Log, TEXT("=== Hand Complete ==="));
    UE_LOG(LogTemp, Log, TEXT("Next dealer position: %d"), DealerPosition);
}

void APokerGameState::LogGameState() const
{
    if (CurrentPhase != EPokerGamePhase::PreFlop)
    {
        LogCommunityCards();
    }

    UE_LOG(LogTemp, Log, TEXT("Main Pot: %d"), RoundManager->GetMainPot());
    UE_LOG(LogTemp, Log, TEXT("Current Actor: Seat %d"), RoundManager->GetCurrentActor());
}

void APokerGameState::LogCommunityCards() const
{
    FString CardStr;
    for (const FCard& Card : CommunityCards)
    {
        CardStr += Card.ToString() + TEXT(" ");
    }
    UE_LOG(LogTemp, Log, TEXT("Board: %s"), *CardStr);
}

void APokerGameState::LogHandResults() const
{
    UE_LOG(LogTemp, Log, TEXT("=== Hand Results ==="));
    for (const auto& Player : Players)
    {
        if (Player && Player->IsInHand())
        {
            UE_LOG(LogTemp, Log, TEXT("Player %s: Chips %d"),
                *Player->GetPlayerName(), Player->GetChipCount());
        }
    }
}