// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FastPacedFPSGame/ActorHealthComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorHealthComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	FASTPACEDFPSGAME_API UClass* Z_Construct_UClass_UActorHealthComponent();
	FASTPACEDFPSGAME_API UClass* Z_Construct_UClass_UActorHealthComponent_NoRegister();
	FASTPACEDFPSGAME_API UFunction* Z_Construct_UDelegateFunction_FastPacedFPSGame_OnTakeDamageDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FastPacedFPSGame();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FastPacedFPSGame_OnTakeDamageDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FastPacedFPSGame_OnTakeDamageDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActorHealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FastPacedFPSGame_OnTakeDamageDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FastPacedFPSGame, nullptr, "OnTakeDamageDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FastPacedFPSGame_OnTakeDamageDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_FastPacedFPSGame_OnTakeDamageDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_FastPacedFPSGame_OnTakeDamageDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FastPacedFPSGame_OnTakeDamageDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnTakeDamageDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnTakeDamageDelegate)
{
	OnTakeDamageDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UActorHealthComponent::execTakeDamage)
	{
		P_GET_OBJECT(AActor,Z_Param_DamagedActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_OBJECT(UDamageType,Z_Param_DamageType);
		P_GET_OBJECT(AController,Z_Param_InstigatedBy);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	void UActorHealthComponent::StaticRegisterNativesUActorHealthComponent()
	{
		UClass* Class = UActorHealthComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TakeDamage", &UActorHealthComponent::execTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActorHealthComponent_TakeDamage_Statics
	{
		struct ActorHealthComponent_eventTakeDamage_Parms
		{
			AActor* DamagedActor;
			float Damage;
			const UDamageType* DamageType;
			AController* InstigatedBy;
			AActor* DamageCauser;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorHealthComponent_TakeDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorHealthComponent_eventTakeDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UActorHealthComponent_TakeDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorHealthComponent_eventTakeDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorHealthComponent_TakeDamage_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorHealthComponent_TakeDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorHealthComponent_eventTakeDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorHealthComponent_TakeDamage_Statics::NewProp_DamageType_MetaData), Z_Construct_UFunction_UActorHealthComponent_TakeDamage_Statics::NewProp_DamageType_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorHealthComponent_TakeDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorHealthComponent_eventTakeDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorHealthComponent_TakeDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorHealthComponent_eventTakeDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorHealthComponent_TakeDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorHealthComponent_TakeDamage_Statics::NewProp_DamagedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorHealthComponent_TakeDamage_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorHealthComponent_TakeDamage_Statics::NewProp_DamageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorHealthComponent_TakeDamage_Statics::NewProp_InstigatedBy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorHealthComponent_TakeDamage_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorHealthComponent_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActorHealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorHealthComponent_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorHealthComponent, nullptr, "TakeDamage", nullptr, nullptr, Z_Construct_UFunction_UActorHealthComponent_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorHealthComponent_TakeDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorHealthComponent_TakeDamage_Statics::ActorHealthComponent_eventTakeDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorHealthComponent_TakeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorHealthComponent_TakeDamage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorHealthComponent_TakeDamage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UActorHealthComponent_TakeDamage_Statics::ActorHealthComponent_eventTakeDamage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UActorHealthComponent_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorHealthComponent_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorHealthComponent);
	UClass* Z_Construct_UClass_UActorHealthComponent_NoRegister()
	{
		return UActorHealthComponent::StaticClass();
	}
	struct Z_Construct_UClass_UActorHealthComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTakeDamageDelagate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTakeDamageDelagate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorHealthComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FastPacedFPSGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorHealthComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UActorHealthComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActorHealthComponent_TakeDamage, "TakeDamage" }, // 2780072031
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorHealthComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorHealthComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ActorHealthComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ActorHealthComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorHealthComponent_Statics::NewProp_OnTakeDamageDelagate_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "ActorHealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UActorHealthComponent_Statics::NewProp_OnTakeDamageDelagate = { "OnTakeDamageDelagate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActorHealthComponent, OnTakeDamageDelagate), Z_Construct_UDelegateFunction_FastPacedFPSGame_OnTakeDamageDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorHealthComponent_Statics::NewProp_OnTakeDamageDelagate_MetaData), Z_Construct_UClass_UActorHealthComponent_Statics::NewProp_OnTakeDamageDelagate_MetaData) }; // 3502178728
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorHealthComponent_Statics::NewProp_DefaultHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "ActorHealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UActorHealthComponent_Statics::NewProp_DefaultHealth = { "DefaultHealth", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActorHealthComponent, DefaultHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorHealthComponent_Statics::NewProp_DefaultHealth_MetaData), Z_Construct_UClass_UActorHealthComponent_Statics::NewProp_DefaultHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorHealthComponent_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "ActorHealthComponent" },
		{ "ModuleRelativePath", "ActorHealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UActorHealthComponent_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActorHealthComponent, Health), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorHealthComponent_Statics::NewProp_Health_MetaData), Z_Construct_UClass_UActorHealthComponent_Statics::NewProp_Health_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorHealthComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorHealthComponent_Statics::NewProp_OnTakeDamageDelagate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorHealthComponent_Statics::NewProp_DefaultHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorHealthComponent_Statics::NewProp_Health,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorHealthComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorHealthComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorHealthComponent_Statics::ClassParams = {
		&UActorHealthComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UActorHealthComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UActorHealthComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorHealthComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UActorHealthComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorHealthComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UActorHealthComponent()
	{
		if (!Z_Registration_Info_UClass_UActorHealthComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorHealthComponent.OuterSingleton, Z_Construct_UClass_UActorHealthComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorHealthComponent.OuterSingleton;
	}
	template<> FASTPACEDFPSGAME_API UClass* StaticClass<UActorHealthComponent>()
	{
		return UActorHealthComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorHealthComponent);
	UActorHealthComponent::~UActorHealthComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_yuisa_OneDrive_Documents_Unreal_Projects_FastPacedFPSGame_Source_FastPacedFPSGame_ActorHealthComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yuisa_OneDrive_Documents_Unreal_Projects_FastPacedFPSGame_Source_FastPacedFPSGame_ActorHealthComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorHealthComponent, UActorHealthComponent::StaticClass, TEXT("UActorHealthComponent"), &Z_Registration_Info_UClass_UActorHealthComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorHealthComponent), 858369832U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yuisa_OneDrive_Documents_Unreal_Projects_FastPacedFPSGame_Source_FastPacedFPSGame_ActorHealthComponent_h_3615646488(TEXT("/Script/FastPacedFPSGame"),
		Z_CompiledInDeferFile_FID_Users_yuisa_OneDrive_Documents_Unreal_Projects_FastPacedFPSGame_Source_FastPacedFPSGame_ActorHealthComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_yuisa_OneDrive_Documents_Unreal_Projects_FastPacedFPSGame_Source_FastPacedFPSGame_ActorHealthComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
