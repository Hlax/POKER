// MyPlayer.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Card.h"
#include "PokerType.h"
#include "IPokerPlayerInterface.h"
#include "MyPlayer.generated.h"

UCLASS()
class POKER_API AMyPlayer : public AActor, public IPokerPlayerInterface
{
    GENERATED_BODY()

public:
    AMyPlayer();

    // Core IPokerPlayerInterface implementation
    virtual EPlayerAction RequestAction(int32 MinimumBet, const TArray<FCard>& CommunityCards) override;
    virtual bool PlaceBet(int32 Amount) override;
    virtual void WinPot(int32 Amount) override;
    virtual bool ReceiveCard(const FCard& Card) override;
    virtual void ClearHand() override;
    virtual void PrepareForNewHand() override;

    // State queries
    virtual bool IsInHand() const override { return bIsInHand; }
    virtual int32 GetChipCount() const override { return ChipCount; }
    virtual int32 GetCurrentBet() const override { return CurrentBet; }
    virtual FString GetPlayerName() const override { return PlayerName; }
    virtual int32 GetSeatIndex() const override { return SeatIndex; }
    virtual bool IsLocalPlayer() const override { return true; }
    virtual bool IsAIPlayer() const override { return false; }

    // Additional betting helpers
    virtual void ResetBetForNewRound();
    virtual int32 GetRemainingChips() const { return ChipCount; }
    virtual bool CanMakeAction(EPlayerAction Action, int32 MinimumBet) const;

    // Debug helpers
    virtual void DebugPrintHand() const;
    virtual void DebugPrintAction(EPlayerAction Action, int32 MinimumBet) const;

    // Setter for player name
    void SetPlayerName(const FString& NewName) { PlayerName = NewName; }

protected:
    virtual void BeginPlay() override;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Poker")
    FString PlayerName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Poker")
    int32 ChipCount;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Poker")
    bool bIsInHand;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Poker")
    int32 CurrentBet;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Poker")
    int32 SeatIndex;

    static const int32 MAX_HOLE_CARDS = 2;

    UPROPERTY()
    TArray<FCard> HoleCards;
};