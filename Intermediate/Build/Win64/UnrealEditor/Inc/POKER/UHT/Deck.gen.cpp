// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "POKER/Public/Deck.h"
#include "POKER/Public/Card.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeck() {}

// Begin Cross Module References
POKER_API UScriptStruct* Z_Construct_UScriptStruct_FCard();
POKER_API UScriptStruct* Z_Construct_UScriptStruct_FDeck();
UPackage* Z_Construct_UPackage__Script_POKER();
// End Cross Module References

// Begin ScriptStruct FDeck
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Deck;
class UScriptStruct* FDeck::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Deck.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Deck.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDeck, (UObject*)Z_Construct_UPackage__Script_POKER(), TEXT("Deck"));
	}
	return Z_Registration_Info_UScriptStruct_Deck.OuterSingleton;
}
template<> POKER_API UScriptStruct* StaticStruct<FDeck>()
{
	return FDeck::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDeck_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Deck.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cards_MetaData[] = {
		{ "ModuleRelativePath", "Public/Deck.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Cards_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Cards;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDeck>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDeck_Statics::NewProp_Cards_Inner = { "Cards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCard, METADATA_PARAMS(0, nullptr) }; // 2801371824
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDeck_Statics::NewProp_Cards = { "Cards", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDeck, Cards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cards_MetaData), NewProp_Cards_MetaData) }; // 2801371824
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDeck_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeck_Statics::NewProp_Cards_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeck_Statics::NewProp_Cards,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeck_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDeck_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_POKER,
	nullptr,
	&NewStructOps,
	"Deck",
	Z_Construct_UScriptStruct_FDeck_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeck_Statics::PropPointers),
	sizeof(FDeck),
	alignof(FDeck),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeck_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDeck_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDeck()
{
	if (!Z_Registration_Info_UScriptStruct_Deck.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Deck.InnerSingleton, Z_Construct_UScriptStruct_FDeck_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Deck.InnerSingleton;
}
// End ScriptStruct FDeck

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_Deck_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDeck::StaticStruct, Z_Construct_UScriptStruct_FDeck_Statics::NewStructOps, TEXT("Deck"), &Z_Registration_Info_UScriptStruct_Deck, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDeck), 1871853213U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_Deck_h_1436781272(TEXT("/Script/POKER"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_Deck_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_Deck_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
