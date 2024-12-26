// HandEvaluator.cpp
#include "HandEvaluator.h"

bool FHandRank::operator>(const FHandRank& Other) const
{
    if (HandType != Other.HandType)
        return static_cast<uint8>(HandType) > static_cast<uint8>(Other.HandType);

    for (int32 i = 0; i < FMath::Min(Kickers.Num(), Other.Kickers.Num()); i++)
    {
        if (Kickers[i] != Other.Kickers[i])
            return static_cast<uint8>(Kickers[i]) > static_cast<uint8>(Other.Kickers[i]);
    }
    return false;
}

bool FHandRank::operator<(const FHandRank& Other) const
{
    return !(*this > Other) && !(*this == Other);
}

bool FHandRank::operator==(const FHandRank& Other) const
{
    if (HandType != Other.HandType)
        return false;

    if (Kickers.Num() != Other.Kickers.Num())
        return false;

    for (int32 i = 0; i < Kickers.Num(); i++)
    {
        if (Kickers[i] != Other.Kickers[i])
            return false;
    }
    return true;
}

void UHandEvaluator::SortCardsByRank(TArray<FCard>& Cards)
{
    Cards.Sort([](const FCard& A, const FCard& B) {
        return static_cast<int32>(A.Rank) < static_cast<int32>(B.Rank);
        });
}

bool UHandEvaluator::IsFlush(const TArray<FCard>& Cards, TArray<FCard>& FlushCards)
{
    TArray<int32> SuitCounts;
    SuitCounts.Init(0, 4);

    for (const FCard& Card : Cards)
    {
        SuitCounts[static_cast<int32>(Card.Suit)]++;
    }

    for (int32 i = 0; i < SuitCounts.Num(); i++)
    {
        if (SuitCounts[i] >= 5)
        {
            ESuit FlushSuit = static_cast<ESuit>(i);
            for (const FCard& Card : Cards)
            {
                if (Card.Suit == FlushSuit)
                {
                    FlushCards.Add(Card);
                }
            }
            return true;
        }
    }
    return false;
}

bool UHandEvaluator::IsStraight(const TArray<FCard>& Cards, TArray<FCard>& StraightCards)
{
    if (Cards.Num() < 5) return false;

    TArray<FCard> SortedCards = Cards;
    SortCardsByRank(SortedCards);

    int32 ConsecutiveCount = 1;
    TArray<FCard> PotentialStraight;
    PotentialStraight.Add(SortedCards[0]);

    for (int32 i = 1; i < SortedCards.Num(); i++)
    {
        if (static_cast<int32>(SortedCards[i].Rank) == static_cast<int32>(SortedCards[i - 1].Rank))
            continue;

        if (static_cast<int32>(SortedCards[i].Rank) == static_cast<int32>(SortedCards[i - 1].Rank) + 1)
        {
            ConsecutiveCount++;
            PotentialStraight.Add(SortedCards[i]);

            if (ConsecutiveCount >= 5)
            {
                StraightCards = PotentialStraight;
                return true;
            }
        }
        else
        {
            ConsecutiveCount = 1;
            PotentialStraight.Empty();
            PotentialStraight.Add(SortedCards[i]);
        }
    }

    // Check for Ace-low straight (A,2,3,4,5)
    if (SortedCards.Last().Rank == ERank::Ace)
    {
        PotentialStraight.Empty();
        bool HasTwo = false, HasThree = false, HasFour = false, HasFive = false;

        for (const FCard& Card : SortedCards)
        {
            switch (Card.Rank)
            {
            case ERank::Two: HasTwo = true; break;
            case ERank::Three: HasThree = true; break;
            case ERank::Four: HasFour = true; break;
            case ERank::Five: HasFive = true; break;
            }
        }

        if (HasTwo && HasThree && HasFour && HasFive)
        {
            for (const FCard& Card : SortedCards)
            {
                if (Card.Rank == ERank::Ace ||
                    (static_cast<int32>(Card.Rank) >= static_cast<int32>(ERank::Two) &&
                        static_cast<int32>(Card.Rank) <= static_cast<int32>(ERank::Five)))
                {
                    StraightCards.Add(Card);
                }
            }
            return true;
        }
    }

    return false;
}

TArray<FCard> UHandEvaluator::GetBestFiveCards(const TArray<FCard>& AllCards)
{
    if (AllCards.Num() <= 5)
        return AllCards;

    TArray<FCard> FlushCards;
    if (IsFlush(AllCards, FlushCards))
    {
        TArray<FCard> StraightFlushCards;
        if (IsStraight(FlushCards, StraightFlushCards))
        {
            return StraightFlushCards;
        }
        return FlushCards;
    }

    TArray<FCard> StraightCards;
    if (IsStraight(AllCards, StraightCards))
    {
        return StraightCards;
    }

    TArray<FCard> SortedCards = AllCards;
    SortCardsByRank(SortedCards);

    return TArray<FCard>(SortedCards.GetData() + SortedCards.Num() - 5, 5);
}

FHandRank UHandEvaluator::EvaluateHand(const TArray<FCard>& HoleCards, const TArray<FCard>& CommunityCards)
{
    TArray<FCard> AllCards = HoleCards;
    AllCards.Append(CommunityCards);

    FHandRank Rank;
    Rank.HandType = EPokerHand::HighCard;

    TArray<FCard> FlushCards;
    if (IsFlush(AllCards, FlushCards))
    {
        TArray<FCard> StraightCards;
        if (IsStraight(FlushCards, StraightCards))
        {
            bool IsRoyal = true;
            for (const FCard& Card : StraightCards)
            {
                if (static_cast<int32>(Card.Rank) < static_cast<int32>(ERank::Ten))
                {
                    IsRoyal = false;
                    break;
                }
            }
            Rank.HandType = IsRoyal ? EPokerHand::RoyalFlush : EPokerHand::StraightFlush;
            return Rank;
        }
        Rank.HandType = EPokerHand::Flush;
    }

    TArray<FCard> StraightCards;
    if (IsStraight(AllCards, StraightCards))
    {
        Rank.HandType = EPokerHand::Straight;
        return Rank;
    }

    TMap<ERank, int32> RankCounts;
    for (const FCard& Card : AllCards)
    {
        RankCounts.FindOrAdd(Card.Rank, 0)++;
    }

    bool HasThreeOfAKind = false;
    bool HasPair = false;

    for (const auto& Pair : RankCounts)
    {
        if (Pair.Value == 4)
        {
            Rank.HandType = EPokerHand::FourOfAKind;
            Rank.Kickers.Add(Pair.Key);
            return Rank;
        }
        else if (Pair.Value == 3)
        {
            HasThreeOfAKind = true;
            Rank.Kickers.Add(Pair.Key);
        }
        else if (Pair.Value == 2)
        {
            HasPair = true;
            Rank.Kickers.Add(Pair.Key);
        }
    }

    if (HasThreeOfAKind && HasPair)
    {
        Rank.HandType = EPokerHand::FullHouse;
    }
    else if (HasThreeOfAKind)
    {
        Rank.HandType = EPokerHand::ThreeOfAKind;
    }
    else if (HasPair)
    {
        if (Rank.Kickers.Num() > 1)
        {
            Rank.HandType = EPokerHand::TwoPair;
        }
        else
        {
            Rank.HandType = EPokerHand::OnePair;
        }
    }

    return Rank;
}

float UHandEvaluator::CalculateHandStrength(const TArray<FCard>& HoleCards, const TArray<FCard>& CommunityCards)
{
    FHandRank Rank = EvaluateHand(HoleCards, CommunityCards);

    float BaseStrength = static_cast<float>(Rank.HandType) / static_cast<float>(EPokerHand::RoyalFlush);

    float KickerBonus = 0.0f;
    for (int32 i = 0; i < Rank.Kickers.Num(); i++)
    {
        KickerBonus += static_cast<float>(Rank.Kickers[i]) /
            (static_cast<float>(ERank::Ace) * FMath::Pow(10.0f, static_cast<float>(i + 1)));
    }

    return BaseStrength + KickerBonus;
}