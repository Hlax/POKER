#include "AIPlayer.h"

AAIPlayer::AAIPlayer()
{
    SetPlayerName(TEXT("AI Player"));
}

EPlayerAction AAIPlayer::RequestAction(int32 MinimumBet, const TArray<FCard>& CommunityCards)
{
    // Super simple AI logic for testing:
    // - If no minimum bet, check
    // - If has minimum bet, just call
    // - If can't afford the call, fold

    UE_LOG(LogTemp, Log, TEXT("AI %s evaluating action:"), *GetPlayerName());
    UE_LOG(LogTemp, Log, TEXT("  Minimum Bet: %d"), MinimumBet);
    UE_LOG(LogTemp, Log, TEXT("  Current Chips: %d"), GetChipCount());

    if (MinimumBet <= 0)
    {
        UE_LOG(LogTemp, Log, TEXT("  Action: Check (no minimum bet)"));
        return EPlayerAction::Check;
    }
    else if (MinimumBet <= GetChipCount())
    {
        UE_LOG(LogTemp, Log, TEXT("  Action: Call %d"), MinimumBet);
        return EPlayerAction::Call;
    }
    else
    {
        UE_LOG(LogTemp, Log, TEXT("  Action: Fold (can't afford call)"));
        return EPlayerAction::Fold;
    }
}