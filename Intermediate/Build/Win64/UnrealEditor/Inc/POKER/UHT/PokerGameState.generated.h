// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PokerGameState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef POKER_PokerGameState_generated_h
#error "PokerGameState.generated.h already included, missing '#pragma once' in PokerGameState.h"
#endif
#define POKER_PokerGameState_generated_h

#define FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_PokerGameState_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPokerGameState(); \
	friend struct Z_Construct_UClass_APokerGameState_Statics; \
public: \
	DECLARE_CLASS(APokerGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/POKER"), NO_API) \
	DECLARE_SERIALIZER(APokerGameState)


#define FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_PokerGameState_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APokerGameState(APokerGameState&&); \
	APokerGameState(const APokerGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APokerGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APokerGameState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APokerGameState) \
	NO_API virtual ~APokerGameState();


#define FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_PokerGameState_h_26_PROLOG
#define FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_PokerGameState_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_PokerGameState_h_29_INCLASS_NO_PURE_DECLS \
	FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_PokerGameState_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POKER_API UClass* StaticClass<class APokerGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_PokerGameState_h


#define FOREACH_ENUM_EPOKERGAMEPHASE(op) \
	op(EPokerGamePhase::None) \
	op(EPokerGamePhase::Initializing) \
	op(EPokerGamePhase::PreFlop) \
	op(EPokerGamePhase::Flop) \
	op(EPokerGamePhase::Turn) \
	op(EPokerGamePhase::River) \
	op(EPokerGamePhase::Showdown) \
	op(EPokerGamePhase::HandComplete) 

enum class EPokerGamePhase : uint8;
template<> struct TIsUEnumClass<EPokerGamePhase> { enum { Value = true }; };
template<> POKER_API UEnum* StaticEnum<EPokerGamePhase>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
