// HandEvaluator.h
#pragma once

#include "CoreMinimal.h"
#include "Card.h"
#include "HandEvaluator.generated.h"

UENUM(BlueprintType)
enum class EPokerHand : uint8
{
    HighCard        UMETA(DisplayName = "High Card"),
    OnePair         UMETA(DisplayName = "One Pair"),
    TwoPair         UMETA(DisplayName = "Two Pair"),
    ThreeOfAKind    UMETA(DisplayName = "Three of a Kind"),
    Straight        UMETA(DisplayName = "Straight"),
    Flush           UMETA(DisplayName = "Flush"),
    FullHouse       UMETA(DisplayName = "Full House"),
    FourOfAKind     UMETA(DisplayName = "Four of a Kind"),
    StraightFlush   UMETA(DisplayName = "Straight Flush"),
    RoyalFlush      UMETA(DisplayName = "Royal Flush")
};

USTRUCT(BlueprintType)
struct POKER_API FHandRank
{
    GENERATED_BODY()

    UPROPERTY()
    EPokerHand HandType;

    UPROPERTY()
    TArray<ERank> Kickers;

    // For comparing hand strengths
    bool operator>(const FHandRank& Other) const;
    bool operator<(const FHandRank& Other) const;
    bool operator==(const FHandRank& Other) const;
};

UCLASS()
class POKER_API UHandEvaluator : public UObject
{
    GENERATED_BODY()

public:
    static FHandRank EvaluateHand(const TArray<FCard>& HoleCards, const TArray<FCard>& CommunityCards);
    static float CalculateHandStrength(const TArray<FCard>& HoleCards, const TArray<FCard>& CommunityCards);

private:
    static bool IsFlush(const TArray<FCard>& Cards, TArray<FCard>& FlushCards);
    static bool IsStraight(const TArray<FCard>& Cards, TArray<FCard>& StraightCards);
    static void SortCardsByRank(TArray<FCard>& Cards);
    static TArray<FCard> GetBestFiveCards(const TArray<FCard>& AllCards);
};