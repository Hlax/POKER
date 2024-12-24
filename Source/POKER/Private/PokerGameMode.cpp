// PokerGameMode.cpp
#include "PokerGameMode.h"

APokerGameMode::APokerGameMode()
{
}

void APokerGameMode::BeginPlay()
{
    Super::BeginPlay();
    TestDeck();
    TestPlayerFunctions();
    TestAIFunctions(); // Updated name here too
}

void APokerGameMode::TestDeck()
{
    UE_LOG(LogTemp, Log, TEXT("Testing Deck:"));

    // Reset and shuffle the deck
    TestDeckInstance.Reset();
    TestDeckInstance.Shuffle();

    // Draw 5 cards as a test
    UE_LOG(LogTemp, Log, TEXT("\nDrawing 5 cards:"));
    for (int32 i = 0; i < 5; i++)
    {
        FCard DrawnCard = TestDeckInstance.DrawCard();
        UE_LOG(LogTemp, Log, TEXT("Drew: %s"), *DrawnCard.ToString());
    }

    UE_LOG(LogTemp, Log, TEXT("Remaining cards: %d"), TestDeckInstance.GetRemainingCards());
}

void APokerGameMode::TestPlayerFunctions()
{
    UE_LOG(LogTemp, Log, TEXT("\n=== Starting Player Tests ===\n"));

    TestPlayer.Name = TEXT("Test Player");
    TestPlayer.DebugPrintHand();  // Should show empty hand

    // Deal two cards to player
    TestPlayer.PrepareForNewHand();
    TestPlayer.ReceiveCard(TestDeckInstance.DrawCard());
    TestPlayer.ReceiveCard(TestDeckInstance.DrawCard());

    TestPlayer.DebugPrintHand();  // Should show two cards

    // Test betting
    TestPlayer.PlaceBet(100);
    TestPlayer.DebugPrintHand();  // Should show updated chip count and bet

    // Test winning
    TestPlayer.WinPot(250);  // Win more than bet to test profit
    TestPlayer.DebugPrintHand();  // Should show updated chip count

    // Test clearing hand
    TestPlayer.ClearHand();
    TestPlayer.DebugPrintHand();  // Should show no cards
}

void APokerGameMode::TestAIFunctions() // Renamed from TestAIPlayer
{
    UE_LOG(LogTemp, Log, TEXT("\n=== Testing AI Player ===\n"));

    TestAIPlayer.Name = TEXT("Test AI");
    TestAIPlayer.PrepareForNewHand();

    // Deal cards to AI
    TestAIPlayer.ReceiveCard(TestDeckInstance.DrawCard());
    TestAIPlayer.ReceiveCard(TestDeckInstance.DrawCard());

    TestAIPlayer.DebugPrintHand();

    // Create empty array for community cards
    TArray<FCard> CommunityCards;

    // Test AI decisions with different minimum bets
    int32 TestBets[] = { 10, 50, 200 };

    for (int32 MinBet : TestBets)
    {
        UE_LOG(LogTemp, Log, TEXT("\nTesting AI decision with minimum bet: %d"), MinBet);
        EPlayerAction Action = TestAIPlayer.RequestAction(MinBet, CommunityCards);

        FString ActionStr;
        switch (Action)
        {
        case EPlayerAction::Check:
            ActionStr = TEXT("Check");
            break;
        case EPlayerAction::Call:
            ActionStr = TEXT("Call");
            break;
        case EPlayerAction::Raise:
            ActionStr = TEXT("Raise");
            break;
        case EPlayerAction::Fold:
            ActionStr = TEXT("Fold");
            break;
        default:
            ActionStr = TEXT("Unknown");
            break;
        }

        UE_LOG(LogTemp, Log, TEXT("AI decided to: %s"), *ActionStr);

        // If AI decides to bet, simulate the bet
        if (Action == EPlayerAction::Call || Action == EPlayerAction::Raise)
        {
            bool BetPlaced = TestAIPlayer.PlaceBet(MinBet);
            UE_LOG(LogTemp, Log, TEXT("Bet placed successfully: %s"), BetPlaced ? TEXT("Yes") : TEXT("No"));
            TestAIPlayer.DebugPrintHand();
        }
    }
}