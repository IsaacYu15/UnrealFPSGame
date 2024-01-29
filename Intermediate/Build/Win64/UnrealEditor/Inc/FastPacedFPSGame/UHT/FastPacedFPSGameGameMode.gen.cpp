// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FastPacedFPSGame/FastPacedFPSGameGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFastPacedFPSGameGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	FASTPACEDFPSGAME_API UClass* Z_Construct_UClass_AFastPacedFPSGameGameMode();
	FASTPACEDFPSGAME_API UClass* Z_Construct_UClass_AFastPacedFPSGameGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FastPacedFPSGame();
// End Cross Module References
	void AFastPacedFPSGameGameMode::StaticRegisterNativesAFastPacedFPSGameGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFastPacedFPSGameGameMode);
	UClass* Z_Construct_UClass_AFastPacedFPSGameGameMode_NoRegister()
	{
		return AFastPacedFPSGameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFastPacedFPSGameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFastPacedFPSGameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FastPacedFPSGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGameGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFastPacedFPSGameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FastPacedFPSGameGameMode.h" },
		{ "ModuleRelativePath", "FastPacedFPSGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFastPacedFPSGameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFastPacedFPSGameGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFastPacedFPSGameGameMode_Statics::ClassParams = {
		&AFastPacedFPSGameGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGameGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFastPacedFPSGameGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AFastPacedFPSGameGameMode()
	{
		if (!Z_Registration_Info_UClass_AFastPacedFPSGameGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFastPacedFPSGameGameMode.OuterSingleton, Z_Construct_UClass_AFastPacedFPSGameGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFastPacedFPSGameGameMode.OuterSingleton;
	}
	template<> FASTPACEDFPSGAME_API UClass* StaticClass<AFastPacedFPSGameGameMode>()
	{
		return AFastPacedFPSGameGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFastPacedFPSGameGameMode);
	AFastPacedFPSGameGameMode::~AFastPacedFPSGameGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_yuisa_OneDrive_Documents_Unreal_Projects_FastPacedFPSGame_Source_FastPacedFPSGame_FastPacedFPSGameGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yuisa_OneDrive_Documents_Unreal_Projects_FastPacedFPSGame_Source_FastPacedFPSGame_FastPacedFPSGameGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFastPacedFPSGameGameMode, AFastPacedFPSGameGameMode::StaticClass, TEXT("AFastPacedFPSGameGameMode"), &Z_Registration_Info_UClass_AFastPacedFPSGameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFastPacedFPSGameGameMode), 4226749491U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yuisa_OneDrive_Documents_Unreal_Projects_FastPacedFPSGame_Source_FastPacedFPSGame_FastPacedFPSGameGameMode_h_3028970580(TEXT("/Script/FastPacedFPSGame"),
		Z_CompiledInDeferFile_FID_Users_yuisa_OneDrive_Documents_Unreal_Projects_FastPacedFPSGame_Source_FastPacedFPSGame_FastPacedFPSGameGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_yuisa_OneDrive_Documents_Unreal_Projects_FastPacedFPSGame_Source_FastPacedFPSGame_FastPacedFPSGameGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
