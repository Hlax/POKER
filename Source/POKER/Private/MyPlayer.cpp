// MyPlayer.cpp
#include "MyPlayer.h"

AMyPlayer::AMyPlayer()
{
    PrimaryActorTick.bCanEverTick = false;

    PlayerName = TEXT("Player");
    ChipCount = 1000;
    bIsInHand = false;
    CurrentBet = 0;
    SeatIndex = -1;

    HoleCards.Reserve(MAX_HOLE_CARDS);
}

void AMyPlayer::BeginPlay()
{
    Super::BeginPlay();
    UE_LOG(LogTemp, Log, TEXT("Player %s spawned with %d chips"), *PlayerName, ChipCount);
}

EPlayerAction AMyPlayer::RequestAction(int32 MinimumBet, const TArray<FCard>& CommunityCards)
{
    // Base player implementation - will be overridden by UI input in a derived class
    // For testing, we'll just fold
    EPlayerAction Action = EPlayerAction::Fold;
    DebugPrintAction(Action, MinimumBet);
    return Action;
}

bool AMyPlayer::PlaceBet(int32 Amount)
{
    if (Amount <= 0 || Amount > ChipCount || !bIsInHand)
    {
        UE_LOG(LogTemp, Warning, TEXT("Invalid bet: Player %s attempted to bet %d chips (Has: %d, InHand: %s)"),
            *PlayerName, Amount, ChipCount, bIsInHand ? TEXT("true") : TEXT("false"));
        return false;
    }

    ChipCount -= Amount;
    CurrentBet += Amount;

    UE_LOG(LogTemp, Log, TEXT("Player %s bet %d chips (Current bet: %d, Remaining: %d)"),
        *PlayerName, Amount, CurrentBet, ChipCount);
    return true;
}

void AMyPlayer::WinPot(int32 Amount)
{
    if (Amount <= 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("Invalid pot win amount: %d for player %s"), Amount, *PlayerName);
        return;
    }

    ChipCount += Amount;
    UE_LOG(LogTemp, Log, TEXT("Player %s won pot of %d chips (New total: %d)"),
        *PlayerName, Amount, ChipCount);
}

bool AMyPlayer::ReceiveCard(const FCard& Card)
{
    if (HoleCards.Num() >= MAX_HOLE_CARDS)
    {
        UE_LOG(LogTemp, Warning, TEXT("Player %s cannot receive more cards (max: %d)"),
            *PlayerName, MAX_HOLE_CARDS);
        return false;
    }

    HoleCards.Add(Card);
    UE_LOG(LogTemp, Log, TEXT("Player %s received card: %s"), *PlayerName, *Card.ToString());
    return true;
}

void AMyPlayer::PrepareForNewHand()
{
    // First clear any existing hand
    ClearHand();

    // Mark as in hand if they have chips
    if (ChipCount > 0)
    {
        bIsInHand = true;
        CurrentBet = 0;
        HoleCards.Empty();
        HoleCards.Reserve(MAX_HOLE_CARDS);

        UE_LOG(LogTemp, Log, TEXT("Player %s prepared for new hand. Chips: %d"),
            *PlayerName, ChipCount);
    }
    else
    {
        bIsInHand = false;
        UE_LOG(LogTemp, Warning, TEXT("Player %s cannot join hand - no chips"), *PlayerName);
    }
}

void AMyPlayer::ClearHand()
{
    HoleCards.Empty();
    bIsInHand = false;
    CurrentBet = 0;
    UE_LOG(LogTemp, Log, TEXT("Player %s's hand cleared"), *PlayerName);
}

void AMyPlayer::ResetBetForNewRound()
{
    CurrentBet = 0;
    UE_LOG(LogTemp, Log, TEXT("Player %s's bet reset for new round"), *PlayerName);
}

bool AMyPlayer::CanMakeAction(EPlayerAction Action, int32 MinimumBet) const
{
    if (!bIsInHand)
    {
        return false;
    }

    switch (Action)
    {
    case EPlayerAction::Fold:
        return true;

    case EPlayerAction::Check:
        return MinimumBet <= CurrentBet;

    case EPlayerAction::Call:
        return (MinimumBet - CurrentBet) <= ChipCount;

    case EPlayerAction::Raise:
        // Assuming minimum raise is 2x the current minimum bet
        return (MinimumBet * 2 - CurrentBet) <= ChipCount;

    default:
        return false;
    }
}

void AMyPlayer::DebugPrintHand() const
{
    UE_LOG(LogTemp, Log, TEXT("\n=== Player Status ==="));
    UE_LOG(LogTemp, Log, TEXT("Name: %s"), *PlayerName);
    UE_LOG(LogTemp, Log, TEXT("Chips: %d"), ChipCount);
    UE_LOG(LogTemp, Log, TEXT("Current Bet: %d"), CurrentBet);
    UE_LOG(LogTemp, Log, TEXT("In Hand: %s"), bIsInHand ? TEXT("Yes") : TEXT("No"));
    UE_LOG(LogTemp, Log, TEXT("Seat Index: %d"), SeatIndex);

    if (HoleCards.Num() > 0)
    {
        UE_LOG(LogTemp, Log, TEXT("Hole Cards:"));
        for (const FCard& Card : HoleCards)
        {
            UE_LOG(LogTemp, Log, TEXT("  %s"), *Card.ToString());
        }
    }
    else
    {
        UE_LOG(LogTemp, Log, TEXT("No cards in hand"));
    }
    UE_LOG(LogTemp, Log, TEXT("================\n"));
}

void AMyPlayer::DebugPrintAction(EPlayerAction Action, int32 MinimumBet) const
{
    FString ActionStr;
    switch (Action)
    {
    case EPlayerAction::Check:
        ActionStr = TEXT("Check");
        break;
    case EPlayerAction::Call:
        ActionStr = TEXT("Call");
        break;
    case EPlayerAction::Raise:
        ActionStr = TEXT("Raise");
        break;
    case EPlayerAction::Fold:
        ActionStr = TEXT("Fold");
        break;
    default:
        ActionStr = TEXT("Unknown");
        break;
    }

    UE_LOG(LogTemp, Log, TEXT("Player %s action: %s (Minimum bet: %d)"),
        *PlayerName, *ActionStr, MinimumBet);
    UE_LOG(LogTemp, Log, TEXT("  Current chips: %d"), ChipCount);
    UE_LOG(LogTemp, Log, TEXT("  Current bet: %d"), CurrentBet);
    UE_LOG(LogTemp, Log, TEXT("  Can make action: %s"),
        CanMakeAction(Action, MinimumBet) ? TEXT("Yes") : TEXT("No"));
}

void AMyPlayer::ForceAction(EPlayerAction Action)
{
    switch (Action)
    {
    case EPlayerAction::Fold:
        bIsInHand = false;
        ClearHand();
        UE_LOG(LogTemp, Log, TEXT("Player %s forced to fold"), *PlayerName);
        break;

    case EPlayerAction::Check:
        UE_LOG(LogTemp, Log, TEXT("Player %s forced to check"), *PlayerName);
        break;

    case EPlayerAction::Call:
        // Handle forced call (this might need additional logic depending on your requirements)
        UE_LOG(LogTemp, Log, TEXT("Player %s forced to call"), *PlayerName);
        break;

    default:
        UE_LOG(LogTemp, Warning, TEXT("Invalid forced action for player %s"), *PlayerName);
        break;
    }
}