// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "POKER/Public/PokerGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePokerGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
POKER_API UClass* Z_Construct_UClass_AAIPlayer_NoRegister();
POKER_API UClass* Z_Construct_UClass_AMyPlayer_NoRegister();
POKER_API UClass* Z_Construct_UClass_APokerGameMode();
POKER_API UClass* Z_Construct_UClass_APokerGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_POKER();
// End Cross Module References

// Begin Class APokerGameMode
void APokerGameMode::StaticRegisterNativesAPokerGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APokerGameMode);
UClass* Z_Construct_UClass_APokerGameMode_NoRegister()
{
	return APokerGameMode::StaticClass();
}
struct Z_Construct_UClass_APokerGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PokerGameMode.h" },
		{ "ModuleRelativePath", "Public/PokerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokerGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestAIPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/PokerGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TestPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TestAIPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APokerGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokerGameMode_Statics::NewProp_TestPlayer = { "TestPlayer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokerGameMode, TestPlayer), Z_Construct_UClass_AMyPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestPlayer_MetaData), NewProp_TestPlayer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APokerGameMode_Statics::NewProp_TestAIPlayer = { "TestAIPlayer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APokerGameMode, TestAIPlayer), Z_Construct_UClass_AAIPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestAIPlayer_MetaData), NewProp_TestAIPlayer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APokerGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokerGameMode_Statics::NewProp_TestPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APokerGameMode_Statics::NewProp_TestAIPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APokerGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APokerGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_POKER,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APokerGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APokerGameMode_Statics::ClassParams = {
	&APokerGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APokerGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APokerGameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APokerGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APokerGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APokerGameMode()
{
	if (!Z_Registration_Info_UClass_APokerGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APokerGameMode.OuterSingleton, Z_Construct_UClass_APokerGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APokerGameMode.OuterSingleton;
}
template<> POKER_API UClass* StaticClass<APokerGameMode>()
{
	return APokerGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APokerGameMode);
APokerGameMode::~APokerGameMode() {}
// End Class APokerGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_PokerGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APokerGameMode, APokerGameMode::StaticClass, TEXT("APokerGameMode"), &Z_Registration_Info_UClass_APokerGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APokerGameMode), 107645577U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_PokerGameMode_h_2879459267(TEXT("/Script/POKER"),
	Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_PokerGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_PokerGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
