// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "POKER/Public/HandEvaluator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHandEvaluator() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
POKER_API UClass* Z_Construct_UClass_UHandEvaluator();
POKER_API UClass* Z_Construct_UClass_UHandEvaluator_NoRegister();
POKER_API UEnum* Z_Construct_UEnum_POKER_EPokerHand();
POKER_API UEnum* Z_Construct_UEnum_POKER_ERank();
POKER_API UScriptStruct* Z_Construct_UScriptStruct_FHandRank();
UPackage* Z_Construct_UPackage__Script_POKER();
// End Cross Module References

// Begin Enum EPokerHand
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPokerHand;
static UEnum* EPokerHand_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPokerHand.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPokerHand.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_POKER_EPokerHand, (UObject*)Z_Construct_UPackage__Script_POKER(), TEXT("EPokerHand"));
	}
	return Z_Registration_Info_UEnum_EPokerHand.OuterSingleton;
}
template<> POKER_API UEnum* StaticEnum<EPokerHand>()
{
	return EPokerHand_StaticEnum();
}
struct Z_Construct_UEnum_POKER_EPokerHand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Flush.DisplayName", "Flush" },
		{ "Flush.Name", "EPokerHand::Flush" },
		{ "FourOfAKind.DisplayName", "Four of a Kind" },
		{ "FourOfAKind.Name", "EPokerHand::FourOfAKind" },
		{ "FullHouse.DisplayName", "Full House" },
		{ "FullHouse.Name", "EPokerHand::FullHouse" },
		{ "HighCard.DisplayName", "High Card" },
		{ "HighCard.Name", "EPokerHand::HighCard" },
		{ "ModuleRelativePath", "Public/HandEvaluator.h" },
		{ "OnePair.DisplayName", "One Pair" },
		{ "OnePair.Name", "EPokerHand::OnePair" },
		{ "RoyalFlush.DisplayName", "Royal Flush" },
		{ "RoyalFlush.Name", "EPokerHand::RoyalFlush" },
		{ "Straight.DisplayName", "Straight" },
		{ "Straight.Name", "EPokerHand::Straight" },
		{ "StraightFlush.DisplayName", "Straight Flush" },
		{ "StraightFlush.Name", "EPokerHand::StraightFlush" },
		{ "ThreeOfAKind.DisplayName", "Three of a Kind" },
		{ "ThreeOfAKind.Name", "EPokerHand::ThreeOfAKind" },
		{ "TwoPair.DisplayName", "Two Pair" },
		{ "TwoPair.Name", "EPokerHand::TwoPair" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPokerHand::HighCard", (int64)EPokerHand::HighCard },
		{ "EPokerHand::OnePair", (int64)EPokerHand::OnePair },
		{ "EPokerHand::TwoPair", (int64)EPokerHand::TwoPair },
		{ "EPokerHand::ThreeOfAKind", (int64)EPokerHand::ThreeOfAKind },
		{ "EPokerHand::Straight", (int64)EPokerHand::Straight },
		{ "EPokerHand::Flush", (int64)EPokerHand::Flush },
		{ "EPokerHand::FullHouse", (int64)EPokerHand::FullHouse },
		{ "EPokerHand::FourOfAKind", (int64)EPokerHand::FourOfAKind },
		{ "EPokerHand::StraightFlush", (int64)EPokerHand::StraightFlush },
		{ "EPokerHand::RoyalFlush", (int64)EPokerHand::RoyalFlush },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_POKER_EPokerHand_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_POKER,
	nullptr,
	"EPokerHand",
	"EPokerHand",
	Z_Construct_UEnum_POKER_EPokerHand_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_POKER_EPokerHand_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_POKER_EPokerHand_Statics::Enum_MetaDataParams), Z_Construct_UEnum_POKER_EPokerHand_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_POKER_EPokerHand()
{
	if (!Z_Registration_Info_UEnum_EPokerHand.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPokerHand.InnerSingleton, Z_Construct_UEnum_POKER_EPokerHand_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPokerHand.InnerSingleton;
}
// End Enum EPokerHand

// Begin ScriptStruct FHandRank
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HandRank;
class UScriptStruct* FHandRank::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HandRank.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HandRank.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHandRank, (UObject*)Z_Construct_UPackage__Script_POKER(), TEXT("HandRank"));
	}
	return Z_Registration_Info_UScriptStruct_HandRank.OuterSingleton;
}
template<> POKER_API UScriptStruct* StaticStruct<FHandRank>()
{
	return FHandRank::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHandRank_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HandEvaluator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandType_MetaData[] = {
		{ "ModuleRelativePath", "Public/HandEvaluator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Kickers_MetaData[] = {
		{ "ModuleRelativePath", "Public/HandEvaluator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_HandType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HandType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Kickers_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Kickers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Kickers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHandRank>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHandRank_Statics::NewProp_HandType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHandRank_Statics::NewProp_HandType = { "HandType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHandRank, HandType), Z_Construct_UEnum_POKER_EPokerHand, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandType_MetaData), NewProp_HandType_MetaData) }; // 3258510390
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHandRank_Statics::NewProp_Kickers_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHandRank_Statics::NewProp_Kickers_Inner = { "Kickers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_POKER_ERank, METADATA_PARAMS(0, nullptr) }; // 759097556
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHandRank_Statics::NewProp_Kickers = { "Kickers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHandRank, Kickers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Kickers_MetaData), NewProp_Kickers_MetaData) }; // 759097556
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHandRank_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHandRank_Statics::NewProp_HandType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHandRank_Statics::NewProp_HandType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHandRank_Statics::NewProp_Kickers_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHandRank_Statics::NewProp_Kickers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHandRank_Statics::NewProp_Kickers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHandRank_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHandRank_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_POKER,
	nullptr,
	&NewStructOps,
	"HandRank",
	Z_Construct_UScriptStruct_FHandRank_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHandRank_Statics::PropPointers),
	sizeof(FHandRank),
	alignof(FHandRank),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHandRank_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHandRank_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHandRank()
{
	if (!Z_Registration_Info_UScriptStruct_HandRank.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HandRank.InnerSingleton, Z_Construct_UScriptStruct_FHandRank_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HandRank.InnerSingleton;
}
// End ScriptStruct FHandRank

// Begin Class UHandEvaluator
void UHandEvaluator::StaticRegisterNativesUHandEvaluator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHandEvaluator);
UClass* Z_Construct_UClass_UHandEvaluator_NoRegister()
{
	return UHandEvaluator::StaticClass();
}
struct Z_Construct_UClass_UHandEvaluator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HandEvaluator.h" },
		{ "ModuleRelativePath", "Public/HandEvaluator.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHandEvaluator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHandEvaluator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_POKER,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHandEvaluator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHandEvaluator_Statics::ClassParams = {
	&UHandEvaluator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHandEvaluator_Statics::Class_MetaDataParams), Z_Construct_UClass_UHandEvaluator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHandEvaluator()
{
	if (!Z_Registration_Info_UClass_UHandEvaluator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHandEvaluator.OuterSingleton, Z_Construct_UClass_UHandEvaluator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHandEvaluator.OuterSingleton;
}
template<> POKER_API UClass* StaticClass<UHandEvaluator>()
{
	return UHandEvaluator::StaticClass();
}
UHandEvaluator::UHandEvaluator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHandEvaluator);
UHandEvaluator::~UHandEvaluator() {}
// End Class UHandEvaluator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_HandEvaluator_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPokerHand_StaticEnum, TEXT("EPokerHand"), &Z_Registration_Info_UEnum_EPokerHand, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3258510390U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHandRank::StaticStruct, Z_Construct_UScriptStruct_FHandRank_Statics::NewStructOps, TEXT("HandRank"), &Z_Registration_Info_UScriptStruct_HandRank, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHandRank), 2667662122U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHandEvaluator, UHandEvaluator::StaticClass, TEXT("UHandEvaluator"), &Z_Registration_Info_UClass_UHandEvaluator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHandEvaluator), 3051387317U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_HandEvaluator_h_2733518123(TEXT("/Script/POKER"),
	Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_HandEvaluator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_HandEvaluator_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_HandEvaluator_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_HandEvaluator_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_HandEvaluator_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_HandEvaluator_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
