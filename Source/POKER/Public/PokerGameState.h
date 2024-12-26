// PokerGameState.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "Card.h"
#include "Deck.h"
#include "RoundManager.h"
#include "HandEvaluator.h"
#include "PokerType.h"
#include "PokerGameState.generated.h"

UCLASS()
class POKER_API APokerGameState : public AGameStateBase
{
    GENERATED_BODY()

public:
    APokerGameState();

    virtual void BeginPlay() override;
    void StartNewHand();
    void ProcessPlayerAction(int32 PlayerIndex, EPlayerAction Action);
    void AdvanceToNextPhase();
    void EndCurrentHand();

    void AddPlayer(TScriptInterface<IPokerPlayerInterface> Player);
    void RemovePlayer(TScriptInterface<IPokerPlayerInterface> Player);

    // State queries
    EPokerGamePhase GetCurrentPhase() const { return CurrentPhase; }
    const TArray<FCard>& GetCommunityCards() const { return CommunityCards; }
    bool IsHandInProgress() const { return bHandInProgress; }
    URoundManager* GetRoundManager() const { return RoundManager; }
    const TArray<TScriptInterface<IPokerPlayerInterface>>& GetPlayers() const { return Players; }

private:
    UPROPERTY()
    URoundManager* RoundManager;

    UPROPERTY()
    UHandEvaluator* HandEvaluator;

    UPROPERTY()
    EPokerGamePhase CurrentPhase;

    UPROPERTY()
    FDeck Deck;

    UPROPERTY()
    TArray<FCard> CommunityCards;

    UPROPERTY()
    TArray<TScriptInterface<IPokerPlayerInterface>> Players;

    UPROPERTY()
    int32 DealerPosition;

    UPROPERTY()
    bool bHandInProgress;

    void DealHoleCards();
    void DealCommunityCards(int32 NumCards);
    void ProcessShowdown();
    void EndHand();
    void RotateDealer();
    void LogGameState() const;
    void LogCommunityCards() const;
    void LogHandResults() const;
};