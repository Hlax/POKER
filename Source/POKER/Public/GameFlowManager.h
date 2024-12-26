// GameFlowManager.h
#pragma once

#include "CoreMinimal.h"
#include "PokerType.h"
#include "RoundManager.h"
#include "Card.h"
#include "Deck.h"  // Add this include
#include "GameFlowManager.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHandComplete);

UCLASS()
class POKER_API UGameFlowManager : public UObject
{
    GENERATED_BODY()

public:
    UGameFlowManager();

    void Initialize(const TArray<TScriptInterface<IPokerPlayerInterface>>& InPlayers);
    void StartNewHand();
    void ProcessGameTick();
    bool IsHandInProgress() const { return bHandInProgress; }

    // Event when hand completes
    UPROPERTY(BlueprintAssignable, Category = "Poker")
    FOnHandComplete OnHandComplete;

    // Getters
    EPokerGamePhase GetCurrentPhase() const { return CurrentPhase; }
    const TArray<FCard>& GetCommunityCards() const { return CommunityCards; }
    URoundManager* GetRoundManager() const { return RoundManager; }

private:
    UPROPERTY()
    URoundManager* RoundManager;

    UPROPERTY()
    TArray<TScriptInterface<IPokerPlayerInterface>> Players;

    UPROPERTY()
    TArray<FCard> CommunityCards;

    UPROPERTY()
    FDeck Deck;

    UPROPERTY()
    EPokerGamePhase CurrentPhase;

    UPROPERTY()
    int32 DealerPosition;

    UPROPERTY()
    bool bHandInProgress;

    UPROPERTY()
    bool bWaitingForAction;

    // Internal game flow methods
    void AdvanceToNextPhase();
    void DealHoleCards();
    void DealCommunityCards(int32 NumCards);
    void ProcessShowdown();
    void EndHand();
    void ProcessCurrentPlayerAction();

    void LogGameState() const;
};