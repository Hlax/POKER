// BettingManager.cpp
#include "BettingManager.h"

UBettingManager::UBettingManager()
{
}

void UBettingManager::StartNewRound(const TArray<TScriptInterface<IPokerPlayerInterface>>& ActivePlayers)
{
    CurrentRound = FBettingRound();
    RoundPlayers = ActivePlayers;
    CurrentRound.PlayerBets.Init(0, ActivePlayers.Num());

    // Log round start
    UE_LOG(LogTemp, Log, TEXT("=== Starting New Betting Round ==="));
    UE_LOG(LogTemp, Log, TEXT("Active Players: %d"), ActivePlayers.Num());
}

bool UBettingManager::ProcessAction(TScriptInterface<IPokerPlayerInterface> Player, EPlayerAction Action, int32& BetAmount)
{
    if (!ValidateAction(Player, Action))
    {
        UE_LOG(LogTemp, Warning, TEXT("Invalid action from player %s"), *Player->GetPlayerName());
        return false;
    }

    int32 PlayerIndex = RoundPlayers.Find(Player);
    int32 CurrentPlayerBet = CurrentRound.PlayerBets[PlayerIndex];

    switch (Action)
    {
    case EPlayerAction::Fold:
        UE_LOG(LogTemp, Log, TEXT("Player %s folds"), *Player->GetPlayerName());
        return true;

    case EPlayerAction::Call:
    {
        BetAmount = CurrentRound.CurrentBet - CurrentPlayerBet;
        if (Player->PlaceBet(BetAmount))
        {
            CurrentRound.PlayerBets[PlayerIndex] += BetAmount;
            UpdatePot(BetAmount);
            UE_LOG(LogTemp, Log, TEXT("Player %s calls %d"), *Player->GetPlayerName(), BetAmount);
            return true;
        }
        break;
    }

    case EPlayerAction::Raise:
    {
        int32 MinRaise = CurrentRound.CurrentBet + CurrentRound.MinimumRaise;
        BetAmount = MinRaise - CurrentPlayerBet;

        if (Player->PlaceBet(BetAmount))
        {
            CurrentRound.CurrentBet = MinRaise;
            CurrentRound.PlayerBets[PlayerIndex] += BetAmount;
            CurrentRound.LastRaiseAmount = BetAmount;
            UpdatePot(BetAmount);
            UE_LOG(LogTemp, Log, TEXT("Player %s raises to %d"), *Player->GetPlayerName(), MinRaise);
            return true;
        }
        break;
    }
    }

    return false;
}

bool UBettingManager::ValidateAction(const TScriptInterface<IPokerPlayerInterface>& Player, EPlayerAction Action) const
{
    int32 PlayerIndex = RoundPlayers.Find(Player);
    if (PlayerIndex == INDEX_NONE)
        return false;

    int32 CurrentPlayerBet = CurrentRound.PlayerBets[PlayerIndex];
    int32 RequiredCall = CurrentRound.CurrentBet - CurrentPlayerBet;

    switch (Action)
    {
    case EPlayerAction::Fold:
        return true;

    case EPlayerAction::Call:
        return Player->GetChipCount() >= RequiredCall;

    case EPlayerAction::Raise:
        return Player->GetChipCount() >= (RequiredCall + CurrentRound.MinimumRaise);

    default:
        return false;
    }
}

void UBettingManager::CreateSidePot(const TArray<TScriptInterface<IPokerPlayerInterface>>& AllInPlayers)
{
    if (AllInPlayers.Num() == 0)
        return;

    // Sort all-in players by their remaining chips (ascending)
    TArray<TPair<TScriptInterface<IPokerPlayerInterface>, int32>> SortedPlayers;
    for (const auto& Player : AllInPlayers)
    {
        SortedPlayers.Add(TPair<TScriptInterface<IPokerPlayerInterface>, int32>(Player, Player->GetChipCount()));
    }

    SortedPlayers.Sort([](const TPair<TScriptInterface<IPokerPlayerInterface>, int32>& A,
        const TPair<TScriptInterface<IPokerPlayerInterface>, int32>& B) {
            return A.Value < B.Value;
        });

    // Create side pots
    int32 PreviousAmount = 0;
    for (const auto& PlayerPair : SortedPlayers)
    {
        int32 CurrentAmount = PlayerPair.Value;
        int32 SidePot = (CurrentAmount - PreviousAmount) * RoundPlayers.Num();

        if (SidePot > 0)
        {
            CurrentRound.SidePots.Add(SidePot);
            UE_LOG(LogTemp, Log, TEXT("Created side pot of %d for all-in amount %d"),
                SidePot, CurrentAmount);
        }

        PreviousAmount = CurrentAmount;
    }
}

void UBettingManager::UpdatePot(int32 Amount)
{
    CurrentRound.MainPot += Amount;
    UE_LOG(LogTemp, Log, TEXT("Main Pot: %d"), CurrentRound.MainPot);
}