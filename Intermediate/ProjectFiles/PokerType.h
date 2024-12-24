// PokerTypes.h
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