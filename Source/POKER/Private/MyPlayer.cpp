// MyPlayer.cpp
#include "MyPlayer.h"

FMyPlayer::FMyPlayer()
    : Name(TEXT("Player"))
    , ChipCount(1000)
    , bIsInHand(false)
    , CurrentBet(0)
{
    HoleCards.Reserve(MAX_HOLE_CARDS);
}

bool FMyPlayer::ReceiveCard(const FCard& Card)
{
    if (HoleCards.Num() >= MAX_HOLE_CARDS)
    {
        return false;
    }

    HoleCards.Add(Card);
    return true;
}

void FMyPlayer::ClearHand()
{
    HoleCards.Empty();
    bIsInHand = false;
}

bool FMyPlayer::PlaceBet(int32 Amount)
{
    if (Amount > ChipCount || !bIsInHand)
    {
        return false;
    }

    ChipCount -= Amount;
    CurrentBet += Amount;
    return true;
}

void FMyPlayer::WinPot(int32 Amount)
{
    ChipCount += Amount;
}

void FMyPlayer::PrepareForNewHand()
{
    ClearHand();
    bIsInHand = true;
    CurrentBet = 0;
}

EPlayerAction FMyPlayer::RequestAction(int32 MinimumBet, const TArray<FCard>& CommunityCards)
{
    // Base player always folds
    return EPlayerAction::Fold;
}

void FMyPlayer::DebugPrintHand() const
{
    UE_LOG(LogTemp, Log, TEXT("\nPlayer: %s"), *Name);
    UE_LOG(LogTemp, Log, TEXT("Chips: %d"), ChipCount);
    UE_LOG(LogTemp, Log, TEXT("Current Bet: %d"), CurrentBet);
    UE_LOG(LogTemp, Log, TEXT("In Hand: %s"), bIsInHand ? TEXT("Yes") : TEXT("No"));

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
}