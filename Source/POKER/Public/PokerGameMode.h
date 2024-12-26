// PokerGameMode.h
#pragma once

// Include all engine headers first
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"

// Then include project headers
#include "Card.h"
#include "Deck.h"
#include "MyPlayer.h"
#include "AIPlayer.h"
#include "PokerType.h"
#include "GameFlowManager.h" // Add this include

// GENERATED.h must be the last include
#include "PokerGameMode.generated.h"

class APokerGameState;

UCLASS()
class POKER_API APokerGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    APokerGameMode();
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

    // Game control functions
    void StartTestGame();
    void EndCurrentGame();

protected:
    bool bGameInProgress;

    // Add GameFlowManager
    UPROPERTY()
    UGameFlowManager* GameFlowManager;

    // Move SetupInitialGameState to protected since it's a core setup function
    void SetupInitialGameState();

private:
    // Remove these as they're no longer needed
    // void ProcessGameTick(); // Handled by GameFlowManager now
    // void TestDeck();        // Not needed anymore
    // FDeck TestDeckInstance; // Not needed anymore

    // Remove these as we're using all AI players now
    // UPROPERTY()
    // AMyPlayer* TestPlayer;
    // UPROPERTY()
    // AAIPlayer* TestAIPlayer;
};