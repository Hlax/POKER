// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PokerType.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef POKER_PokerType_generated_h
#error "PokerType.generated.h already included, missing '#pragma once' in PokerType.h"
#endif
#define POKER_PokerType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_PokerType_h


#define FOREACH_ENUM_EPLAYERACTION(op) \
	op(EPlayerAction::None) \
	op(EPlayerAction::Check) \
	op(EPlayerAction::Call) \
	op(EPlayerAction::Raise) \
	op(EPlayerAction::Fold) 

enum class EPlayerAction : uint8;
template<> struct TIsUEnumClass<EPlayerAction> { enum { Value = true }; };
template<> POKER_API UEnum* StaticEnum<EPlayerAction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
