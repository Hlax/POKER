// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "POKER/Public/IPokerPlayerInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIPokerPlayerInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
POKER_API UClass* Z_Construct_UClass_UPokerPlayerInterface();
POKER_API UClass* Z_Construct_UClass_UPokerPlayerInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_POKER();
// End Cross Module References

// Begin Interface UPokerPlayerInterface
void UPokerPlayerInterface::StaticRegisterNativesUPokerPlayerInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPokerPlayerInterface);
UClass* Z_Construct_UClass_UPokerPlayerInterface_NoRegister()
{
	return UPokerPlayerInterface::StaticClass();
}
struct Z_Construct_UClass_UPokerPlayerInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IPokerPlayerInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPokerPlayerInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPokerPlayerInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_POKER,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPokerPlayerInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPokerPlayerInterface_Statics::ClassParams = {
	&UPokerPlayerInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPokerPlayerInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UPokerPlayerInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPokerPlayerInterface()
{
	if (!Z_Registration_Info_UClass_UPokerPlayerInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPokerPlayerInterface.OuterSingleton, Z_Construct_UClass_UPokerPlayerInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPokerPlayerInterface.OuterSingleton;
}
template<> POKER_API UClass* StaticClass<UPokerPlayerInterface>()
{
	return UPokerPlayerInterface::StaticClass();
}
UPokerPlayerInterface::UPokerPlayerInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPokerPlayerInterface);
UPokerPlayerInterface::~UPokerPlayerInterface() {}
// End Interface UPokerPlayerInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_IPokerPlayerInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPokerPlayerInterface, UPokerPlayerInterface::StaticClass, TEXT("UPokerPlayerInterface"), &Z_Registration_Info_UClass_UPokerPlayerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPokerPlayerInterface), 731312510U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_IPokerPlayerInterface_h_477149533(TEXT("/Script/POKER"),
	Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_IPokerPlayerInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_guestt_OneDrive_Documents_Unreal_Projects_POKER_Source_POKER_Public_IPokerPlayerInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
