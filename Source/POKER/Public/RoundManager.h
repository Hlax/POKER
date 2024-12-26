#pragma once

#include "CoreMinimal.h"
#include "BettingManager.h"
#include "HandEvaluator.h"
#include "IPokerPlayerInterface.h"
#include "PokerType.h"
#include "Delegates/Delegate.h"
#include "RoundManager.generated.h"

// Declare the delegate type
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRoundComplete, EPokerGamePhase, CompletedPhase);

USTRUCT()
struct FPlayerRoundInfo
{
    GENERATED_BODY()

    UPROPERTY()
    bool bHasActed;

    UPROPERTY()
    bool bIsAllIn;

    UPROPERTY()
    int32 TotalBet;

    FPlayerRoundInfo()
        : bHasActed(false)
        , bIsAllIn(false)
        , TotalBet(0)
    {}
};

UCLASS()
class POKER_API URoundManager : public UObject
{
    GENERATED_BODY()

public:
    URoundManager();

    // Round setup and management
    void InitializeRound(const TArray<TScriptInterface<IPokerPlayerInterface>>& InPlayers, 
                        int32 InDealerPos, 
                        int32 InSmallBlind);
    
    void StartNewRound(EPokerGamePhase Phase);
    bool ProcessAction(int32 PlayerIndex, EPlayerAction Action);
    void EndRound();

    // Getters
    int32 GetCurrentActor() const { return CurrentActorIndex; }
    int32 GetMainPot() const;
    int32 GetCurrentBet() const { return BettingManager ? BettingManager->GetCurrentBet() : 0; }
    UBettingManager* GetBettingManager() const { return BettingManager; }
    EPokerGamePhase GetCurrentPhase() const { return CurrentPhase; }
    bool IsRoundComplete() const;

    // Player status checks
    bool CanPlayerAct(int32 PlayerIndex) const;
    bool IsPlayerAllIn(int32 PlayerIndex) const;
    TArray<int32> GetAllInPlayers() const;

    // Event when round completes
    UPROPERTY(BlueprintAssignable, Category = "Poker")
    FOnRoundComplete OnRoundComplete;

private:
    UPROPERTY()
    UBettingManager* BettingManager;

    UPROPERTY()
    TArray<TScriptInterface<IPokerPlayerInterface>> Players;

    UPROPERTY()
    TArray<FPlayerRoundInfo> PlayerInfo;

    UPROPERTY()
    EPokerGamePhase CurrentPhase;

    UPROPERTY()
    int32 DealerPosition;

    UPROPERTY()
    int32 CurrentActorIndex;

    UPROPERTY()
    int32 LastRaiserIndex;

    UPROPERTY()
    int32 SmallBlindAmount;

    // Helper functions
    void AdvanceToNextActor();
    int32 GetNextValidActor(int32 FromPosition) const;
    void CollectBlinds();
    void LogRoundState() const;
    bool ValidateAction(int32 PlayerIndex, EPlayerAction Action) const;
    void UpdatePlayerInfo(int32 PlayerIndex, EPlayerAction Action, int32 BetAmount);
};