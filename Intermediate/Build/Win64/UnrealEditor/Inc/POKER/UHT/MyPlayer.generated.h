// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef POKER_MyPlayer_generated_h
#error "MyPlayer.generated.h already included, missing '#pragma once' in MyPlayer.h"
#endif
#define POKER_MyPlayer_generated_h

#define FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_MyPlayer_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMyPlayer_Statics; \
	static class UScriptStruct* StaticStruct();


template<> POKER_API UScriptStruct* StaticStruct<struct FMyPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_MyPlayer_h


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
