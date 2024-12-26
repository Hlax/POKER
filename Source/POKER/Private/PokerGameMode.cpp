// PokerGameMode.cpp
#include "PokerGameMode.h"
#include "PokerGameState.h"
#include "Kismet/GameplayStatics.h"

APokerGameMode::APokerGameMode()
{
    PrimaryActorTick.bCanEverTick = true;
    bGameInProgress = false;

    // Create GameFlowManager
    GameFlowManager = CreateDefaultSubobject<UGameFlowManager>(TEXT("GameFlowManager"));
}

void APokerGameMode::BeginPlay()
{
    Super::BeginPlay();

    // Set up initial game state
    SetupInitialGameState();

    // Start the test game automatically
    StartTestGame();
}

void APokerGameMode::SetupInitialGameState()
{
    FActorSpawnParameters SpawnParams;
    SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

    TArray<TScriptInterface<IPokerPlayerInterface>> Players;

    // Create 6 AI players for testing
    for (int32 i = 0; i < 6; i++)
    {
        AAIPlayer* NewAIPlayer = GetWorld()->SpawnActor<AAIPlayer>(
            AAIPlayer::StaticClass(),
            FVector::ZeroVector,
            FRotator::ZeroRotator,
            SpawnParams);

        if (NewAIPlayer)
        {
            NewAIPlayer->SetPlayerName(FString::Printf(TEXT("AI Player %d"), i + 1));
            NewAIPlayer->SetSeatIndex(i);
            Players.Add(NewAIPlayer);
            UE_LOG(LogTemp, Log, TEXT("Added player: %s"), *NewAIPlayer->GetPlayerName());
        }
    }

    // Initialize GameFlowManager with players
    if (GameFlowManager)
    {
        GameFlowManager->Initialize(Players);
    }
}

// Updated StartTestGame()
void APokerGameMode::StartTestGame()
{
    UE_LOG(LogTemp, Log, TEXT("\n=== Starting Test Poker Game ==="));
    bGameInProgress = true;

    if (GameFlowManager)
    {
        GameFlowManager->StartNewHand();
    }
}

// Updated Tick()
void APokerGameMode::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (bGameInProgress && GameFlowManager)
    {
        GameFlowManager->ProcessGameTick();

        // Start new hand if current one is complete
        if (!GameFlowManager->IsHandInProgress())
        {
            GameFlowManager->StartNewHand();
        }
    }
}

// Updated EndCurrentGame()
void APokerGameMode::EndCurrentGame()
{
    bGameInProgress = false;
}