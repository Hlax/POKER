// RoundManager.cpp
#include "RoundManager.h"

URoundManager::URoundManager()
{
    BettingManager = CreateDefaultSubobject<UBettingManager>(TEXT("BettingManager"));
    CurrentPhase = EPokerGamePhase::None;
    DealerPosition = 0;
    CurrentActorIndex = -1;
    LastRaiserIndex = -1;
    SmallBlindAmount = 10;
}

void URoundManager::InitializeRound(const TArray<TScriptInterface<IPokerPlayerInterface>>& InPlayers,
    int32 InDealerPos,
    int32 InSmallBlind)
{
    Players = InPlayers;
    DealerPosition = InDealerPos;
    SmallBlindAmount = InSmallBlind;

    // Initialize player info
    PlayerInfo.SetNum(Players.Num());
    for (auto& Info : PlayerInfo)
    {
        Info = FPlayerRoundInfo();
    }

    UE_LOG(LogTemp, Log, TEXT("Round Manager initialized:"));
    UE_LOG(LogTemp, Log, TEXT("Players: %d"), Players.Num());
    UE_LOG(LogTemp, Log, TEXT("Dealer Position: %d"), DealerPosition);
    UE_LOG(LogTemp, Log, TEXT("Small Blind: %d"), SmallBlindAmount);
}

void URoundManager::StartNewRound(EPokerGamePhase Phase)
{
    CurrentPhase = Phase;
    LastRaiserIndex = -1;

    // Debug log for player states
    UE_LOG(LogTemp, Log, TEXT("\n=== Player States at Round Start ==="));
    for (int32 i = 0; i < Players.Num(); ++i)
    {
        if (Players[i])
        {
            UE_LOG(LogTemp, Log, TEXT("Player %d (%s): InHand=%s, Chips=%d"),
                i,
                *Players[i]->GetPlayerName(),
                Players[i]->IsInHand() ? TEXT("Yes") : TEXT("No"),
                Players[i]->GetChipCount());
        }
    }

    // Reset player info for new round
    for (auto& Info : PlayerInfo)
    {
        Info.bHasActed = false;
        Info.TotalBet = 0;
    }

    // Set first actor based on phase
    if (Phase == EPokerGamePhase::PreFlop)
    {
        CurrentActorIndex = GetNextValidActor((DealerPosition + 2) % Players.Num()); // UTG
        UE_LOG(LogTemp, Log, TEXT("PreFlop first actor index: %d"), CurrentActorIndex);
        CollectBlinds();
    }
    else
    {
        CurrentActorIndex = GetNextValidActor(DealerPosition); // First active player after dealer
        UE_LOG(LogTemp, Log, TEXT("Post-flop first actor index: %d"), CurrentActorIndex);
    }

    if (BettingManager)
    {
        TArray<TScriptInterface<IPokerPlayerInterface>> ActivePlayers;
        for (int32 i = 0; i < Players.Num(); ++i)
        {
            if (Players[i] && Players[i]->IsInHand() && !PlayerInfo[i].bIsAllIn)
            {
                ActivePlayers.Add(Players[i]);
            }
        }
        BettingManager->StartNewRound(ActivePlayers);
    }

    UE_LOG(LogTemp, Log, TEXT("\n=== Starting %s Betting Round ==="),
        *UEnum::GetValueAsString(CurrentPhase));
    LogRoundState();
}

bool URoundManager::ProcessAction(int32 PlayerIndex, EPlayerAction Action)
{
    if (!BettingManager || PlayerIndex < 0 || PlayerIndex >= Players.Num())
    {
        UE_LOG(LogTemp, Warning, TEXT("Invalid state in ProcessAction. Ending round."));
        EndRound();
        return false;
    }

    if (!ValidateAction(PlayerIndex, Action))
    {
        UE_LOG(LogTemp, Warning, TEXT("Invalid action %s from player %d. Forcing fold."),
            *UEnum::GetValueAsString(Action), PlayerIndex);
        Action = EPlayerAction::Fold;
    }

    int32 BetAmount = 0;
    if (BettingManager->ProcessAction(Players[PlayerIndex], Action, BetAmount))
    {
        UpdatePlayerInfo(PlayerIndex, Action, BetAmount);

        if (Action == EPlayerAction::Raise)
        {
            LastRaiserIndex = PlayerIndex;
        }

        if (IsRoundComplete())
        {
            EndRound();
            return true;
        }

        AdvanceToNextActor();
        LogRoundState();
        return true;
    }

    return false;
}

void URoundManager::UpdatePlayerInfo(int32 PlayerIndex, EPlayerAction Action, int32 BetAmount)
{
    auto& Info = PlayerInfo[PlayerIndex];
    Info.bHasActed = true;
    Info.TotalBet += BetAmount;

    if (Action != EPlayerAction::Fold &&
        Players[PlayerIndex]->GetChipCount() == 0)
    {
        Info.bIsAllIn = true;
    }
}

bool URoundManager::IsRoundComplete() const
{
    int32 ActivePlayers = 0;
    int32 PlayersNeededToAct = 0;
    int32 CurrentBet = BettingManager ? BettingManager->GetCurrentBet() : 0;
    int32 AllInPlayers = 0;

    for (int32 i = 0; i < Players.Num(); ++i)
    {
        if (Players[i] && Players[i]->IsInHand())
        {
            if (PlayerInfo[i].bIsAllIn)
            {
                AllInPlayers++;
            }
            else
            {
                ActivePlayers++;
                if (!PlayerInfo[i].bHasActed || PlayerInfo[i].TotalBet < CurrentBet)
                {
                    PlayersNeededToAct++;
                }
            }
        }
    }

    return (ActivePlayers <= 1) ||
        (PlayersNeededToAct == 0) ||
        (ActivePlayers <= 1 && AllInPlayers > 0);
}

void URoundManager::AdvanceToNextActor()
{
    int32 NextActor = GetNextValidActor(CurrentActorIndex);

    if (NextActor == -1)
    {
        UE_LOG(LogTemp, Log, TEXT("No valid next actor found. Ending round."));
        EndRound();
    }
    else
    {
        CurrentActorIndex = NextActor;
    }
}

int32 URoundManager::GetNextValidActor(int32 FromPosition) const
{
    if (Players.Num() == 0)
    {
        return -1;
    }

    int32 NextPos = (FromPosition + 1) % Players.Num();
    int32 StartPos = FromPosition;
    int32 LoopCount = 0;

    do
    {
        if (LoopCount++ > Players.Num())
        {
            UE_LOG(LogTemp, Warning, TEXT("GetNextValidActor exceeded maximum iterations"));
            return -1;
        }

        if (Players[NextPos] &&
            Players[NextPos]->IsInHand() &&
            !PlayerInfo[NextPos].bIsAllIn)
        {
            return NextPos;
        }
        NextPos = (NextPos + 1) % Players.Num();
    } while (NextPos != StartPos);

    return -1;
}

void URoundManager::CollectBlinds()
{
    if (!BettingManager)
    {
        UE_LOG(LogTemp, Error, TEXT("BettingManager is null in CollectBlinds"));
        return;
    }

    int32 SmallBlindPos = GetNextValidActor(DealerPosition);
    if (SmallBlindPos == -1)
    {
        UE_LOG(LogTemp, Error, TEXT("Cannot find valid small blind position"));
        return;
    }

    int32 BigBlindPos = GetNextValidActor(SmallBlindPos);
    if (BigBlindPos == -1)
    {
        UE_LOG(LogTemp, Error, TEXT("Cannot find valid big blind position"));
        return;
    }

    // Post small blind
    if (Players[SmallBlindPos])
    {
        if (Players[SmallBlindPos]->PlaceBet(SmallBlindAmount))
        {
            PlayerInfo[SmallBlindPos].TotalBet = SmallBlindAmount;
            PlayerInfo[SmallBlindPos].bHasActed = true;
            UE_LOG(LogTemp, Log, TEXT("Small Blind (Seat %d): Posts %d"),
                SmallBlindPos, SmallBlindAmount);
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Small blind player cannot post blind"));
            Players[SmallBlindPos]->ClearHand();
        }
    }

    // Post big blind
    if (Players[BigBlindPos])
    {
        if (Players[BigBlindPos]->PlaceBet(SmallBlindAmount * 2))
        {
            PlayerInfo[BigBlindPos].TotalBet = SmallBlindAmount * 2;
            PlayerInfo[BigBlindPos].bHasActed = true;
            UE_LOG(LogTemp, Log, TEXT("Big Blind (Seat %d): Posts %d"),
                BigBlindPos, SmallBlindAmount * 2);
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Big blind player cannot post blind"));
            Players[BigBlindPos]->ClearHand();
        }
    }
}

int32 URoundManager::GetMainPot() const
{
    return BettingManager ? BettingManager->GetMainPot() : 0;
}

bool URoundManager::ValidateAction(int32 PlayerIndex, EPlayerAction Action) const
{
    if (PlayerIndex < 0 || PlayerIndex >= Players.Num())
        return false;

    auto Player = Players[PlayerIndex];
    if (!Player || !Player->IsInHand())
        return false;

    if (PlayerIndex != CurrentActorIndex)
        return false;

    int32 CurrentBet = BettingManager ? BettingManager->GetCurrentBet() : 0;
    int32 PlayerBet = PlayerInfo[PlayerIndex].TotalBet;
    int32 CallAmount = CurrentBet - PlayerBet;

    switch (Action)
    {
    case EPlayerAction::Fold:
        return true;

    case EPlayerAction::Call:
        return Player->GetChipCount() >= CallAmount;

    case EPlayerAction::Raise:
        return Player->GetChipCount() >= (CallAmount + SmallBlindAmount);

    default:
        return false;
    }
}

void URoundManager::EndRound()
{
    UE_LOG(LogTemp, Log, TEXT("Ending betting round"));
    LogRoundState();
    OnRoundComplete.Broadcast(CurrentPhase);
}

TArray<int32> URoundManager::GetAllInPlayers() const
{
    TArray<int32> AllInPlayers;
    for (int32 i = 0; i < PlayerInfo.Num(); ++i)
    {
        if (PlayerInfo[i].bIsAllIn)
        {
            AllInPlayers.Add(i);
        }
    }
    return AllInPlayers;
}

bool URoundManager::CanPlayerAct(int32 PlayerIndex) const
{
    return PlayerIndex == CurrentActorIndex &&
        Players.IsValidIndex(PlayerIndex) &&
        Players[PlayerIndex] &&
        Players[PlayerIndex]->IsInHand() &&
        !PlayerInfo[PlayerIndex].bIsAllIn;
}

void URoundManager::LogRoundState() const
{
    UE_LOG(LogTemp, Log, TEXT("\n=== Round State ==="));
    UE_LOG(LogTemp, Log, TEXT("Phase: %s"), *UEnum::GetValueAsString(CurrentPhase));
    UE_LOG(LogTemp, Log, TEXT("Current Actor: %d"), CurrentActorIndex);
    UE_LOG(LogTemp, Log, TEXT("Last Raiser: %d"), LastRaiserIndex);
    UE_LOG(LogTemp, Log, TEXT("Main Pot: %d"), GetMainPot());

    for (int32 i = 0; i < Players.Num(); ++i)
    {
        if (Players[i] && Players[i]->IsInHand())
        {
            UE_LOG(LogTemp, Log, TEXT("Player %d (%s): Bet=%d, AllIn=%s, HasActed=%s, Chips=%d"),
                i,
                *Players[i]->GetPlayerName(),
                PlayerInfo[i].TotalBet,
                PlayerInfo[i].bIsAllIn ? TEXT("Yes") : TEXT("No"),
                PlayerInfo[i].bHasActed ? TEXT("Yes") : TEXT("No"),
                Players[i]->GetChipCount());
        }
    }
    UE_LOG(LogTemp, Log, TEXT("==================\n"));
}