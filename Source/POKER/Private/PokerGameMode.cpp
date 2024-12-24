// PokerGameMode.cpp
#include "PokerGameMode.h"
#include "Kismet/GameplayStatics.h"

APokerGameMode::APokerGameMode()
{
    PrimaryActorTick.bCanEverTick = false;
    TestPlayer = nullptr;
    TestAIPlayer = nullptr;
}

void APokerGameMode::BeginPlay()
{
    Super::BeginPlay();

    // Spawn players for testing
    FActorSpawnParameters SpawnParams;
    SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

    // Spawn test player
    TestPlayer = GetWorld()->SpawnActor<AMyPlayer>(AMyPlayer::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);
    if (TestPlayer)
    {
        TestPlayer->SetPlayerName(TEXT("Test Human Player"));
    }

    // Spawn AI player
    TestAIPlayer = GetWorld()->SpawnActor<AAIPlayer>(AAIPlayer::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);
    if (TestAIPlayer)
    {
        TestAIPlayer->SetPlayerName(TEXT("Test AI Player"));
    }

    TestDeck();
    TestPlayerFunctions();
    TestAIFunctions();
}

void APokerGameMode::TestDeck()
{
    UE_LOG(LogTemp, Log, TEXT("\n=== Testing Deck ===\n"));

    // Reset and shuffle the deck
    TestDeckInstance.Reset();
    TestDeckInstance.Shuffle();

    // Draw 5 cards as a test
    UE_LOG(LogTemp, Log, TEXT("Drawing 5 cards:"));
    for (int32 i = 0; i < 5; i++)
    {
        FCard DrawnCard = TestDeckInstance.DrawCard();
        UE_LOG(LogTemp, Log, TEXT("Drew: %s"), *DrawnCard.ToString());
    }

    UE_LOG(LogTemp, Log, TEXT("Remaining cards: %d"), TestDeckInstance.GetRemainingCards());
}

void APokerGameMode::TestPlayerFunctions()
{
    if (!TestPlayer)
    {
        UE_LOG(LogTemp, Error, TEXT("TestPlayer is null!"));
        return;
    }

    UE_LOG(LogTemp, Log, TEXT("\n=== Starting Player Tests ===\n"));

    TestPlayer->DebugPrintHand();  // Should show empty hand

    // Deal two cards to player
    TestPlayer->PrepareForNewHand();
    TestPlayer->ReceiveCard(TestDeckInstance.DrawCard());
    TestPlayer->ReceiveCard(TestDeckInstance.DrawCard());

    TestPlayer->DebugPrintHand();  // Should show two cards

    // Test betting
    TestPlayer->PlaceBet(100);
    TestPlayer->DebugPrintHand();  // Should show updated chip count and bet

    // Test winning
    TestPlayer->WinPot(250);  // Win more than bet to test profit
    TestPlayer->DebugPrintHand();  // Should show updated chip count

    // Test clearing hand
    TestPlayer->ClearHand();
    TestPlayer->DebugPrintHand();  // Should show no cards
}

void APokerGameMode::TestAIFunctions()
{
    if (!TestAIPlayer)
    {
        UE_LOG(LogTemp, Error, TEXT("TestAIPlayer is null!"));
        return;
    }

    UE_LOG(LogTemp, Log, TEXT("\n=== Testing AI Player ===\n"));

    TestAIPlayer->PrepareForNewHand();

    // Deal cards to AI
    TestAIPlayer->ReceiveCard(TestDeckInstance.DrawCard());
    TestAIPlayer->ReceiveCard(TestDeckInstance.DrawCard());

    TestAIPlayer->DebugPrintHand();

    // Create empty array for community cards
    TArray<FCard> CommunityCards;

    // Test AI decisions with different minimum bets
    int32 TestBets[] = { 10, 50, 200 };

    for (int32 MinBet : TestBets)
    {
        UE_LOG(LogTemp, Log, TEXT("\nTesting AI decision with minimum bet: %d"), MinBet);
        EPlayerAction Action = TestAIPlayer->RequestAction(MinBet, CommunityCards);

        // If AI decides to bet, simulate the bet
        if (Action != EPlayerAction::Fold)
        {
            bool BetPlaced = TestAIPlayer->PlaceBet(MinBet);
            UE_LOG(LogTemp, Log, TEXT("Bet placed successfully: %s"), BetPlaced ? TEXT("Yes") : TEXT("No"));
            TestAIPlayer->DebugPrintHand();
        }
    }
}