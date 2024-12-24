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

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_PokerType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPlayerAction_StaticEnum, TEXT("EPlayerAction"), &Z_Registration_Info_UEnum_EPlayerAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2488036657U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_PokerType_h_1472629976(TEXT("/Script/POKER"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_PokerType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_PokerType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
