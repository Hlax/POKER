// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HandEvaluator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef POKER_HandEvaluator_generated_h
#error "HandEvaluator.generated.h already included, missing '#pragma once' in HandEvaluator.h"
#endif
#define POKER_HandEvaluator_generated_h

#define FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_HandEvaluator_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHandRank_Statics; \
	static class UScriptStruct* StaticStruct();


template<> POKER_API UScriptStruct* StaticStruct<struct FHandRank>();

#define FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_HandEvaluator_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHandEvaluator(); \
	friend struct Z_Construct_UClass_UHandEvaluator_Statics; \
public: \
	DECLARE_CLASS(UHandEvaluator, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/POKER"), NO_API) \
	DECLARE_SERIALIZER(UHandEvaluator)


#define FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_HandEvaluator_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHandEvaluator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHandEvaluator(UHandEvaluator&&); \
	UHandEvaluator(const UHandEvaluator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHandEvaluator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHandEvaluator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHandEvaluator) \
	NO_API virtual ~UHandEvaluator();


#define FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_HandEvaluator_h_40_PROLOG
#define FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_HandEvaluator_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_HandEvaluator_h_43_INCLASS_NO_PURE_DECLS \
	FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_HandEvaluator_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POKER_API UClass* StaticClass<class UHandEvaluator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_HandEvaluator_h


#define FOREACH_ENUM_EPOKERHAND(op) \
	op(EPokerHand::HighCard) \
	op(EPokerHand::OnePair) \
	op(EPokerHand::TwoPair) \
	op(EPokerHand::ThreeOfAKind) \
	op(EPokerHand::Straight) \
	op(EPokerHand::Flush) \
	op(EPokerHand::FullHouse) \
	op(EPokerHand::FourOfAKind) \
	op(EPokerHand::StraightFlush) \
	op(EPokerHand::RoyalFlush) 

enum class EPokerHand : uint8;
template<> struct TIsUEnumClass<EPokerHand> { enum { Value = true }; };
template<> POKER_API UEnum* StaticEnum<EPokerHand>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
