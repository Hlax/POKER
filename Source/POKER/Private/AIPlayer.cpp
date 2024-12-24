// AIPlayer.cpp
#include "AIPlayer.h"

AAIPlayer::AAIPlayer()
{
    // Initialize in constructor instead of direct assignment
    SetPlayerName(TEXT("AI Player"));
}

EPlayerAction AAIPlayer::RequestAction(int32 MinimumBet, const TArray<FCard>& CommunityCards)
{
    // Simple AI logic
    float HandStrength = EvaluateHandStrength(CommunityCards);
    bool Bluffing = ShouldBluff();

    // Log AI thinking
    UE_LOG(LogTemp, Log, TEXT("AI %s evaluating action:"), *GetPlayerName());
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
    else if (HandStrength < 0.7f || MinimumBet > GetChipCount() / 4)
    {
        return EPlayerAction::Call;
    }
    else
    {
        return EPlayerAction::Raise;
    }
}

float AAIPlayer::EvaluateHandStrength(const TArray<FCard>& CommunityCards) const
{
    return FMath::FRand();
}

bool AAIPlayer::ShouldBluff() const
{
    return FMath::FRand() < 0.1f;
}