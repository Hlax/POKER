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
ENGINE_API UClass* Z_Construct_UClass_AActor();
POKER_API UClass* Z_Construct_UClass_AMyPlayer();
POKER_API UClass* Z_Construct_UClass_AMyPlayer_NoRegister();
POKER_API UClass* Z_Construct_UClass_UPokerPlayerInterface_NoRegister();
POKER_API UScriptStruct* Z_Construct_UScriptStruct_FCard();
UPackage* Z_Construct_UPackage__Script_POKER();
// End Cross Module References

// Begin Class AMyPlayer
void AMyPlayer::StaticRegisterNativesAMyPlayer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyPlayer);
UClass* Z_Construct_UClass_AMyPlayer_NoRegister()
{
	return AMyPlayer::StaticClass();
}
struct Z_Construct_UClass_AMyPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyPlayer.h" },
		{ "ModuleRelativePath", "Public/MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[] = {
		{ "Category", "Poker" },
		{ "ModuleRelativePath", "Public/MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChipCount_MetaData[] = {
		{ "Category", "Poker" },
		{ "ModuleRelativePath", "Public/MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInHand_MetaData[] = {
		{ "Category", "Poker" },
		{ "ModuleRelativePath", "Public/MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentBet_MetaData[] = {
		{ "Category", "Poker" },
		{ "ModuleRelativePath", "Public/MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeatIndex_MetaData[] = {
		{ "Category", "Poker" },
		{ "ModuleRelativePath", "Public/MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoleCards_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChipCount;
	static void NewProp_bIsInHand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInHand;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentBet;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SeatIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HoleCards_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HoleCards;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, PlayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerName_MetaData), NewProp_PlayerName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_ChipCount = { "ChipCount", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, ChipCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChipCount_MetaData), NewProp_ChipCount_MetaData) };
void Z_Construct_UClass_AMyPlayer_Statics::NewProp_bIsInHand_SetBit(void* Obj)
{
	((AMyPlayer*)Obj)->bIsInHand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_bIsInHand = { "bIsInHand", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyPlayer), &Z_Construct_UClass_AMyPlayer_Statics::NewProp_bIsInHand_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInHand_MetaData), NewProp_bIsInHand_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_CurrentBet = { "CurrentBet", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, CurrentBet), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentBet_MetaData), NewProp_CurrentBet_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_SeatIndex = { "SeatIndex", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, SeatIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeatIndex_MetaData), NewProp_SeatIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_HoleCards_Inner = { "HoleCards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCard, METADATA_PARAMS(0, nullptr) }; // 2801371824
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_HoleCards = { "HoleCards", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, HoleCards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoleCards_MetaData), NewProp_HoleCards_MetaData) }; // 2801371824
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_PlayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_ChipCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_bIsInHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_CurrentBet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_SeatIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_HoleCards_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_HoleCards,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_POKER,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMyPlayer_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UPokerPlayerInterface_NoRegister, (int32)VTABLE_OFFSET(AMyPlayer, IPokerPlayerInterface), false },  // 731312510
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyPlayer_Statics::ClassParams = {
	&AMyPlayer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyPlayer_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyPlayer()
{
	if (!Z_Registration_Info_UClass_AMyPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyPlayer.OuterSingleton, Z_Construct_UClass_AMyPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyPlayer.OuterSingleton;
}
template<> POKER_API UClass* StaticClass<AMyPlayer>()
{
	return AMyPlayer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPlayer);
AMyPlayer::~AMyPlayer() {}
// End Class AMyPlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_MyPlayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyPlayer, AMyPlayer::StaticClass, TEXT("AMyPlayer"), &Z_Registration_Info_UClass_AMyPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPlayer), 2206081799U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_MyPlayer_h_1301890968(TEXT("/Script/POKER"),
	Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_MyPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_MyPlayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
