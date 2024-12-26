// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "POKER/Public/BettingManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBettingManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
POKER_API UClass* Z_Construct_UClass_UBettingManager();
POKER_API UClass* Z_Construct_UClass_UBettingManager_NoRegister();
POKER_API UClass* Z_Construct_UClass_UPokerPlayerInterface_NoRegister();
POKER_API UScriptStruct* Z_Construct_UScriptStruct_FBettingRound();
UPackage* Z_Construct_UPackage__Script_POKER();
// End Cross Module References

// Begin ScriptStruct FBettingRound
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BettingRound;
class UScriptStruct* FBettingRound::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BettingRound.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BettingRound.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBettingRound, (UObject*)Z_Construct_UPackage__Script_POKER(), TEXT("BettingRound"));
	}
	return Z_Registration_Info_UScriptStruct_BettingRound.OuterSingleton;
}
template<> POKER_API UScriptStruct* StaticStruct<FBettingRound>()
{
	return FBettingRound::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBettingRound_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BettingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentBet_MetaData[] = {
		{ "ModuleRelativePath", "Public/BettingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumRaise_MetaData[] = {
		{ "ModuleRelativePath", "Public/BettingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastRaiseAmount_MetaData[] = {
		{ "ModuleRelativePath", "Public/BettingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainPot_MetaData[] = {
		{ "ModuleRelativePath", "Public/BettingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SidePots_MetaData[] = {
		{ "ModuleRelativePath", "Public/BettingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerBets_MetaData[] = {
		{ "ModuleRelativePath", "Public/BettingManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentBet;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinimumRaise;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastRaiseAmount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MainPot;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SidePots_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SidePots;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerBets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerBets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBettingRound>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBettingRound_Statics::NewProp_CurrentBet = { "CurrentBet", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBettingRound, CurrentBet), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentBet_MetaData), NewProp_CurrentBet_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBettingRound_Statics::NewProp_MinimumRaise = { "MinimumRaise", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBettingRound, MinimumRaise), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumRaise_MetaData), NewProp_MinimumRaise_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBettingRound_Statics::NewProp_LastRaiseAmount = { "LastRaiseAmount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBettingRound, LastRaiseAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastRaiseAmount_MetaData), NewProp_LastRaiseAmount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBettingRound_Statics::NewProp_MainPot = { "MainPot", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBettingRound, MainPot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainPot_MetaData), NewProp_MainPot_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBettingRound_Statics::NewProp_SidePots_Inner = { "SidePots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBettingRound_Statics::NewProp_SidePots = { "SidePots", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBettingRound, SidePots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SidePots_MetaData), NewProp_SidePots_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBettingRound_Statics::NewProp_PlayerBets_Inner = { "PlayerBets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBettingRound_Statics::NewProp_PlayerBets = { "PlayerBets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBettingRound, PlayerBets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerBets_MetaData), NewProp_PlayerBets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBettingRound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBettingRound_Statics::NewProp_CurrentBet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBettingRound_Statics::NewProp_MinimumRaise,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBettingRound_Statics::NewProp_LastRaiseAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBettingRound_Statics::NewProp_MainPot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBettingRound_Statics::NewProp_SidePots_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBettingRound_Statics::NewProp_SidePots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBettingRound_Statics::NewProp_PlayerBets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBettingRound_Statics::NewProp_PlayerBets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBettingRound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBettingRound_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_POKER,
	nullptr,
	&NewStructOps,
	"BettingRound",
	Z_Construct_UScriptStruct_FBettingRound_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBettingRound_Statics::PropPointers),
	sizeof(FBettingRound),
	alignof(FBettingRound),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBettingRound_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBettingRound_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBettingRound()
{
	if (!Z_Registration_Info_UScriptStruct_BettingRound.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BettingRound.InnerSingleton, Z_Construct_UScriptStruct_FBettingRound_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BettingRound.InnerSingleton;
}
// End ScriptStruct FBettingRound

// Begin Class UBettingManager
void UBettingManager::StaticRegisterNativesUBettingManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBettingManager);
UClass* Z_Construct_UClass_UBettingManager_NoRegister()
{
	return UBettingManager::StaticClass();
}
struct Z_Construct_UClass_UBettingManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BettingManager.h" },
		{ "ModuleRelativePath", "Public/BettingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRound_MetaData[] = {
		{ "ModuleRelativePath", "Public/BettingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoundPlayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/BettingManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentRound;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_RoundPlayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoundPlayers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBettingManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBettingManager_Statics::NewProp_CurrentRound = { "CurrentRound", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBettingManager, CurrentRound), Z_Construct_UScriptStruct_FBettingRound, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRound_MetaData), NewProp_CurrentRound_MetaData) }; // 2418360043
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UBettingManager_Statics::NewProp_RoundPlayers_Inner = { "RoundPlayers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPokerPlayerInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBettingManager_Statics::NewProp_RoundPlayers = { "RoundPlayers", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBettingManager, RoundPlayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoundPlayers_MetaData), NewProp_RoundPlayers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBettingManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBettingManager_Statics::NewProp_CurrentRound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBettingManager_Statics::NewProp_RoundPlayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBettingManager_Statics::NewProp_RoundPlayers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBettingManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBettingManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_POKER,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBettingManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBettingManager_Statics::ClassParams = {
	&UBettingManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBettingManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBettingManager_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBettingManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UBettingManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBettingManager()
{
	if (!Z_Registration_Info_UClass_UBettingManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBettingManager.OuterSingleton, Z_Construct_UClass_UBettingManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBettingManager.OuterSingleton;
}
template<> POKER_API UClass* StaticClass<UBettingManager>()
{
	return UBettingManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBettingManager);
UBettingManager::~UBettingManager() {}
// End Class UBettingManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_BettingManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBettingRound::StaticStruct, Z_Construct_UScriptStruct_FBettingRound_Statics::NewStructOps, TEXT("BettingRound"), &Z_Registration_Info_UScriptStruct_BettingRound, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBettingRound), 2418360043U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBettingManager, UBettingManager::StaticClass, TEXT("UBettingManager"), &Z_Registration_Info_UClass_UBettingManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBettingManager), 66797603U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_BettingManager_h_111761520(TEXT("/Script/POKER"),
	Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_BettingManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_BettingManager_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_BettingManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_BettingManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
