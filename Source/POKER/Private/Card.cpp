// Card.cpp
#include "Card.h"

FCard::FCard()
    : Suit(ESuit::Hearts)
    , Rank(ERank::Two)
{
}

FCard::FCard(ESuit InSuit, ERank InRank)
    : Suit(InSuit)
    , Rank(InRank)
{
}

FString FCard::ToString() const
{
    const UEnum* SuitEnum = StaticEnum<ESuit>();
    const UEnum* RankEnum = StaticEnum<ERank>();

    if (SuitEnum && RankEnum)
    {
        FString SuitStr = SuitEnum->GetDisplayNameTextByValue(static_cast<int64>(Suit)).ToString();
        FString RankStr = RankEnum->GetDisplayNameTextByValue(static_cast<int64>(Rank)).ToString();
        return FString::Printf(TEXT("%s of %s"), *RankStr, *SuitStr);
    }

    return TEXT("Invalid Card");
}