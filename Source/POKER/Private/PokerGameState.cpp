// PokerGameState.cpp
#include "PokerGameState.h"    // Must be first!

APokerGameState::APokerGameState()
{
    PrimaryActorTick.bCanEverTick = false;

    CurrentPhase = EPokerGamePhase::None;  // Fixed from EPoker to EPokerGamePhase
    PotSize = 0;
    CurrentBet = 0;
    SmallBlindAmount = 10;
    DealerPosition = 0;
    CurrentPlayerTurn = 0;
    LastRaisePosition = -1;
    bHandInProgress = false;
}

void APokerGameState::BeginPlay()
{
    Super::BeginPlay();
}

void APokerGameState::InitializeGame(int32 NumPlayers, int32 StartingChips, int32 SmallBlind)
{
    SmallBlindAmount = SmallBlind;
    // Note: Player creation should be handled by GameMode, this is just for initialization
    CurrentPhase = EPokerGamePhase::Initializing;
}

void APokerGameState::StartNewHand()
{
    if (bHandInProgress || Players.Num() < 2)
    {
        return;
    }

    // Reset game state
    PotSize = 0;
    CurrentBet = 0;
    LastRaisePosition = -1;
    bHandInProgress = true;
    CommunityCards.Empty();

    // Reset deck and shuffle
    Deck.Reset();
    Deck.Shuffle();

    // Prepare all players
    for (auto& Player : Players)
    {
        if (Player)
        {
            Player->PrepareForNewHand();
        }
    }

    // Deal hole cards
    DealHoleCards();

    // Collect blinds
    CollectBlinds();

    CurrentPhase = EPokerGamePhase::PreFlop;
    CurrentPlayerTurn = (DealerPosition + 3) % Players.Num(); // Start with UTG
}

void APokerGameState::DealHoleCards()
{
    // Deal 2 cards to each player
    for (int32 i = 0; i < 2; i++)
    {
        for (int32 j = 0; j < Players.Num(); j++)
        {
            int32 PlayerIndex = (DealerPosition + 1 + j) % Players.Num();
            if (Players[PlayerIndex] && Players[PlayerIndex]->IsInHand())
            {
                Players[PlayerIndex]->ReceiveCard(Deck.DrawCard());
            }
        }
    }
}

void APokerGameState::DealCommunityCards()
{
    switch (CurrentPhase)
    {
    case EPokerGamePhase::Flop:
        // Deal 3 cards
        for (int32 i = 0; i < 3; i++)
        {
            CommunityCards.Add(Deck.DrawCard());
        }
        break;

    case EPokerGamePhase::Turn:
    case EPokerGamePhase::River:
        // Deal 1 card
        CommunityCards.Add(Deck.DrawCard());
        break;

    default:
        break;
    }
}

void APokerGameState::CollectBlinds()
{
    int32 SmallBlindPos = (DealerPosition + 1) % Players.Num();
    int32 BigBlindPos = (DealerPosition + 2) % Players.Num();

    // Collect small blind
    if (Players[SmallBlindPos] && Players[SmallBlindPos]->IsInHand())
    {
        if (Players[SmallBlindPos]->PlaceBet(SmallBlindAmount))
        {
            PotSize += SmallBlindAmount;
        }
    }

    // Collect big blind
    if (Players[BigBlindPos] && Players[BigBlindPos]->IsInHand())
    {
        if (Players[BigBlindPos]->PlaceBet(SmallBlindAmount * 2))
        {
            PotSize += SmallBlindAmount * 2;
        }
    }

    CurrentBet = SmallBlindAmount * 2;
}

void APokerGameState::ProcessPlayerAction(int32 PlayerIndex, EPlayerAction Action)
{
    if (!bHandInProgress || PlayerIndex != CurrentPlayerTurn)
    {
        return;
    }

    auto Player = Players[PlayerIndex];
    if (!Player || !Player->IsInHand())
    {
        return;
    }

    // Process the action
    switch (Action)
    {
    case EPlayerAction::Fold:
        Player->ClearHand();
        break;

    case EPlayerAction::Call:
    {
        int32 AmountToCall = CurrentBet - Player->GetCurrentBet();
        if (Player->PlaceBet(AmountToCall))
        {
            PotSize += AmountToCall;
        }
    }
    break;

    case EPlayerAction::Raise:
    {
        // For now, raise is always 2x the current bet
        int32 RaiseAmount = CurrentBet * 2;
        int32 AmountToRaise = RaiseAmount - Player->GetCurrentBet();
        if (Player->PlaceBet(AmountToRaise))
        {
            PotSize += AmountToRaise;
            CurrentBet = RaiseAmount;
            LastRaisePosition = PlayerIndex;
        }
    }
    break;

    default:
        break;
    }

    // Move to next player
    do
    {
        CurrentPlayerTurn = (CurrentPlayerTurn + 1) % Players.Num();
    } while (!Players[CurrentPlayerTurn] || !Players[CurrentPlayerTurn]->IsInHand());

    // Check if betting round is complete
    if (IsRoundComplete())
    {
        AdvanceGamePhase();
    }
}

bool APokerGameState::IsRoundComplete() const
{
    // Round is complete when we've reached the last raiser or the big blind in pre-flop
    if (CurrentPhase == EPokerGamePhase::PreFlop && LastRaisePosition == -1)
    {
        return CurrentPlayerTurn == (DealerPosition + 2) % Players.Num();
    }

    return LastRaisePosition != -1 && CurrentPlayerTurn == LastRaisePosition;
}

void APokerGameState::AdvanceGamePhase()
{
    switch (CurrentPhase)
    {
    case EPokerGamePhase::PreFlop:
        CurrentPhase = EPokerGamePhase::Flop;
        DealCommunityCards();
        break;

    case EPokerGamePhase::Flop:
        CurrentPhase = EPokerGamePhase::None;  // Change from EPoker to EPokerGamePhase

            // PokerGameState.cpp (continued)
            CurrentPhase = EPokerGamePhase::Turn;
        DealCommunityCards();
        break;

    case EPokerGamePhase::Turn:
        CurrentPhase = EPokerGamePhase::River;
        DealCommunityCards();
        break;

    case EPokerGamePhase::River:
        CurrentPhase = EPokerGamePhase::Showdown;
        DetermineWinner();
        break;

    case EPokerGamePhase::Showdown:
        CurrentPhase = EPokerGamePhase::HandComplete;
        bHandInProgress = false;
        RotateDealer();
        break;

    default:
        break;
    }

    if (CurrentPhase != EPokerGamePhase::HandComplete && CurrentPhase != EPokerGamePhase::Showdown)
    {
        // Reset betting round state
        CurrentBet = 0;
        LastRaisePosition = -1;
        CurrentPlayerTurn = (DealerPosition + 1) % Players.Num();

        // Reset player bets for the new round
        for (auto& Player : Players)
        {
            if (Player && Player->IsInHand())
            {
                // We'll need to add a method to reset current bet without clearing the whole hand
                // This is a TODO for the Player interface
            }
        }
    }
}

void APokerGameState::DetermineWinner()
{
    // For now, just pick a random winner among remaining players
    // TODO: Implement proper hand evaluation
    TArray<TScriptInterface<IPokerPlayerInterface>> RemainingPlayers;

    for (auto& Player : Players)
    {
        if (Player && Player->IsInHand())
        {
            RemainingPlayers.Add(Player);
        }
    }

    if (RemainingPlayers.Num() > 0)
    {
        int32 WinnerIndex = FMath::RandRange(0, RemainingPlayers.Num() - 1);
        RemainingPlayers[WinnerIndex]->WinPot(PotSize);

        UE_LOG(LogTemp, Log, TEXT("Player %s wins pot of %d"),
            *RemainingPlayers[WinnerIndex]->GetPlayerName(),
            PotSize);
    }
}

void APokerGameState::RotateDealer()
{
    // Move dealer button to next active player
    do
    {
        DealerPosition = (DealerPosition + 1) % Players.Num();
    } while (!Players[DealerPosition] || Players[DealerPosition]->GetChipCount() <= 0);
}