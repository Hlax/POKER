// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "POKER/Public/GameFlowManager.h"
#include "POKER/Public/Card.h"
#include "POKER/Public/Deck.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameFlowManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
POKER_API UClass* Z_Construct_UClass_UGameFlowManager();
POKER_API UClass* Z_Construct_UClass_UGameFlowManager_NoRegister();
POKER_API UClass* Z_Construct_UClass_UPokerPlayerInterface_NoRegister();
POKER_API UClass* Z_Construct_UClass_URoundManager_NoRegister();
POKER_API UEnum* Z_Construct_UEnum_POKER_EPokerGamePhase();
POKER_API UFunction* Z_Construct_UDelegateFunction_POKER_OnHandComplete__DelegateSignature();
POKER_API UScriptStruct* Z_Construct_UScriptStruct_FCard();
POKER_API UScriptStruct* Z_Construct_UScriptStruct_FDeck();
UPackage* Z_Construct_UPackage__Script_POKER();
// End Cross Module References

// Begin Delegate FOnHandComplete
struct Z_Construct_UDelegateFunction_POKER_OnHandComplete__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFlowManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_POKER_OnHandComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_POKER, nullptr, "OnHandComplete__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_POKER_OnHandComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_POKER_OnHandComplete__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_POKER_OnHandComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_POKER_OnHandComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHandComplete_DelegateWrapper(const FMulticastScriptDelegate& OnHandComplete)
{
	OnHandComplete.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnHandComplete

// Begin Class UGameFlowManager
void UGameFlowManager::StaticRegisterNativesUGameFlowManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameFlowManager);
UClass* Z_Construct_UClass_UGameFlowManager_NoRegister()
{
	return UGameFlowManager::StaticClass();
}
struct Z_Construct_UClass_UGameFlowManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GameFlowManager.h" },
		{ "ModuleRelativePath", "Public/GameFlowManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHandComplete_MetaData[] = {
		{ "Category", "Poker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event when hand completes\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFlowManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event when hand completes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoundManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameFlowManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Players_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameFlowManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommunityCards_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameFlowManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Deck_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameFlowManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPhase_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameFlowManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DealerPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameFlowManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHandInProgress_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameFlowManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWaitingForAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameFlowManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHandComplete;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoundManager;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Players_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Players;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommunityCards_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CommunityCards;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Deck;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentPhase_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentPhase;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DealerPosition;
	static void NewProp_bHandInProgress_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHandInProgress;
	static void NewProp_bWaitingForAction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWaitingForAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameFlowManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameFlowManager_Statics::NewProp_OnHandComplete = { "OnHandComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameFlowManager, OnHandComplete), Z_Construct_UDelegateFunction_POKER_OnHandComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHandComplete_MetaData), NewProp_OnHandComplete_MetaData) }; // 1610784305
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameFlowManager_Statics::NewProp_RoundManager = { "RoundManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameFlowManager, RoundManager), Z_Construct_UClass_URoundManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoundManager_MetaData), NewProp_RoundManager_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UGameFlowManager_Statics::NewProp_Players_Inner = { "Players", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPokerPlayerInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameFlowManager_Statics::NewProp_Players = { "Players", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameFlowManager, Players), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Players_MetaData), NewProp_Players_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameFlowManager_Statics::NewProp_CommunityCards_Inner = { "CommunityCards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCard, METADATA_PARAMS(0, nullptr) }; // 2801371824
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameFlowManager_Statics::NewProp_CommunityCards = { "CommunityCards", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameFlowManager, CommunityCards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommunityCards_MetaData), NewProp_CommunityCards_MetaData) }; // 2801371824
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameFlowManager_Statics::NewProp_Deck = { "Deck", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameFlowManager, Deck), Z_Construct_UScriptStruct_FDeck, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Deck_MetaData), NewProp_Deck_MetaData) }; // 1871853213
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGameFlowManager_Statics::NewProp_CurrentPhase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGameFlowManager_Statics::NewProp_CurrentPhase = { "CurrentPhase", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameFlowManager, CurrentPhase), Z_Construct_UEnum_POKER_EPokerGamePhase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPhase_MetaData), NewProp_CurrentPhase_MetaData) }; // 2230594559
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameFlowManager_Statics::NewProp_DealerPosition = { "DealerPosition", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameFlowManager, DealerPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DealerPosition_MetaData), NewProp_DealerPosition_MetaData) };
void Z_Construct_UClass_UGameFlowManager_Statics::NewProp_bHandInProgress_SetBit(void* Obj)
{
	((UGameFlowManager*)Obj)->bHandInProgress = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameFlowManager_Statics::NewProp_bHandInProgress = { "bHandInProgress", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGameFlowManager), &Z_Construct_UClass_UGameFlowManager_Statics::NewProp_bHandInProgress_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHandInProgress_MetaData), NewProp_bHandInProgress_MetaData) };
void Z_Construct_UClass_UGameFlowManager_Statics::NewProp_bWaitingForAction_SetBit(void* Obj)
{
	((UGameFlowManager*)Obj)->bWaitingForAction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameFlowManager_Statics::NewProp_bWaitingForAction = { "bWaitingForAction", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGameFlowManager), &Z_Construct_UClass_UGameFlowManager_Statics::NewProp_bWaitingForAction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWaitingForAction_MetaData), NewProp_bWaitingForAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameFlowManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFlowManager_Statics::NewProp_OnHandComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFlowManager_Statics::NewProp_RoundManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFlowManager_Statics::NewProp_Players_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFlowManager_Statics::NewProp_Players,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFlowManager_Statics::NewProp_CommunityCards_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFlowManager_Statics::NewProp_CommunityCards,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFlowManager_Statics::NewProp_Deck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFlowManager_Statics::NewProp_CurrentPhase_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFlowManager_Statics::NewProp_CurrentPhase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFlowManager_Statics::NewProp_DealerPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFlowManager_Statics::NewProp_bHandInProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFlowManager_Statics::NewProp_bWaitingForAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFlowManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameFlowManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_POKER,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFlowManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameFlowManager_Statics::ClassParams = {
	&UGameFlowManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameFlowManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameFlowManager_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFlowManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameFlowManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameFlowManager()
{
	if (!Z_Registration_Info_UClass_UGameFlowManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameFlowManager.OuterSingleton, Z_Construct_UClass_UGameFlowManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameFlowManager.OuterSingleton;
}
template<> POKER_API UClass* StaticClass<UGameFlowManager>()
{
	return UGameFlowManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameFlowManager);
UGameFlowManager::~UGameFlowManager() {}
// End Class UGameFlowManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_GameFlowManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameFlowManager, UGameFlowManager::StaticClass, TEXT("UGameFlowManager"), &Z_Registration_Info_UClass_UGameFlowManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameFlowManager), 426165593U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_GameFlowManager_h_1098670268(TEXT("/Script/POKER"),
	Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_GameFlowManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_GameFlowManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
