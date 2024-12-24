// AIPlayer.h
#pragma once

#include "CoreMinimal.h"
#include "MyPlayer.h"
#include "AIPlayer.generated.h"

UCLASS()
class POKER_API AAIPlayer : public AMyPlayer
{
    GENERATED_BODY()

public:
    AAIPlayer();

    // Override the RequestAction from parent to implement AI logic
    virtual EPlayerAction RequestAction(int32 MinimumBet, const TArray<FCard>& CommunityCards) override;
    virtual bool IsAIPlayer() const override { return true; }

private:
    float EvaluateHandStrength(const TArray<FCard>& CommunityCards) const;
    bool ShouldBluff() const;
};