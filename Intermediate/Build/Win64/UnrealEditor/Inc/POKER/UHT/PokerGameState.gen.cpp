// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "POKER/Public/PokerGameState.h"
#include "POKER/Public/Card.h"
#include "POKER/Public/Deck.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePokerGameState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
POKER_API UClass* Z_Construct_UClass_APokerGameState();
POKER_API UClass* Z_Construct_UClass_APokerGameState_NoRegister();
POKER_API UClass* Z_Construct_UClass_UHandEvaluator_NoRegister();
POKER_API UClass* Z_Construct_UClass_UPokerPlayerInterface_NoRegister();
POKER_API UClass* Z_Construct_UClass_URoundManager_NoRegister();
POKER_API UEnum* Z_Construct_UEnum_POKER_EPokerGamePhase();
POKER_API UScriptStruct* Z_Construct_UScriptStruct_FCard();
POKER_API UScriptStruct* Z_Construct_UScriptStruct_FDeck();
UPackage* Z_Construct_UPackage__Script_POKER();
// End Cross Module References

// Begin Class APokerGameState
void APokerGameState::StaticRegisterNativesAPokerGameState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APokerGameState);
UClass* Z_Construct_UClass_APokerGameState_NoRegister()
{
	return APokerGameState::StaticClass();
}
struct Z_Construct_UClass_APokerGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PokerGameState.h" },
		{ "ModuleRelativePath", "Public/PokerGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoundManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokerGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandEvaluator_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokerGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPhase_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokerGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Deck_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokerGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommunityCards_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokerGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Players_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokerGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DealerPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokerGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHandInProgress_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokerGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoundManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandEvaluator;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentPhase_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentPhase;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Deck;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommunityCards_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CommunityCards;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Players_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Players;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DealerPosition;
	static void NewProp_bHandInProgress_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHandInProgress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APokerGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokerGameState_Statics::NewProp_RoundManager = { "RoundManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokerGameState, RoundManager), Z_Construct_UClass_URoundManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoundManager_MetaData), NewProp_RoundManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokerGameState_Statics::NewProp_HandEvaluator = { "HandEvaluator", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokerGameState, HandEvaluator), Z_Construct_UClass_UHandEvaluator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandEvaluator_MetaData), NewProp_HandEvaluator_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APokerGameState_Statics::NewProp_CurrentPhase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APokerGameState_Statics::NewProp_CurrentPhase = { "CurrentPhase", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokerGameState, CurrentPhase), Z_Construct_UEnum_POKER_EPokerGamePhase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPhase_MetaData), NewProp_CurrentPhase_MetaData) }; // 2230594559
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APokerGameState_Statics::NewProp_Deck = { "Deck", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokerGameState, Deck), Z_Construct_UScriptStruct_FDeck, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Deck_MetaData), NewProp_Deck_MetaData) }; // 1871853213
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APokerGameState_Statics::NewProp_CommunityCards_Inner = { "CommunityCards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCard, METADATA_PARAMS(0, nullptr) }; // 2801371824
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APokerGameState_Statics::NewProp_CommunityCards = { "CommunityCards", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokerGameState, CommunityCards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommunityCards_MetaData), NewProp_CommunityCards_MetaData) }; // 2801371824
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_APokerGameState_Statics::NewProp_Players_Inner = { "Players", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPokerPlayerInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APokerGameState_Statics::NewProp_Players = { "Players", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokerGameState, Players), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Players_MetaData), NewProp_Players_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APokerGameState_Statics::NewProp_DealerPosition = { "DealerPosition", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokerGameState, DealerPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DealerPosition_MetaData), NewProp_DealerPosition_MetaData) };
void Z_Construct_UClass_APokerGameState_Statics::NewProp_bHandInProgress_SetBit(void* Obj)
{
	((APokerGameState*)Obj)->bHandInProgress = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APokerGameState_Statics::NewProp_bHandInProgress = { "bHandInProgress", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APokerGameState), &Z_Construct_UClass_APokerGameState_Statics::NewProp_bHandInProgress_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHandInProgress_MetaData), NewProp_bHandInProgress_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APokerGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokerGameState_Statics::NewProp_RoundManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokerGameState_Statics::NewProp_HandEvaluator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokerGameState_Statics::NewProp_CurrentPhase_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokerGameState_Statics::NewProp_CurrentPhase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokerGameState_Statics::NewProp_Deck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokerGameState_Statics::NewProp_CommunityCards_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokerGameState_Statics::NewProp_CommunityCards,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokerGameState_Statics::NewProp_Players_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokerGameState_Statics::NewProp_Players,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokerGameState_Statics::NewProp_DealerPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokerGameState_Statics::NewProp_bHandInProgress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APokerGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APokerGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_POKER,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APokerGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APokerGameState_Statics::ClassParams = {
	&APokerGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APokerGameState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APokerGameState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokerGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_APokerGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APokerGameState()
{
	if (!Z_Registration_Info_UClass_APokerGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APokerGameState.OuterSingleton, Z_Construct_UClass_APokerGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APokerGameState.OuterSingleton;
}
template<> POKER_API UClass* StaticClass<APokerGameState>()
{
	return APokerGameState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APokerGameState);
APokerGameState::~APokerGameState() {}
// End Class APokerGameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_PokerGameState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APokerGameState, APokerGameState::StaticClass, TEXT("APokerGameState"), &Z_Registration_Info_UClass_APokerGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APokerGameState), 1560955500U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_PokerGameState_h_2339595452(TEXT("/Script/POKER"),
	Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_PokerGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_PokerGameState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
