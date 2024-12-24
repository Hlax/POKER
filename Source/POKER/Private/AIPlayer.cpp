// AIPlayer.cpp
#include "AIPlayer.h"

FAIPlayer::FAIPlayer() : FMyPlayer()
{
    Name = TEXT("AI Player");
}

EPlayerAction FAIPlayer::RequestAction(int32 MinimumBet, const TArray<FCard>& CommunityCards)
{
    // Simple AI logic
    float HandStrength = EvaluateHandStrength(CommunityCards);
    bool Bluffing = ShouldBluff();

    // Log AI thinking
    UE_LOG(LogTemp, Log, TEXT("AI %s evaluating action:"), *Name);
    UE_LOG(LogTemp, Log, TEXT("  Hand Strength: %.2f"), HandStrength);
    UE_LOG(LogTemp, Log, TEXT("  Bluffing: %s"), Bluffing ? TEXT("Yes") : TEXT("No"));
    UE_LOG(LogTemp, Log, TEXT("  Minimum Bet: %d"), MinimumBet);

    if (Bluffing)
    {
        return EPlayerAction::Raise;
    }

    if (HandStrength < 0.3f)
    {
        return EPlayerAction::Fold;
    }
    else if (HandStrength < 0.7f || MinimumBet > ChipCount / 4)
    {
        return EPlayerAction::Call;
    }
    else
    {
        return EPlayerAction::Raise;
    }
}

float FAIPlayer::EvaluateHandStrength(const TArray<FCard>& CommunityCards) const
{
    // For now, return a random value between 0 and 1
    return FMath::FRand();
}

bool FAIPlayer::ShouldBluff() const
{
    // 10% chance to bluff
    return FMath::FRand() < 0.1f;
}