// BettingManager.h
#pragma once

#include "CoreMinimal.h"
#include "PokerType.h"
#include "IPokerPlayerInterface.h"
#include "BettingManager.generated.h"

USTRUCT()
struct FBettingRound
{
    GENERATED_BODY()

    UPROPERTY()
    int32 CurrentBet;

    UPROPERTY()
    int32 MinimumRaise;

    UPROPERTY()
    int32 LastRaiseAmount;

    UPROPERTY()
    int32 MainPot;

    UPROPERTY()
    TArray<int32> SidePots;

    UPROPERTY()
    TArray<int32> PlayerBets;

    FBettingRound()
        : CurrentBet(0)
        , MinimumRaise(0)
        , LastRaiseAmount(0)
        , MainPot(0)
    {
    }
};

UCLASS()
class POKER_API UBettingManager : public UObject
{
    GENERATED_BODY()

public:
    UBettingManager();

    // Initialize a new betting round
    void StartNewRound(const TArray<TScriptInterface<IPokerPlayerInterface>>& ActivePlayers);

    // Process a player's action
    bool ProcessAction(TScriptInterface<IPokerPlayerInterface> Player, EPlayerAction Action, int32& BetAmount);

    // Check if betting round is complete
    bool IsRoundComplete() const;

    // Get current betting state
    int32 GetCurrentBet() const { return CurrentRound.CurrentBet; }
    int32 GetMainPot() const { return CurrentRound.MainPot; }
    TArray<int32> GetSidePots() const { return CurrentRound.SidePots; }

    // Handle all-in scenarios
    void CreateSidePot(const TArray<TScriptInterface<IPokerPlayerInterface>>& AllInPlayers);

private:
    UPROPERTY()
    FBettingRound CurrentRound;

    UPROPERTY()
    TArray<TScriptInterface<IPokerPlayerInterface>> RoundPlayers;

    bool ValidateAction(const TScriptInterface<IPokerPlayerInterface>& Player, EPlayerAction Action) const;
    void UpdatePot(int32 Amount);
    int32 CalculateMinimumBet(const TScriptInterface<IPokerPlayerInterface>& Player) const;
};