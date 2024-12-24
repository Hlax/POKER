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
POKER_API UClass* Z_Construct_UClass_AAIPlayer();
POKER_API UClass* Z_Construct_UClass_AAIPlayer_NoRegister();
POKER_API UClass* Z_Construct_UClass_AMyPlayer();
UPackage* Z_Construct_UPackage__Script_POKER();
// End Cross Module References

// Begin Class AAIPlayer
void AAIPlayer::StaticRegisterNativesAAIPlayer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAIPlayer);
UClass* Z_Construct_UClass_AAIPlayer_NoRegister()
{
	return AAIPlayer::StaticClass();
}
struct Z_Construct_UClass_AAIPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AIPlayer.h" },
		{ "ModuleRelativePath", "Public/AIPlayer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAIPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMyPlayer,
	(UObject* (*)())Z_Construct_UPackage__Script_POKER,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIPlayer_Statics::ClassParams = {
	&AAIPlayer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_AAIPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAIPlayer()
{
	if (!Z_Registration_Info_UClass_AAIPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAIPlayer.OuterSingleton, Z_Construct_UClass_AAIPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAIPlayer.OuterSingleton;
}
template<> POKER_API UClass* StaticClass<AAIPlayer>()
{
	return AAIPlayer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAIPlayer);
AAIPlayer::~AAIPlayer() {}
// End Class AAIPlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_AIPlayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAIPlayer, AAIPlayer::StaticClass, TEXT("AAIPlayer"), &Z_Registration_Info_UClass_AAIPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIPlayer), 878951211U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_AIPlayer_h_598700963(TEXT("/Script/POKER"),
	Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_AIPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_AIPlayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
