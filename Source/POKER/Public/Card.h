// Card.h
#pragma once

#include "CoreMinimal.h"
#include "Card.generated.h"

UENUM()
enum class ESuit : uint8
{
    Hearts UMETA(DisplayName = "Hearts"),
    Diamonds UMETA(DisplayName = "Diamonds"),
    Clubs UMETA(DisplayName = "Clubs"),
    Spades UMETA(DisplayName = "Spades")
};

UENUM()
enum class ERank : uint8
{
    Two = 2 UMETA(DisplayName = "Two"),
    Three = 3 UMETA(DisplayName = "Three"),
    Four = 4 UMETA(DisplayName = "Four"),
    Five = 5 UMETA(DisplayName = "Five"),
    Six = 6 UMETA(DisplayName = "Six"),
    Seven = 7 UMETA(DisplayName = "Seven"),
    Eight = 8 UMETA(DisplayName = "Eight"),
    Nine = 9 UMETA(DisplayName = "Nine"),
    Ten = 10 UMETA(DisplayName = "Ten"),
    Jack = 11 UMETA(DisplayName = "Jack"),
    Queen = 12 UMETA(DisplayName = "Queen"),
    King = 13 UMETA(DisplayName = "King"),
    Ace = 14 UMETA(DisplayName = "Ace")
};

USTRUCT()
struct POKER_API FCard
{
    GENERATED_BODY()

public:
    FCard();
    FCard(ESuit InSuit, ERank InRank);

    UPROPERTY()
    ESuit Suit;

    UPROPERTY()
    ERank Rank;

    FString ToString() const;
};