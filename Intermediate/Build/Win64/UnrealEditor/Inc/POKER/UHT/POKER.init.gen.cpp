// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePOKER_init() {}
	POKER_API UFunction* Z_Construct_UDelegateFunction_POKER_OnHandComplete__DelegateSignature();
	POKER_API UFunction* Z_Construct_UDelegateFunction_POKER_OnRoundComplete__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_POKER;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_POKER()
	{
		if (!Z_Registration_Info_UPackage__Script_POKER.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_POKER_OnHandComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_POKER_OnRoundComplete__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/POKER",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xE2B624F3,
				0x653F234D,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_POKER.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_POKER.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_POKER(Z_Construct_UPackage__Script_POKER, TEXT("/Script/POKER"), Z_Registration_Info_UPackage__Script_POKER, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE2B624F3, 0x653F234D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
