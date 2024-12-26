// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "POKER/Public/RoundManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoundManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
POKER_API UClass* Z_Construct_UClass_UBettingManager_NoRegister();
POKER_API UClass* Z_Construct_UClass_UPokerPlayerInterface_NoRegister();
POKER_API UClass* Z_Construct_UClass_URoundManager();
POKER_API UClass* Z_Construct_UClass_URoundManager_NoRegister();
POKER_API UEnum* Z_Construct_UEnum_POKER_EPokerGamePhase();
POKER_API UFunction* Z_Construct_UDelegateFunction_POKER_OnRoundComplete__DelegateSignature();
POKER_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerRoundInfo();
UPackage* Z_Construct_UPackage__Script_POKER();
// End Cross Module References

// Begin Delegate FOnRoundComplete
struct Z_Construct_UDelegateFunction_POKER_OnRoundComplete__DelegateSignature_Statics
{
	struct _Script_POKER_eventOnRoundComplete_Parms
	{
		EPokerGamePhase CompletedPhase;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Declare the delegate type\n" },
#endif
		{ "ModuleRelativePath", "Public/RoundManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declare the delegate type" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CompletedPhase_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CompletedPhase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_POKER_OnRoundComplete__DelegateSignature_Statics::NewProp_CompletedPhase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_POKER_OnRoundComplete__DelegateSignature_Statics::NewProp_CompletedPhase = { "CompletedPhase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_POKER_eventOnRoundComplete_Parms, CompletedPhase), Z_Construct_UEnum_POKER_EPokerGamePhase, METADATA_PARAMS(0, nullptr) }; // 2230594559
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_POKER_OnRoundComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_POKER_OnRoundComplete__DelegateSignature_Statics::NewProp_CompletedPhase_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_POKER_OnRoundComplete__DelegateSignature_Statics::NewProp_CompletedPhase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_POKER_OnRoundComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_POKER_OnRoundComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_POKER, nullptr, "OnRoundComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_POKER_OnRoundComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_POKER_OnRoundComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_POKER_OnRoundComplete__DelegateSignature_Statics::_Script_POKER_eventOnRoundComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_POKER_OnRoundComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_POKER_OnRoundComplete__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_POKER_OnRoundComplete__DelegateSignature_Statics::_Script_POKER_eventOnRoundComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_POKER_OnRoundComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_POKER_OnRoundComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRoundComplete_DelegateWrapper(const FMulticastScriptDelegate& OnRoundComplete, EPokerGamePhase CompletedPhase)
{
	struct _Script_POKER_eventOnRoundComplete_Parms
	{
		EPokerGamePhase CompletedPhase;
	};
	_Script_POKER_eventOnRoundComplete_Parms Parms;
	Parms.CompletedPhase=CompletedPhase;
	OnRoundComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnRoundComplete

// Begin ScriptStruct FPlayerRoundInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerRoundInfo;
class UScriptStruct* FPlayerRoundInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerRoundInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerRoundInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerRoundInfo, (UObject*)Z_Construct_UPackage__Script_POKER(), TEXT("PlayerRoundInfo"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerRoundInfo.OuterSingleton;
}
template<> POKER_API UScriptStruct* StaticStruct<FPlayerRoundInfo>()
{
	return FPlayerRoundInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayerRoundInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RoundManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasActed_MetaData[] = {
		{ "ModuleRelativePath", "Public/RoundManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAllIn_MetaData[] = {
		{ "ModuleRelativePath", "Public/RoundManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalBet_MetaData[] = {
		{ "ModuleRelativePath", "Public/RoundManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bHasActed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasActed;
	static void NewProp_bIsAllIn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAllIn;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalBet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerRoundInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FPlayerRoundInfo_Statics::NewProp_bHasActed_SetBit(void* Obj)
{
	((FPlayerRoundInfo*)Obj)->bHasActed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerRoundInfo_Statics::NewProp_bHasActed = { "bHasActed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPlayerRoundInfo), &Z_Construct_UScriptStruct_FPlayerRoundInfo_Statics::NewProp_bHasActed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasActed_MetaData), NewProp_bHasActed_MetaData) };
void Z_Construct_UScriptStruct_FPlayerRoundInfo_Statics::NewProp_bIsAllIn_SetBit(void* Obj)
{
	((FPlayerRoundInfo*)Obj)->bIsAllIn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerRoundInfo_Statics::NewProp_bIsAllIn = { "bIsAllIn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPlayerRoundInfo), &Z_Construct_UScriptStruct_FPlayerRoundInfo_Statics::NewProp_bIsAllIn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAllIn_MetaData), NewProp_bIsAllIn_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerRoundInfo_Statics::NewProp_TotalBet = { "TotalBet", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerRoundInfo, TotalBet), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalBet_MetaData), NewProp_TotalBet_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerRoundInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRoundInfo_Statics::NewProp_bHasActed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRoundInfo_Statics::NewProp_bIsAllIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRoundInfo_Statics::NewProp_TotalBet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRoundInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerRoundInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_POKER,
	nullptr,
	&NewStructOps,
	"PlayerRoundInfo",
	Z_Construct_UScriptStruct_FPlayerRoundInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRoundInfo_Statics::PropPointers),
	sizeof(FPlayerRoundInfo),
	alignof(FPlayerRoundInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRoundInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerRoundInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerRoundInfo()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerRoundInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerRoundInfo.InnerSingleton, Z_Construct_UScriptStruct_FPlayerRoundInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayerRoundInfo.InnerSingleton;
}
// End ScriptStruct FPlayerRoundInfo

// Begin Class URoundManager
void URoundManager::StaticRegisterNativesURoundManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URoundManager);
UClass* Z_Construct_UClass_URoundManager_NoRegister()
{
	return URoundManager::StaticClass();
}
struct Z_Construct_UClass_URoundManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RoundManager.h" },
		{ "ModuleRelativePath", "Public/RoundManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRoundComplete_MetaData[] = {
		{ "Category", "Poker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event when round completes\n" },
#endif
		{ "ModuleRelativePath", "Public/RoundManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event when round completes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BettingManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/RoundManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Players_MetaData[] = {
		{ "ModuleRelativePath", "Public/RoundManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/RoundManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPhase_MetaData[] = {
		{ "ModuleRelativePath", "Public/RoundManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DealerPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/RoundManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentActorIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/RoundManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastRaiserIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/RoundManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmallBlindAmount_MetaData[] = {
		{ "ModuleRelativePath", "Public/RoundManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRoundComplete;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BettingManager;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Players_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Players;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerInfo_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerInfo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentPhase_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentPhase;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DealerPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentActorIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastRaiserIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SmallBlindAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoundManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URoundManager_Statics::NewProp_OnRoundComplete = { "OnRoundComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoundManager, OnRoundComplete), Z_Construct_UDelegateFunction_POKER_OnRoundComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRoundComplete_MetaData), NewProp_OnRoundComplete_MetaData) }; // 1756617669
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URoundManager_Statics::NewProp_BettingManager = { "BettingManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoundManager, BettingManager), Z_Construct_UClass_UBettingManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BettingManager_MetaData), NewProp_BettingManager_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_URoundManager_Statics::NewProp_Players_Inner = { "Players", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPokerPlayerInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URoundManager_Statics::NewProp_Players = { "Players", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoundManager, Players), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Players_MetaData), NewProp_Players_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URoundManager_Statics::NewProp_PlayerInfo_Inner = { "PlayerInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPlayerRoundInfo, METADATA_PARAMS(0, nullptr) }; // 108048115
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URoundManager_Statics::NewProp_PlayerInfo = { "PlayerInfo", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoundManager, PlayerInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerInfo_MetaData), NewProp_PlayerInfo_MetaData) }; // 108048115
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URoundManager_Statics::NewProp_CurrentPhase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URoundManager_Statics::NewProp_CurrentPhase = { "CurrentPhase", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoundManager, CurrentPhase), Z_Construct_UEnum_POKER_EPokerGamePhase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPhase_MetaData), NewProp_CurrentPhase_MetaData) }; // 2230594559
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URoundManager_Statics::NewProp_DealerPosition = { "DealerPosition", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoundManager, DealerPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DealerPosition_MetaData), NewProp_DealerPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URoundManager_Statics::NewProp_CurrentActorIndex = { "CurrentActorIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoundManager, CurrentActorIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentActorIndex_MetaData), NewProp_CurrentActorIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URoundManager_Statics::NewProp_LastRaiserIndex = { "LastRaiserIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoundManager, LastRaiserIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastRaiserIndex_MetaData), NewProp_LastRaiserIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URoundManager_Statics::NewProp_SmallBlindAmount = { "SmallBlindAmount", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoundManager, SmallBlindAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmallBlindAmount_MetaData), NewProp_SmallBlindAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URoundManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoundManager_Statics::NewProp_OnRoundComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoundManager_Statics::NewProp_BettingManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoundManager_Statics::NewProp_Players_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoundManager_Statics::NewProp_Players,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoundManager_Statics::NewProp_PlayerInfo_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoundManager_Statics::NewProp_PlayerInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoundManager_Statics::NewProp_CurrentPhase_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoundManager_Statics::NewProp_CurrentPhase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoundManager_Statics::NewProp_DealerPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoundManager_Statics::NewProp_CurrentActorIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoundManager_Statics::NewProp_LastRaiserIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoundManager_Statics::NewProp_SmallBlindAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URoundManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URoundManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_POKER,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URoundManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URoundManager_Statics::ClassParams = {
	&URoundManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URoundManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URoundManager_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URoundManager_Statics::Class_MetaDataParams), Z_Construct_UClass_URoundManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URoundManager()
{
	if (!Z_Registration_Info_UClass_URoundManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoundManager.OuterSingleton, Z_Construct_UClass_URoundManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URoundManager.OuterSingleton;
}
template<> POKER_API UClass* StaticClass<URoundManager>()
{
	return URoundManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URoundManager);
URoundManager::~URoundManager() {}
// End Class URoundManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_RoundManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPlayerRoundInfo::StaticStruct, Z_Construct_UScriptStruct_FPlayerRoundInfo_Statics::NewStructOps, TEXT("PlayerRoundInfo"), &Z_Registration_Info_UScriptStruct_PlayerRoundInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerRoundInfo), 108048115U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URoundManager, URoundManager::StaticClass, TEXT("URoundManager"), &Z_Registration_Info_UClass_URoundManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoundManager), 3275828016U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_RoundManager_h_3945944281(TEXT("/Script/POKER"),
	Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_RoundManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_RoundManager_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_RoundManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_RoundManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
