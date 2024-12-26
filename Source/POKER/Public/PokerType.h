// PokerType.h
#pragma once

#include "CoreMinimal.h"
#include "PokerType.generated.h"

UENUM(BlueprintType)
enum class EPlayerAction : uint8
{
    None        UMETA(DisplayName = "None"),
    Check       UMETA(DisplayName = "Check"),
    Call        UMETA(DisplayName = "Call"),
    Raise       UMETA(DisplayName = "Raise"),
    Fold        UMETA(DisplayName = "Fold")
};

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