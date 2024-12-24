// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "POKER/Public/AIPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIPlayer() {}

// Begin Cross Module References
POKER_API UScriptStruct* Z_Construct_UScriptStruct_FAIPlayer();
POKER_API UScriptStruct* Z_Construct_UScriptStruct_FMyPlayer();
UPackage* Z_Construct_UPackage__Script_POKER();
// End Cross Module References

// Begin ScriptStruct FAIPlayer
static_assert(std::is_polymorphic<FAIPlayer>() == std::is_polymorphic<FMyPlayer>(), "USTRUCT FAIPlayer cannot be polymorphic unless super FMyPlayer is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AIPlayer;
class UScriptStruct* FAIPlayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AIPlayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AIPlayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIPlayer, (UObject*)Z_Construct_UPackage__Script_POKER(), TEXT("AIPlayer"));
	}
	return Z_Registration_Info_UScriptStruct_AIPlayer.OuterSingleton;
}
template<> POKER_API UScriptStruct* StaticStruct<FAIPlayer>()
{
	return FAIPlayer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAIPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AIPlayer.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIPlayer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIPlayer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_POKER,
	Z_Construct_UScriptStruct_FMyPlayer,
	&NewStructOps,
	"AIPlayer",
	nullptr,
	0,
	sizeof(FAIPlayer),
	alignof(FAIPlayer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIPlayer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAIPlayer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAIPlayer()
{
	if (!Z_Registration_Info_UScriptStruct_AIPlayer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AIPlayer.InnerSingleton, Z_Construct_UScriptStruct_FAIPlayer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AIPlayer.InnerSingleton;
}
// End ScriptStruct FAIPlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_AIPlayer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAIPlayer::StaticStruct, Z_Construct_UScriptStruct_FAIPlayer_Statics::NewStructOps, TEXT("AIPlayer"), &Z_Registration_Info_UScriptStruct_AIPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAIPlayer), 1928481381U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_AIPlayer_h_3140486744(TEXT("/Script/POKER"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_AIPlayer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_AIPlayer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
