// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFastPacedFPSGame_init() {}
	FASTPACEDFPSGAME_API UFunction* Z_Construct_UDelegateFunction_FastPacedFPSGame_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_FastPacedFPSGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_FastPacedFPSGame()
	{
		if (!Z_Registration_Info_UPackage__Script_FastPacedFPSGame.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_FastPacedFPSGame_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/FastPacedFPSGame",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xBE502709,
				0xEF219FAA,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_FastPacedFPSGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_FastPacedFPSGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FastPacedFPSGame(Z_Construct_UPackage__Script_FastPacedFPSGame, TEXT("/Script/FastPacedFPSGame"), Z_Registration_Info_UPackage__Script_FastPacedFPSGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xBE502709, 0xEF219FAA));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
