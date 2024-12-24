// Deck.h
#pragma once

#include "CoreMinimal.h"
#include "Card.h"
#include "Deck.generated.h"

USTRUCT()
struct POKER_API FDeck
{
    GENERATED_BODY()

public:
    FDeck();

    void Initialize();
    void Shuffle();
    FCard DrawCard();
    void Reset();
    int32 GetRemainingCards() const { return Cards.Num(); }

private:
    UPROPERTY()
    TArray<FCard> Cards;
};