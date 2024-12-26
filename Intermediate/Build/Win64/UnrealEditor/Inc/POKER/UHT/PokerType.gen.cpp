// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "POKER/Public/PokerType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePokerType() {}

// Begin Cross Module References
POKER_API UEnum* Z_Construct_UEnum_POKER_EPlayerAction();
POKER_API UEnum* Z_Construct_UEnum_POKER_EPokerGamePhase();
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
		{ "BlueprintType", "true" },
		{ "Call.DisplayName", "Call" },
		{ "Call.Name", "EPlayerAction::Call" },
		{ "Check.DisplayName", "Check" },
		{ "Check.Name", "EPlayerAction::Check" },
		{ "Fold.DisplayName", "Fold" },
		{ "Fold.Name", "EPlayerAction::Fold" },
		{ "ModuleRelativePath", "Public/PokerType.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EPlayerAction::None" },
		{ "Raise.DisplayName", "Raise" },
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

// Begin Enum EPokerGamePhase
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPokerGamePhase;
static UEnum* EPokerGamePhase_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPokerGamePhase.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPokerGamePhase.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_POKER_EPokerGamePhase, (UObject*)Z_Construct_UPackage__Script_POKER(), TEXT("EPokerGamePhase"));
	}
	return Z_Registration_Info_UEnum_EPokerGamePhase.OuterSingleton;
}
template<> POKER_API UEnum* StaticEnum<EPokerGamePhase>()
{
	return EPokerGamePhase_StaticEnum();
}
struct Z_Construct_UEnum_POKER_EPokerGamePhase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Flop.DisplayName", "Flop" },
		{ "Flop.Name", "EPokerGamePhase::Flop" },
		{ "HandComplete.DisplayName", "Hand Complete" },
		{ "HandComplete.Name", "EPokerGamePhase::HandComplete" },
		{ "Initializing.DisplayName", "Initializing" },
		{ "Initializing.Name", "EPokerGamePhase::Initializing" },
		{ "ModuleRelativePath", "Public/PokerType.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EPokerGamePhase::None" },
		{ "PreFlop.DisplayName", "Pre-Flop" },
		{ "PreFlop.Name", "EPokerGamePhase::PreFlop" },
		{ "River.DisplayName", "River" },
		{ "River.Name", "EPokerGamePhase::River" },
		{ "Showdown.DisplayName", "Showdown" },
		{ "Showdown.Name", "EPokerGamePhase::Showdown" },
		{ "Turn.DisplayName", "Turn" },
		{ "Turn.Name", "EPokerGamePhase::Turn" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPokerGamePhase::None", (int64)EPokerGamePhase::None },
		{ "EPokerGamePhase::Initializing", (int64)EPokerGamePhase::Initializing },
		{ "EPokerGamePhase::PreFlop", (int64)EPokerGamePhase::PreFlop },
		{ "EPokerGamePhase::Flop", (int64)EPokerGamePhase::Flop },
		{ "EPokerGamePhase::Turn", (int64)EPokerGamePhase::Turn },
		{ "EPokerGamePhase::River", (int64)EPokerGamePhase::River },
		{ "EPokerGamePhase::Showdown", (int64)EPokerGamePhase::Showdown },
		{ "EPokerGamePhase::HandComplete", (int64)EPokerGamePhase::HandComplete },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_POKER_EPokerGamePhase_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_POKER,
	nullptr,
	"EPokerGamePhase",
	"EPokerGamePhase",
	Z_Construct_UEnum_POKER_EPokerGamePhase_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_POKER_EPokerGamePhase_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_POKER_EPokerGamePhase_Statics::Enum_MetaDataParams), Z_Construct_UEnum_POKER_EPokerGamePhase_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_POKER_EPokerGamePhase()
{
	if (!Z_Registration_Info_UEnum_EPokerGamePhase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPokerGamePhase.InnerSingleton, Z_Construct_UEnum_POKER_EPokerGamePhase_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPokerGamePhase.InnerSingleton;
}
// End Enum EPokerGamePhase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_PokerType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPlayerAction_StaticEnum, TEXT("EPlayerAction"), &Z_Registration_Info_UEnum_EPlayerAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2488036657U) },
		{ EPokerGamePhase_StaticEnum, TEXT("EPokerGamePhase"), &Z_Registration_Info_UEnum_EPokerGamePhase, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2230594559U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_PokerType_h_3502251996(TEXT("/Script/POKER"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_PokerType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_PokerType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
