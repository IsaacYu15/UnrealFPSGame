// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FastPacedFPSGame/Public/FastPacedFPSGamePlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFastPacedFPSGamePlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	FASTPACEDFPSGAME_API UClass* Z_Construct_UClass_AFastPacedFPSGamePlayerController();
	FASTPACEDFPSGAME_API UClass* Z_Construct_UClass_AFastPacedFPSGamePlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FastPacedFPSGame();
// End Cross Module References
	void AFastPacedFPSGamePlayerController::StaticRegisterNativesAFastPacedFPSGamePlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFastPacedFPSGamePlayerController);
	UClass* Z_Construct_UClass_AFastPacedFPSGamePlayerController_NoRegister()
	{
		return AFastPacedFPSGamePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AFastPacedFPSGamePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFastPacedFPSGamePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_FastPacedFPSGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGamePlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFastPacedFPSGamePlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "FastPacedFPSGamePlayerController.h" },
		{ "ModuleRelativePath", "Public/FastPacedFPSGamePlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFastPacedFPSGamePlayerController_Statics::NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "Public/FastPacedFPSGamePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFastPacedFPSGamePlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFastPacedFPSGamePlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGamePlayerController_Statics::NewProp_InputMappingContext_MetaData), Z_Construct_UClass_AFastPacedFPSGamePlayerController_Statics::NewProp_InputMappingContext_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFastPacedFPSGamePlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFastPacedFPSGamePlayerController_Statics::NewProp_InputMappingContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFastPacedFPSGamePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFastPacedFPSGamePlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFastPacedFPSGamePlayerController_Statics::ClassParams = {
		&AFastPacedFPSGamePlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFastPacedFPSGamePlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGamePlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGamePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AFastPacedFPSGamePlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGamePlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFastPacedFPSGamePlayerController()
	{
		if (!Z_Registration_Info_UClass_AFastPacedFPSGamePlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFastPacedFPSGamePlayerController.OuterSingleton, Z_Construct_UClass_AFastPacedFPSGamePlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFastPacedFPSGamePlayerController.OuterSingleton;
	}
	template<> FASTPACEDFPSGAME_API UClass* StaticClass<AFastPacedFPSGamePlayerController>()
	{
		return AFastPacedFPSGamePlayerController::StaticClass();
	}
	AFastPacedFPSGamePlayerController::AFastPacedFPSGamePlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFastPacedFPSGamePlayerController);
	AFastPacedFPSGamePlayerController::~AFastPacedFPSGamePlayerController() {}
	struct Z_CompiledInDeferFile_FID_Users_yuisa_OneDrive_Documents_Unreal_Projects_FastPacedFPSGame_Source_FastPacedFPSGame_Public_FastPacedFPSGamePlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yuisa_OneDrive_Documents_Unreal_Projects_FastPacedFPSGame_Source_FastPacedFPSGame_Public_FastPacedFPSGamePlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFastPacedFPSGamePlayerController, AFastPacedFPSGamePlayerController::StaticClass, TEXT("AFastPacedFPSGamePlayerController"), &Z_Registration_Info_UClass_AFastPacedFPSGamePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFastPacedFPSGamePlayerController), 4154280338U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yuisa_OneDrive_Documents_Unreal_Projects_FastPacedFPSGame_Source_FastPacedFPSGame_Public_FastPacedFPSGamePlayerController_h_2200129118(TEXT("/Script/FastPacedFPSGame"),
		Z_CompiledInDeferFile_FID_Users_yuisa_OneDrive_Documents_Unreal_Projects_FastPacedFPSGame_Source_FastPacedFPSGame_Public_FastPacedFPSGamePlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_yuisa_OneDrive_Documents_Unreal_Projects_FastPacedFPSGame_Source_FastPacedFPSGame_Public_FastPacedFPSGamePlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
