// GameFlowManager.cpp
#include "GameFlowManager.h"
#include "AIPlayer.h"

UGameFlowManager::UGameFlowManager()
{
    RoundManager = CreateDefaultSubobject<URoundManager>(TEXT("RoundManager"));
    CurrentPhase = EPokerGamePhase::None;
    DealerPosition = 0;
    bHandInProgress = false;
    bWaitingForAction = false;
}

void UGameFlowManager::Initialize(const TArray<TScriptInterface<IPokerPlayerInterface>>& InPlayers)
{
    Players = InPlayers;
    DealerPosition = 0;
}

void UGameFlowManager::StartNewHand()
{
    if (Players.Num() < 2 || bHandInProgress)
    {
        return;
    }

    UE_LOG(LogTemp, Log, TEXT("\n=== Starting New Hand ==="));

    // Prepare players
    for (auto& Player : Players)
    {
        if (Player && Player->GetChipCount() > 0)
        {
            Player->PrepareForNewHand();
        }
    }

    // Initialize hand
    bHandInProgress = true;
    bWaitingForAction = false;
    CurrentPhase = EPokerGamePhase::PreFlop;
    CommunityCards.Empty();

    // Setup deck
    Deck.Reset();
    Deck.Shuffle();

    // Initialize round manager
    RoundManager->InitializeRound(Players, DealerPosition, 10); // Small blind = 10

    // Deal cards and start first round
    DealHoleCards();
    RoundManager->StartNewRound(CurrentPhase);

    LogGameState();
}

void UGameFlowManager::ProcessGameTick()
{
    if (!bHandInProgress || !RoundManager)
    {
        return;
    }

    if (!bWaitingForAction)
    {
        ProcessCurrentPlayerAction();
    }
}

void UGameFlowManager::ProcessCurrentPlayerAction()
{
    int32 CurrentActor = RoundManager->GetCurrentActor();
    if (CurrentActor < 0 || CurrentActor >= Players.Num())
    {
        return;
    }

    auto Player = Players[CurrentActor];
    if (!Player || !Player->IsInHand())
    {
        return;
    }

    // Get AI decision
    AAIPlayer* AIPlayer = Cast<AAIPlayer>(Player.GetObject());
    if (AIPlayer)
    {
        int32 CurrentBet = RoundManager->GetCurrentBet();

        // For now, always Call/Check for testing
        EPlayerAction Action = (CurrentBet <= 0) ? EPlayerAction::Check : EPlayerAction::Call;

        UE_LOG(LogTemp, Log, TEXT("Player %s taking action: %s"),
            *Player->GetPlayerName(),
            *UEnum::GetValueAsString(Action));

        if (RoundManager->ProcessAction(CurrentActor, Action))
        {
            if (RoundManager->IsRoundComplete())
            {
                AdvanceToNextPhase();
            }
        }
    }
}

void UGameFlowManager::AdvanceToNextPhase()
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

    RoundManager->StartNewRound(CurrentPhase);
    LogGameState();
}

void UGameFlowManager::DealHoleCards()
{
    for (int32 i = 0; i < 2; i++)
    {
        for (int32 j = 0; j < Players.Num(); j++)
        {
            int32 PlayerIndex = (DealerPosition + 1 + j) % Players.Num();
            if (Players[PlayerIndex] && Players[PlayerIndex]->IsInHand())
            {
                FCard Card = Deck.DrawCard();
                Players[PlayerIndex]->ReceiveCard(Card);
            }
        }
    }
}

void UGameFlowManager::DealCommunityCards(int32 NumCards)
{
    UE_LOG(LogTemp, Log, TEXT("\n=== %s ==="), *UEnum::GetValueAsString(CurrentPhase));

    for (int32 i = 0; i < NumCards; i++)
    {
        FCard Card = Deck.DrawCard();
        CommunityCards.Add(Card);
        UE_LOG(LogTemp, Log, TEXT("Community Card: %s"), *Card.ToString());
    }
}

void UGameFlowManager::ProcessShowdown()
{
    UE_LOG(LogTemp, Log, TEXT("\n=== Showdown ==="));

    // For now, just give pot to the first active player
    for (auto& Player : Players)
    {
        if (Player && Player->IsInHand())
        {
            int32 PotAmount = RoundManager->GetMainPot();
            Player->WinPot(PotAmount);
            break;
        }
    }

    EndHand();
}

void UGameFlowManager::EndHand()
{
    // Clear all player hands
    for (auto& Player : Players)
    {
        if (Player)
        {
            Player->ClearHand();
        }
    }

    bHandInProgress = false;
    CurrentPhase = EPokerGamePhase::HandComplete;
    CommunityCards.Empty();

    // Rotate dealer position
    DealerPosition = (DealerPosition + 1) % Players.Num();

    OnHandComplete.Broadcast();
}

void UGameFlowManager::LogGameState() const
{
    UE_LOG(LogTemp, Log, TEXT("\n=== Game State ==="));
    UE_LOG(LogTemp, Log, TEXT("Phase: %s"), *UEnum::GetValueAsString(CurrentPhase));
    UE_LOG(LogTemp, Log, TEXT("Dealer Position: %d"), DealerPosition);
    UE_LOG(LogTemp, Log, TEXT("Main Pot: %d"), RoundManager->GetMainPot());

    if (CommunityCards.Num() > 0)
    {
        FString BoardStr;
        for (const FCard& Card : CommunityCards)
        {
            BoardStr += Card.ToString() + TEXT(" ");
        }
        UE_LOG(LogTemp, Log, TEXT("Board: %s"), *BoardStr);
    }
}