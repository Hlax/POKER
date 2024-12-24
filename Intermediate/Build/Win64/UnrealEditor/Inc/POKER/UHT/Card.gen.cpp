// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "POKER/Public/Card.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCard() {}

// Begin Cross Module References
POKER_API UEnum* Z_Construct_UEnum_POKER_ERank();
POKER_API UEnum* Z_Construct_UEnum_POKER_ESuit();
POKER_API UScriptStruct* Z_Construct_UScriptStruct_FCard();
UPackage* Z_Construct_UPackage__Script_POKER();
// End Cross Module References

// Begin Enum ESuit
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESuit;
static UEnum* ESuit_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESuit.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESuit.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_POKER_ESuit, (UObject*)Z_Construct_UPackage__Script_POKER(), TEXT("ESuit"));
	}
	return Z_Registration_Info_UEnum_ESuit.OuterSingleton;
}
template<> POKER_API UEnum* StaticEnum<ESuit>()
{
	return ESuit_StaticEnum();
}
struct Z_Construct_UEnum_POKER_ESuit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Clubs.DisplayName", "Clubs" },
		{ "Clubs.Name", "ESuit::Clubs" },
		{ "Diamonds.DisplayName", "Diamonds" },
		{ "Diamonds.Name", "ESuit::Diamonds" },
		{ "Hearts.DisplayName", "Hearts" },
		{ "Hearts.Name", "ESuit::Hearts" },
		{ "ModuleRelativePath", "Public/Card.h" },
		{ "Spades.DisplayName", "Spades" },
		{ "Spades.Name", "ESuit::Spades" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESuit::Hearts", (int64)ESuit::Hearts },
		{ "ESuit::Diamonds", (int64)ESuit::Diamonds },
		{ "ESuit::Clubs", (int64)ESuit::Clubs },
		{ "ESuit::Spades", (int64)ESuit::Spades },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_POKER_ESuit_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_POKER,
	nullptr,
	"ESuit",
	"ESuit",
	Z_Construct_UEnum_POKER_ESuit_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_POKER_ESuit_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_POKER_ESuit_Statics::Enum_MetaDataParams), Z_Construct_UEnum_POKER_ESuit_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_POKER_ESuit()
{
	if (!Z_Registration_Info_UEnum_ESuit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESuit.InnerSingleton, Z_Construct_UEnum_POKER_ESuit_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESuit.InnerSingleton;
}
// End Enum ESuit

// Begin Enum ERank
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERank;
static UEnum* ERank_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERank.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERank.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_POKER_ERank, (UObject*)Z_Construct_UPackage__Script_POKER(), TEXT("ERank"));
	}
	return Z_Registration_Info_UEnum_ERank.OuterSingleton;
}
template<> POKER_API UEnum* StaticEnum<ERank>()
{
	return ERank_StaticEnum();
}
struct Z_Construct_UEnum_POKER_ERank_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Ace.DisplayName", "Ace" },
		{ "Ace.Name", "ERank::Ace" },
		{ "Eight.DisplayName", "Eight" },
		{ "Eight.Name", "ERank::Eight" },
		{ "Five.DisplayName", "Five" },
		{ "Five.Name", "ERank::Five" },
		{ "Four.DisplayName", "Four" },
		{ "Four.Name", "ERank::Four" },
		{ "Jack.DisplayName", "Jack" },
		{ "Jack.Name", "ERank::Jack" },
		{ "King.DisplayName", "King" },
		{ "King.Name", "ERank::King" },
		{ "ModuleRelativePath", "Public/Card.h" },
		{ "Nine.DisplayName", "Nine" },
		{ "Nine.Name", "ERank::Nine" },
		{ "Queen.DisplayName", "Queen" },
		{ "Queen.Name", "ERank::Queen" },
		{ "Seven.DisplayName", "Seven" },
		{ "Seven.Name", "ERank::Seven" },
		{ "Six.DisplayName", "Six" },
		{ "Six.Name", "ERank::Six" },
		{ "Ten.DisplayName", "Ten" },
		{ "Ten.Name", "ERank::Ten" },
		{ "Three.DisplayName", "Three" },
		{ "Three.Name", "ERank::Three" },
		{ "Two.DisplayName", "Two" },
		{ "Two.Name", "ERank::Two" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERank::Two", (int64)ERank::Two },
		{ "ERank::Three", (int64)ERank::Three },
		{ "ERank::Four", (int64)ERank::Four },
		{ "ERank::Five", (int64)ERank::Five },
		{ "ERank::Six", (int64)ERank::Six },
		{ "ERank::Seven", (int64)ERank::Seven },
		{ "ERank::Eight", (int64)ERank::Eight },
		{ "ERank::Nine", (int64)ERank::Nine },
		{ "ERank::Ten", (int64)ERank::Ten },
		{ "ERank::Jack", (int64)ERank::Jack },
		{ "ERank::Queen", (int64)ERank::Queen },
		{ "ERank::King", (int64)ERank::King },
		{ "ERank::Ace", (int64)ERank::Ace },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_POKER_ERank_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_POKER,
	nullptr,
	"ERank",
	"ERank",
	Z_Construct_UEnum_POKER_ERank_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_POKER_ERank_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_POKER_ERank_Statics::Enum_MetaDataParams), Z_Construct_UEnum_POKER_ERank_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_POKER_ERank()
{
	if (!Z_Registration_Info_UEnum_ERank.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERank.InnerSingleton, Z_Construct_UEnum_POKER_ERank_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERank.InnerSingleton;
}
// End Enum ERank

// Begin ScriptStruct FCard
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Card;
class UScriptStruct* FCard::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Card.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Card.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCard, (UObject*)Z_Construct_UPackage__Script_POKER(), TEXT("Card"));
	}
	return Z_Registration_Info_UScriptStruct_Card.OuterSingleton;
}
template<> POKER_API UScriptStruct* StaticStruct<FCard>()
{
	return FCard::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Card.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Suit_MetaData[] = {
		{ "ModuleRelativePath", "Public/Card.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rank_MetaData[] = {
		{ "ModuleRelativePath", "Public/Card.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Suit_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Suit;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Rank_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Rank;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCard>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCard_Statics::NewProp_Suit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCard_Statics::NewProp_Suit = { "Suit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCard, Suit), Z_Construct_UEnum_POKER_ESuit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Suit_MetaData), NewProp_Suit_MetaData) }; // 2434891266
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCard_Statics::NewProp_Rank_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCard_Statics::NewProp_Rank = { "Rank", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCard, Rank), Z_Construct_UEnum_POKER_ERank, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rank_MetaData), NewProp_Rank_MetaData) }; // 759097556
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCard_Statics::NewProp_Suit_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCard_Statics::NewProp_Suit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCard_Statics::NewProp_Rank_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCard_Statics::NewProp_Rank,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCard_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_POKER,
	nullptr,
	&NewStructOps,
	"Card",
	Z_Construct_UScriptStruct_FCard_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCard_Statics::PropPointers),
	sizeof(FCard),
	alignof(FCard),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCard_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCard_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCard()
{
	if (!Z_Registration_Info_UScriptStruct_Card.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Card.InnerSingleton, Z_Construct_UScriptStruct_FCard_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Card.InnerSingleton;
}
// End ScriptStruct FCard

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_Card_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESuit_StaticEnum, TEXT("ESuit"), &Z_Registration_Info_UEnum_ESuit, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2434891266U) },
		{ ERank_StaticEnum, TEXT("ERank"), &Z_Registration_Info_UEnum_ERank, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 759097556U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCard::StaticStruct, Z_Construct_UScriptStruct_FCard_Statics::NewStructOps, TEXT("Card"), &Z_Registration_Info_UScriptStruct_Card, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCard), 2801371824U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_Card_h_1997388714(TEXT("/Script/POKER"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_Card_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_Card_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_Card_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_Card_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
