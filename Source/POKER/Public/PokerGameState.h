// PokerGameState.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "Card.h"
#include "Deck.h"
#include "MyPlayer.h"
#include "PokerType.h"
#include "IPokerPlayerInterface.h"
#include "PokerGameState.generated.h"

UENUM(BlueprintType)
enum class EPokerGamePhase : uint8
{
    None            UMETA(DisplayName = "None"),
    Initializing    UMETA(DisplayName = "Initializing"),
    PreFlop         UMETA(DisplayName = "Pre-Flop"),
    Flop            UMETA(DisplayName = "Flop"),
    Turn            UMETA(DisplayName = "Turn"),
    River           UMETA(DisplayName = "River"),
    Showdown        UMETA(DisplayName = "Showdown"),
    HandComplete    UMETA(DisplayName = "Hand Complete")
};

UCLASS()
class POKER_API APokerGameState : public AGameStateBase
{
    GENERATED_BODY()

public:
    APokerGameState();

    void InitializeGame(int32 NumPlayers, int32 StartingChips, int32 SmallBlind);
    void StartNewHand();
    void AdvanceGamePhase();
    void ProcessPlayerAction(int32 PlayerIndex, EPlayerAction Action);

    // Getters
    EPokerGamePhase GetCurrentPhase() const { return CurrentPhase; }
    int32 GetPotSize() const { return PotSize; }
    int32 GetCurrentBet() const { return CurrentBet; }
    int32 GetSmallBlind() const { return SmallBlindAmount; }
    int32 GetBigBlind() const { return SmallBlindAmount * 2; }
    const TArray<FCard>& GetCommunityCards() const { return CommunityCards; }

protected:
    virtual void BeginPlay() override;

private:
    void DealHoleCards();
    void DealCommunityCards();
    void CollectBlinds();
    void ProcessBettingRound();
    void DetermineWinner();
    bool IsRoundComplete() const;
    void RotateDealer();

    UPROPERTY()
    EPokerGamePhase CurrentPhase;

    UPROPERTY()
    FDeck Deck;

    UPROPERTY()
    TArray<FCard> CommunityCards;

    UPROPERTY()
    int32 PotSize;

    UPROPERTY()
    int32 CurrentBet;

    UPROPERTY()
    int32 SmallBlindAmount;

    UPROPERTY()
    int32 DealerPosition;

    UPROPERTY()
    int32 CurrentPlayerTurn;

    static const int32 MAX_PLAYERS = 9;

    UPROPERTY()
    TArray<TScriptInterface<IPokerPlayerInterface>> Players;  // Changed back to IPokerPlayerInterface

    UPROPERTY()
    int32 LastRaisePosition;

    UPROPERTY()
    bool bHandInProgress;
};