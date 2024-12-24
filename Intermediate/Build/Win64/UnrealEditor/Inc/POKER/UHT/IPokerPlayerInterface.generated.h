// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IPokerPlayerInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef POKER_IPokerPlayerInterface_generated_h
#error "IPokerPlayerInterface.generated.h already included, missing '#pragma once' in IPokerPlayerInterface.h"
#endif
#define POKER_IPokerPlayerInterface_generated_h

#define FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_IPokerPlayerInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	POKER_API UPokerPlayerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPokerPlayerInterface(UPokerPlayerInterface&&); \
	UPokerPlayerInterface(const UPokerPlayerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(POKER_API, UPokerPlayerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPokerPlayerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPokerPlayerInterface) \
	POKER_API virtual ~UPokerPlayerInterface();


#define FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_IPokerPlayerInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPokerPlayerInterface(); \
	friend struct Z_Construct_UClass_UPokerPlayerInterface_Statics; \
public: \
	DECLARE_CLASS(UPokerPlayerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/POKER"), POKER_API) \
	DECLARE_SERIALIZER(UPokerPlayerInterface)


#define FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_IPokerPlayerInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_IPokerPlayerInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_IPokerPlayerInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_IPokerPlayerInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPokerPlayerInterface() {} \
public: \
	typedef UPokerPlayerInterface UClassType; \
	typedef IPokerPlayerInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_IPokerPlayerInterface_h_10_PROLOG
#define FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_IPokerPlayerInterface_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_IPokerPlayerInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POKER_API UClass* StaticClass<class UPokerPlayerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_IPokerPlayerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
