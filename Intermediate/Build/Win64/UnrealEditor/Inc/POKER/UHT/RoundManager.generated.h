// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RoundManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPokerGamePhase : uint8;
#ifdef POKER_RoundManager_generated_h
#error "RoundManager.generated.h already included, missing '#pragma once' in RoundManager.h"
#endif
#define POKER_RoundManager_generated_h

#define FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_RoundManager_h_12_DELEGATE \
POKER_API void FOnRoundComplete_DelegateWrapper(const FMulticastScriptDelegate& OnRoundComplete, EPokerGamePhase CompletedPhase);


#define FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_RoundManager_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerRoundInfo_Statics; \
	POKER_API static class UScriptStruct* StaticStruct();


template<> POKER_API UScriptStruct* StaticStruct<struct FPlayerRoundInfo>();

#define FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_RoundManager_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURoundManager(); \
	friend struct Z_Construct_UClass_URoundManager_Statics; \
public: \
	DECLARE_CLASS(URoundManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/POKER"), NO_API) \
	DECLARE_SERIALIZER(URoundManager)


#define FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_RoundManager_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URoundManager(URoundManager&&); \
	URoundManager(const URoundManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoundManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoundManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URoundManager) \
	NO_API virtual ~URoundManager();


#define FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_RoundManager_h_35_PROLOG
#define FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_RoundManager_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_RoundManager_h_38_INCLASS_NO_PURE_DECLS \
	FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_RoundManager_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POKER_API UClass* StaticClass<class URoundManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_RoundManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
