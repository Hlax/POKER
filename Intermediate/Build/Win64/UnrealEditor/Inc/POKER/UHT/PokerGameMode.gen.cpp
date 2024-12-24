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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APokerGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_APokerGameMode, APokerGameMode::StaticClass, TEXT("APokerGameMode"), &Z_Registration_Info_UClass_APokerGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APokerGameMode), 2811136734U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_PokerGameMode_h_3023454250(TEXT("/Script/POKER"),
	Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_PokerGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_PokerGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
