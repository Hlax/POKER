// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Card.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef POKER_Card_generated_h
#error "Card.generated.h already included, missing '#pragma once' in Card.h"
#endif
#define POKER_Card_generated_h

#define FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_Card_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCard_Statics; \
	static class UScriptStruct* StaticStruct();


template<> POKER_API UScriptStruct* StaticStruct<struct FCard>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_Card_h


#define FOREACH_ENUM_ESUIT(op) \
	op(ESuit::Hearts) \
	op(ESuit::Diamonds) \
	op(ESuit::Clubs) \
	op(ESuit::Spades) 

enum class ESuit : uint8;
template<> struct TIsUEnumClass<ESuit> { enum { Value = true }; };
template<> POKER_API UEnum* StaticEnum<ESuit>();

#define FOREACH_ENUM_ERANK(op) \
	op(ERank::Two) \
	op(ERank::Three) \
	op(ERank::Four) \
	op(ERank::Five) \
	op(ERank::Six) \
	op(ERank::Seven) \
	op(ERank::Eight) \
	op(ERank::Nine) \
	op(ERank::Ten) \
	op(ERank::Jack) \
	op(ERank::Queen) \
	op(ERank::King) \
	op(ERank::Ace) 

enum class ERank : uint8;
template<> struct TIsUEnumClass<ERank> { enum { Value = true }; };
template<> POKER_API UEnum* StaticEnum<ERank>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
