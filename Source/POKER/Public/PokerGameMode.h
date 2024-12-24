// PokerGameMode.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Card.h"
#include "Deck.h"
#include "MyPlayer.h"
#include "AIPlayer.h"
#include "PokerGameMode.generated.h"

UCLASS()
class POKER_API APokerGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    APokerGameMode();

protected:
    virtual void BeginPlay() override;

private:
    void TestDeck();
    void TestPlayerFunctions();
    void TestAIFunctions(); // Renamed from TestAIPlayer

    FDeck TestDeckInstance;
    FMyPlayer TestPlayer;
    FAIPlayer TestAIPlayer;
};