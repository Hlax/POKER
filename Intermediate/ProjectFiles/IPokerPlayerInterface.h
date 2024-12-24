// IPokerPlayerInterface.h
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Card.h"
#include "PokerType.h"
#include "IPokerPlayerInterface.generated.h"

// This is the UObject wrapper for our interface
UINTERFACE(MinimalAPI)
class UPokerPlayerInterface : public UInterface
{
    GENERATED_BODY()
};

// This is the actual interface that classes will implement
class POKER_API IPokerPlayerInterface
{
    GENERATED_BODY()

public:
    // Core gameplay actions
    virtual EPlayerAction RequestAction(int32 MinimumBet, const TArray<FCard>& CommunityCards) = 0;
    virtual bool PlaceBet(int32 Amount) = 0;
    virtual void WinPot(int32 Amount) = 0;

    // Hand management
    virtual bool ReceiveCard(const FCard& Card) = 0;
    virtual void ClearHand() = 0;
    virtual void PrepareForNewHand() = 0;

    // State queries
    virtual bool IsInHand() const = 0;
    virtual int32 GetChipCount() const = 0;
    virtual int32 GetCurrentBet() const = 0;
    virtual FString GetPlayerName() const = 0;
    virtual int32 GetSeatIndex() const = 0;

    // Networking/Steam related
    virtual bool IsLocalPlayer() const = 0;
    virtual bool IsAIPlayer() const = 0;
};