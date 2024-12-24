// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "POKER/Public/MyPlayer.h"
#include "POKER/Public/Card.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPlayer() {}

// Begin Cross Module References
POKER_API UEnum* Z_Construct_UEnum_POKER_EPlayerAction();
POKER_API UScriptStruct* Z_Construct_UScriptStruct_FCard();
POKER_API UScriptStruct* Z_Construct_UScriptStruct_FMyPlayer();
UPackage* Z_Construct_UPackage__Script_POKER();
// End Cross Module References

// Begin Enum EPlayerAction
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayerAction;
static UEnum* EPlayerAction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPlayerAction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPlayerAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_POKER_EPlayerAction, (UObject*)Z_Construct_UPackage__Script_POKER(), TEXT("EPlayerAction"));
	}
	return Z_Registration_Info_UEnum_EPlayerAction.OuterSingleton;
}
template<> POKER_API UEnum* StaticEnum<EPlayerAction>()
{
	return EPlayerAction_StaticEnum();
}
struct Z_Construct_UEnum_POKER_EPlayerAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Call.Name", "EPlayerAction::Call" },
		{ "Check.Name", "EPlayerAction::Check" },
		{ "Fold.Name", "EPlayerAction::Fold" },
		{ "ModuleRelativePath", "Public/MyPlayer.h" },
		{ "None.Name", "EPlayerAction::None" },
		{ "Raise.Name", "EPlayerAction::Raise" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPlayerAction::None", (int64)EPlayerAction::None },
		{ "EPlayerAction::Check", (int64)EPlayerAction::Check },
		{ "EPlayerAction::Call", (int64)EPlayerAction::Call },
		{ "EPlayerAction::Raise", (int64)EPlayerAction::Raise },
		{ "EPlayerAction::Fold", (int64)EPlayerAction::Fold },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_POKER_EPlayerAction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_POKER,
	nullptr,
	"EPlayerAction",
	"EPlayerAction",
	Z_Construct_UEnum_POKER_EPlayerAction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_POKER_EPlayerAction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_POKER_EPlayerAction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_POKER_EPlayerAction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_POKER_EPlayerAction()
{
	if (!Z_Registration_Info_UEnum_EPlayerAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayerAction.InnerSingleton, Z_Construct_UEnum_POKER_EPlayerAction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPlayerAction.InnerSingleton;
}
// End Enum EPlayerAction

// Begin ScriptStruct FMyPlayer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MyPlayer;
class UScriptStruct* FMyPlayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MyPlayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MyPlayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMyPlayer, (UObject*)Z_Construct_UPackage__Script_POKER(), TEXT("MyPlayer"));
	}
	return Z_Registration_Info_UScriptStruct_MyPlayer.OuterSingleton;
}
template<> POKER_API UScriptStruct* StaticStruct<FMyPlayer>()
{
	return FMyPlayer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMyPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChipCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInHand_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentBet_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoleCards_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChipCount;
	static void NewProp_bIsInHand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInHand;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentBet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HoleCards_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HoleCards;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMyPlayer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMyPlayer_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMyPlayer, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMyPlayer_Statics::NewProp_ChipCount = { "ChipCount", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMyPlayer, ChipCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChipCount_MetaData), NewProp_ChipCount_MetaData) };
void Z_Construct_UScriptStruct_FMyPlayer_Statics::NewProp_bIsInHand_SetBit(void* Obj)
{
	((FMyPlayer*)Obj)->bIsInHand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMyPlayer_Statics::NewProp_bIsInHand = { "bIsInHand", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMyPlayer), &Z_Construct_UScriptStruct_FMyPlayer_Statics::NewProp_bIsInHand_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInHand_MetaData), NewProp_bIsInHand_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMyPlayer_Statics::NewProp_CurrentBet = { "CurrentBet", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMyPlayer, CurrentBet), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentBet_MetaData), NewProp_CurrentBet_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMyPlayer_Statics::NewProp_HoleCards_Inner = { "HoleCards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCard, METADATA_PARAMS(0, nullptr) }; // 2801371824
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMyPlayer_Statics::NewProp_HoleCards = { "HoleCards", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMyPlayer, HoleCards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoleCards_MetaData), NewProp_HoleCards_MetaData) }; // 2801371824
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMyPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyPlayer_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyPlayer_Statics::NewProp_ChipCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyPlayer_Statics::NewProp_bIsInHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyPlayer_Statics::NewProp_CurrentBet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyPlayer_Statics::NewProp_HoleCards_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyPlayer_Statics::NewProp_HoleCards,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMyPlayer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_POKER,
	nullptr,
	&NewStructOps,
	"MyPlayer",
	Z_Construct_UScriptStruct_FMyPlayer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyPlayer_Statics::PropPointers),
	sizeof(FMyPlayer),
	alignof(FMyPlayer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyPlayer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMyPlayer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMyPlayer()
{
	if (!Z_Registration_Info_UScriptStruct_MyPlayer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MyPlayer.InnerSingleton, Z_Construct_UScriptStruct_FMyPlayer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MyPlayer.InnerSingleton;
}
// End ScriptStruct FMyPlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_MyPlayer_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPlayerAction_StaticEnum, TEXT("EPlayerAction"), &Z_Registration_Info_UEnum_EPlayerAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1449228873U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMyPlayer::StaticStruct, Z_Construct_UScriptStruct_FMyPlayer_Statics::NewStructOps, TEXT("MyPlayer"), &Z_Registration_Info_UScriptStruct_MyPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMyPlayer), 4220380145U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_MyPlayer_h_360868481(TEXT("/Script/POKER"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_MyPlayer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_MyPlayer_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_MyPlayer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_MyPlayer_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
