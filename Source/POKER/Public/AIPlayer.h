// AIPlayer.h
#pragma once

#include "CoreMinimal.h"
#include "MyPlayer.h"
#include "AIPlayer.generated.h"

USTRUCT()
struct POKER_API FAIPlayer : public FMyPlayer
{
    GENERATED_BODY()

public:
    FAIPlayer();

    virtual EPlayerAction RequestAction(
        int32 MinimumBet,
        const TArray<FCard>& CommunityCards
    ) override;

private:
    float EvaluateHandStrength(const TArray<FCard>& CommunityCards) const;
    bool ShouldBluff() const;
};