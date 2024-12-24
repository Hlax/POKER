// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "POKER/Public/PokerGameState.h"
#include "POKER/Public/Card.h"
#include "POKER/Public/Deck.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePokerGameState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
POKER_API UClass* Z_Construct_UClass_APokerGameState();
POKER_API UClass* Z_Construct_UClass_APokerGameState_NoRegister();
POKER_API UClass* Z_Construct_UClass_UPokerPlayerInterface_NoRegister();
POKER_API UEnum* Z_Construct_UEnum_POKER_EPokerGamePhase();
POKER_API UScriptStruct* Z_Construct_UScriptStruct_FCard();
POKER_API UScriptStruct* Z_Construct_UScriptStruct_FDeck();
UPackage* Z_Construct_UPackage__Script_POKER();
// End Cross Module References

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
		{ "ModuleRelativePath", "Public/PokerGameState.h" },
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

// Begin Class APokerGameState
void APokerGameState::StaticRegisterNativesAPokerGameState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APokerGameState);
UClass* Z_Construct_UClass_APokerGameState_NoRegister()
{
	return APokerGameState::StaticClass();
}
struct Z_Construct_UClass_APokerGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PokerGameState.h" },
		{ "ModuleRelativePath", "Public/PokerGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPhase_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokerGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Deck_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokerGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommunityCards_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokerGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PotSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokerGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentBet_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokerGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmallBlindAmount_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokerGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DealerPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokerGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPlayerTurn_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokerGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Players_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokerGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastRaisePosition_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Changed back to IPokerPlayerInterface\n" },
#endif
		{ "ModuleRelativePath", "Public/PokerGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Changed back to IPokerPlayerInterface" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHandInProgress_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokerGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentPhase_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentPhase;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Deck;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommunityCards_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CommunityCards;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PotSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentBet;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SmallBlindAmount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DealerPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentPlayerTurn;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Players_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Players;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastRaisePosition;
	static void NewProp_bHandInProgress_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHandInProgress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APokerGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APokerGameState_Statics::NewProp_CurrentPhase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APokerGameState_Statics::NewProp_CurrentPhase = { "CurrentPhase", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokerGameState, CurrentPhase), Z_Construct_UEnum_POKER_EPokerGamePhase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPhase_MetaData), NewProp_CurrentPhase_MetaData) }; // 2834814957
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APokerGameState_Statics::NewProp_Deck = { "Deck", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokerGameState, Deck), Z_Construct_UScriptStruct_FDeck, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Deck_MetaData), NewProp_Deck_MetaData) }; // 1871853213
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APokerGameState_Statics::NewProp_CommunityCards_Inner = { "CommunityCards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCard, METADATA_PARAMS(0, nullptr) }; // 2801371824
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APokerGameState_Statics::NewProp_CommunityCards = { "CommunityCards", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokerGameState, CommunityCards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommunityCards_MetaData), NewProp_CommunityCards_MetaData) }; // 2801371824
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APokerGameState_Statics::NewProp_PotSize = { "PotSize", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokerGameState, PotSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PotSize_MetaData), NewProp_PotSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APokerGameState_Statics::NewProp_CurrentBet = { "CurrentBet", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokerGameState, CurrentBet), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentBet_MetaData), NewProp_CurrentBet_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APokerGameState_Statics::NewProp_SmallBlindAmount = { "SmallBlindAmount", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokerGameState, SmallBlindAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmallBlindAmount_MetaData), NewProp_SmallBlindAmount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APokerGameState_Statics::NewProp_DealerPosition = { "DealerPosition", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokerGameState, DealerPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DealerPosition_MetaData), NewProp_DealerPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APokerGameState_Statics::NewProp_CurrentPlayerTurn = { "CurrentPlayerTurn", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokerGameState, CurrentPlayerTurn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPlayerTurn_MetaData), NewProp_CurrentPlayerTurn_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_APokerGameState_Statics::NewProp_Players_Inner = { "Players", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPokerPlayerInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APokerGameState_Statics::NewProp_Players = { "Players", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokerGameState, Players), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Players_MetaData), NewProp_Players_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APokerGameState_Statics::NewProp_LastRaisePosition = { "LastRaisePosition", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokerGameState, LastRaisePosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastRaisePosition_MetaData), NewProp_LastRaisePosition_MetaData) };
void Z_Construct_UClass_APokerGameState_Statics::NewProp_bHandInProgress_SetBit(void* Obj)
{
	((APokerGameState*)Obj)->bHandInProgress = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APokerGameState_Statics::NewProp_bHandInProgress = { "bHandInProgress", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APokerGameState), &Z_Construct_UClass_APokerGameState_Statics::NewProp_bHandInProgress_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHandInProgress_MetaData), NewProp_bHandInProgress_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APokerGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokerGameState_Statics::NewProp_CurrentPhase_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokerGameState_Statics::NewProp_CurrentPhase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokerGameState_Statics::NewProp_Deck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokerGameState_Statics::NewProp_CommunityCards_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokerGameState_Statics::NewProp_CommunityCards,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokerGameState_Statics::NewProp_PotSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokerGameState_Statics::NewProp_CurrentBet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokerGameState_Statics::NewProp_SmallBlindAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokerGameState_Statics::NewProp_DealerPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokerGameState_Statics::NewProp_CurrentPlayerTurn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokerGameState_Statics::NewProp_Players_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokerGameState_Statics::NewProp_Players,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokerGameState_Statics::NewProp_LastRaisePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokerGameState_Statics::NewProp_bHandInProgress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APokerGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APokerGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_POKER,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APokerGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APokerGameState_Statics::ClassParams = {
	&APokerGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APokerGameState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APokerGameState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokerGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_APokerGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APokerGameState()
{
	if (!Z_Registration_Info_UClass_APokerGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APokerGameState.OuterSingleton, Z_Construct_UClass_APokerGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APokerGameState.OuterSingleton;
}
template<> POKER_API UClass* StaticClass<APokerGameState>()
{
	return APokerGameState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APokerGameState);
APokerGameState::~APokerGameState() {}
// End Class APokerGameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_PokerGameState_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPokerGamePhase_StaticEnum, TEXT("EPokerGamePhase"), &Z_Registration_Info_UEnum_EPokerGamePhase, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2834814957U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APokerGameState, APokerGameState::StaticClass, TEXT("APokerGameState"), &Z_Registration_Info_UClass_APokerGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APokerGameState), 3930840966U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_PokerGameState_h_346001157(TEXT("/Script/POKER"),
	Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_PokerGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_PokerGameState_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_PokerGameState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_PokerGameState_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
