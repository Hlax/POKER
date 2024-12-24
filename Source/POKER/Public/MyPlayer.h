// MyPlayer.h
#pragma once

#include "CoreMinimal.h"
#include "Card.h"
#include "MyPlayer.generated.h"

UENUM()
enum class EPlayerAction : uint8
{
    None,
    Check,
    Call,
    Raise,
    Fold
};

USTRUCT()
struct POKER_API FMyPlayer
{
    GENERATED_BODY()

public:
    FMyPlayer();
    virtual ~FMyPlayer() = default; // Add virtual destructor

    bool ReceiveCard(const FCard& Card);
    void ClearHand();
    const TArray<FCard>& GetHoleCards() const { return HoleCards; }

    bool PlaceBet(int32 Amount);
    void WinPot(int32 Amount);
    void PrepareForNewHand();

    // Basic decision function
    virtual EPlayerAction RequestAction(
        int32 MinimumBet,
        const TArray<FCard>& CommunityCards
    );

    void DebugPrintHand() const;

    UPROPERTY()
    FString Name;

protected:
    UPROPERTY()
    int32 ChipCount;

    UPROPERTY()
    bool bIsInHand;

    UPROPERTY()
    int32 CurrentBet;

    static const int32 MAX_HOLE_CARDS = 2;

    UPROPERTY()
    TArray<FCard> HoleCards;
};