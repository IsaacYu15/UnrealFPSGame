// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FastPacedFPSGame/FastPacedFPSGameCharacter.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFastPacedFPSGameCharacter() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	FASTPACEDFPSGAME_API UClass* Z_Construct_UClass_AFastPacedFPSGameCharacter();
	FASTPACEDFPSGAME_API UClass* Z_Construct_UClass_AFastPacedFPSGameCharacter_NoRegister();
	FASTPACEDFPSGAME_API UEnum* Z_Construct_UEnum_FastPacedFPSGame_State();
	UPackage* Z_Construct_UPackage__Script_FastPacedFPSGame();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_State;
	static UEnum* State_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_State.OuterSingleton)
		{
			Z_Registration_Info_UEnum_State.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FastPacedFPSGame_State, (UObject*)Z_Construct_UPackage__Script_FastPacedFPSGame(), TEXT("State"));
		}
		return Z_Registration_Info_UEnum_State.OuterSingleton;
	}
	template<> FASTPACEDFPSGAME_API UEnum* StaticEnum<State>()
	{
		return State_StaticEnum();
	}
	struct Z_Construct_UEnum_FastPacedFPSGame_State_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FastPacedFPSGame_State_Statics::Enumerators[] = {
		{ "State::Dashing", (int64)State::Dashing },
		{ "State::Attacking", (int64)State::Attacking },
		{ "State::Grappling", (int64)State::Grappling },
		{ "State::WallRunning", (int64)State::WallRunning },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FastPacedFPSGame_State_Statics::Enum_MetaDataParams[] = {
		{ "Attacking.Name", "State::Attacking" },
		{ "BlueprintType", "true" },
		{ "Dashing.Name", "State::Dashing" },
		{ "Grappling.Name", "State::Grappling" },
		{ "ModuleRelativePath", "FastPacedFPSGameCharacter.h" },
		{ "WallRunning.Name", "State::WallRunning" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FastPacedFPSGame_State_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FastPacedFPSGame,
		nullptr,
		"State",
		"State",
		Z_Construct_UEnum_FastPacedFPSGame_State_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FastPacedFPSGame_State_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FastPacedFPSGame_State_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FastPacedFPSGame_State_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_FastPacedFPSGame_State()
	{
		if (!Z_Registration_Info_UEnum_State.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_State.InnerSingleton, Z_Construct_UEnum_FastPacedFPSGame_State_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_State.InnerSingleton;
	}
	DEFINE_FUNCTION(AFastPacedFPSGameCharacter::execLaunchPlayer)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LaunchPlayer(Z_Param_Amount,Z_Param_Direction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFastPacedFPSGameCharacter::execMovementCoolDownManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MovementCoolDownManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFastPacedFPSGameCharacter::execOnOverlapEnd)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFastPacedFPSGameCharacter::execOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFastPacedFPSGameCharacter::execGetMesh1P)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetMesh1P();
		P_NATIVE_END;
	}
	void AFastPacedFPSGameCharacter::StaticRegisterNativesAFastPacedFPSGameCharacter()
	{
		UClass* Class = AFastPacedFPSGameCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMesh1P", &AFastPacedFPSGameCharacter::execGetMesh1P },
			{ "LaunchPlayer", &AFastPacedFPSGameCharacter::execLaunchPlayer },
			{ "MovementCoolDownManager", &AFastPacedFPSGameCharacter::execMovementCoolDownManager },
			{ "OnOverlapBegin", &AFastPacedFPSGameCharacter::execOnOverlapBegin },
			{ "OnOverlapEnd", &AFastPacedFPSGameCharacter::execOnOverlapEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFastPacedFPSGameCharacter_GetMesh1P_Statics
	{
		struct FastPacedFPSGameCharacter_eventGetMesh1P_Parms
		{
			USkeletalMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFastPacedFPSGameCharacter_GetMesh1P_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFastPacedFPSGameCharacter_GetMesh1P_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastPacedFPSGameCharacter_eventGetMesh1P_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFastPacedFPSGameCharacter_GetMesh1P_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AFastPacedFPSGameCharacter_GetMesh1P_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFastPacedFPSGameCharacter_GetMesh1P_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFastPacedFPSGameCharacter_GetMesh1P_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFastPacedFPSGameCharacter_GetMesh1P_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns Mesh1P subobject **/" },
#endif
		{ "ModuleRelativePath", "FastPacedFPSGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns Mesh1P subobject *" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFastPacedFPSGameCharacter_GetMesh1P_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFastPacedFPSGameCharacter, nullptr, "GetMesh1P", nullptr, nullptr, Z_Construct_UFunction_AFastPacedFPSGameCharacter_GetMesh1P_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFastPacedFPSGameCharacter_GetMesh1P_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFastPacedFPSGameCharacter_GetMesh1P_Statics::FastPacedFPSGameCharacter_eventGetMesh1P_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFastPacedFPSGameCharacter_GetMesh1P_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFastPacedFPSGameCharacter_GetMesh1P_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFastPacedFPSGameCharacter_GetMesh1P_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFastPacedFPSGameCharacter_GetMesh1P_Statics::FastPacedFPSGameCharacter_eventGetMesh1P_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFastPacedFPSGameCharacter_GetMesh1P()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFastPacedFPSGameCharacter_GetMesh1P_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFastPacedFPSGameCharacter_LaunchPlayer_Statics
	{
		struct FastPacedFPSGameCharacter_eventLaunchPlayer_Parms
		{
			float Amount;
			FVector Direction;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFastPacedFPSGameCharacter_LaunchPlayer_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastPacedFPSGameCharacter_eventLaunchPlayer_Parms, Amount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFastPacedFPSGameCharacter_LaunchPlayer_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastPacedFPSGameCharacter_eventLaunchPlayer_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFastPacedFPSGameCharacter_LaunchPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFastPacedFPSGameCharacter_LaunchPlayer_Statics::NewProp_Amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFastPacedFPSGameCharacter_LaunchPlayer_Statics::NewProp_Direction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFastPacedFPSGameCharacter_LaunchPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FastPacedFPSGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFastPacedFPSGameCharacter_LaunchPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFastPacedFPSGameCharacter, nullptr, "LaunchPlayer", nullptr, nullptr, Z_Construct_UFunction_AFastPacedFPSGameCharacter_LaunchPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFastPacedFPSGameCharacter_LaunchPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFastPacedFPSGameCharacter_LaunchPlayer_Statics::FastPacedFPSGameCharacter_eventLaunchPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFastPacedFPSGameCharacter_LaunchPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFastPacedFPSGameCharacter_LaunchPlayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFastPacedFPSGameCharacter_LaunchPlayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFastPacedFPSGameCharacter_LaunchPlayer_Statics::FastPacedFPSGameCharacter_eventLaunchPlayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFastPacedFPSGameCharacter_LaunchPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFastPacedFPSGameCharacter_LaunchPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFastPacedFPSGameCharacter_MovementCoolDownManager_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFastPacedFPSGameCharacter_MovementCoolDownManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FastPacedFPSGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFastPacedFPSGameCharacter_MovementCoolDownManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFastPacedFPSGameCharacter, nullptr, "MovementCoolDownManager", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFastPacedFPSGameCharacter_MovementCoolDownManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFastPacedFPSGameCharacter_MovementCoolDownManager_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFastPacedFPSGameCharacter_MovementCoolDownManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFastPacedFPSGameCharacter_MovementCoolDownManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapBegin_Statics
	{
		struct FastPacedFPSGameCharacter_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastPacedFPSGameCharacter_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData), Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastPacedFPSGameCharacter_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastPacedFPSGameCharacter_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastPacedFPSGameCharacter_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((FastPacedFPSGameCharacter_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FastPacedFPSGameCharacter_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastPacedFPSGameCharacter_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapBegin_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FastPacedFPSGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFastPacedFPSGameCharacter, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapBegin_Statics::FastPacedFPSGameCharacter_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapBegin_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapBegin_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapBegin_Statics::FastPacedFPSGameCharacter_eventOnOverlapBegin_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapEnd_Statics
	{
		struct FastPacedFPSGameCharacter_eventOnOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapEnd_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastPacedFPSGameCharacter_eventOnOverlapEnd_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData), Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastPacedFPSGameCharacter_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastPacedFPSGameCharacter_eventOnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FastPacedFPSGameCharacter_eventOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapEnd_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapEnd_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapEnd_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapEnd_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FastPacedFPSGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFastPacedFPSGameCharacter, nullptr, "OnOverlapEnd", nullptr, nullptr, Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapEnd_Statics::FastPacedFPSGameCharacter_eventOnOverlapEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapEnd_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapEnd_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapEnd_Statics::FastPacedFPSGameCharacter_eventOnOverlapEnd_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFastPacedFPSGameCharacter);
	UClass* Z_Construct_UClass_AFastPacedFPSGameCharacter_NoRegister()
	{
		return AFastPacedFPSGameCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrappleAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GrappleAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DashAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DashAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlockAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasRifle_MetaData[];
#endif
		static void NewProp_bHasRifle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRifle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallRunSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_wallRunSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leanDirection_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_leanDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isWallRunning_MetaData[];
#endif
		static void NewProp_isWallRunning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isWallRunning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallJumpOffDir_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_wallJumpOffDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallJumpOffVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_wallJumpOffVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallRunVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_wallRunVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_grappleVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_grappleVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrappleActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GrappleActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_grappleSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_grappleSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isGrappling_MetaData[];
#endif
		static void NewProp_isGrappling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isGrappling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isAttacking_MetaData[];
#endif
		static void NewProp_isAttacking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isAttacking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attackCooldownTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_attackCooldownTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DashCooldownTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DashCooldownTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockCooldownTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlockCooldownTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dashLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_dashLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dashVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_dashVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dashSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_dashSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dashDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_dashDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanDash_MetaData[];
#endif
		static void NewProp_CanDash_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CanDash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isDashing_MetaData[];
#endif
		static void NewProp_isDashing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isDashing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanBlock_MetaData[];
#endif
		static void NewProp_CanBlock_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CanBlock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isBlocking_MetaData[];
#endif
		static void NewProp_isBlocking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isBlocking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockingTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlockingTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactNormal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FastPacedFPSGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFastPacedFPSGameCharacter_GetMesh1P, "GetMesh1P" }, // 624233238
		{ &Z_Construct_UFunction_AFastPacedFPSGameCharacter_LaunchPlayer, "LaunchPlayer" }, // 1495689748
		{ &Z_Construct_UFunction_AFastPacedFPSGameCharacter_MovementCoolDownManager, "MovementCoolDownManager" }, // 1033096562
		{ &Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapBegin, "OnOverlapBegin" }, // 3976475044
		{ &Z_Construct_UFunction_AFastPacedFPSGameCharacter_OnOverlapEnd, "OnOverlapEnd" }, // 3271075284
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FastPacedFPSGameCharacter.h" },
		{ "ModuleRelativePath", "FastPacedFPSGameCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FastPacedFPSGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFastPacedFPSGameCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_Mesh1P_MetaData), Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_Mesh1P_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** First person camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FastPacedFPSGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First person camera" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFastPacedFPSGameCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData), Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "FastPacedFPSGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFastPacedFPSGameCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_DefaultMappingContext_MetaData), Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_DefaultMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "FastPacedFPSGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFastPacedFPSGameCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_JumpAction_MetaData), Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_JumpAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "FastPacedFPSGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFastPacedFPSGameCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_AttackAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "FastPacedFPSGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_AttackAction = { "AttackAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFastPacedFPSGameCharacter, AttackAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_AttackAction_MetaData), Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_AttackAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "FastPacedFPSGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFastPacedFPSGameCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_LookAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_GrappleAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "FastPacedFPSGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_GrappleAction = { "GrappleAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFastPacedFPSGameCharacter, GrappleAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_GrappleAction_MetaData), Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_GrappleAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_DashAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "FastPacedFPSGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_DashAction = { "DashAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFastPacedFPSGameCharacter, DashAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_DashAction_MetaData), Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_DashAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_BlockAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "FastPacedFPSGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_BlockAction = { "BlockAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFastPacedFPSGameCharacter, BlockAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_BlockAction_MetaData), Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_BlockAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_bHasRifle_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Bool for AnimBP to switch to another animation set */" },
#endif
		{ "ModuleRelativePath", "FastPacedFPSGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bool for AnimBP to switch to another animation set" },
#endif
	};
#endif
	void Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_bHasRifle_SetBit(void* Obj)
	{
		((AFastPacedFPSGameCharacter*)Obj)->bHasRifle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_bHasRifle = { "bHasRifle", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFastPacedFPSGameCharacter), &Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_bHasRifle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_bHasRifle_MetaData), Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_bHasRifle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_wallRunSpeed_MetaData[] = {
		{ "Category", "FastPacedFPSGameCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*WALL RUNNING */" },
#endif
		{ "ModuleRelativePath", "FastPacedFPSGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WALL RUNNING" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_wallRunSpeed = { "wallRunSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFastPacedFPSGameCharacter, wallRunSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_wallRunSpeed_MetaData), Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_wallRunSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_leanDirection_MetaData[] = {
		{ "Category", "WallRunning" },
		{ "ModuleRelativePath", "FastPacedFPSGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_leanDirection = { "leanDirection", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFastPacedFPSGameCharacter, leanDirection), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_leanDirection_MetaData), Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_leanDirection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_isWallRunning_MetaData[] = {
		{ "Category", "WallRunning" },
		{ "ModuleRelativePath", "FastPacedFPSGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_isWallRunning_SetBit(void* Obj)
	{
		((AFastPacedFPSGameCharacter*)Obj)->isWallRunning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_isWallRunning = { "isWallRunning", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFastPacedFPSGameCharacter), &Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_isWallRunning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_isWallRunning_MetaData), Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_isWallRunning_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_wallJumpOffDir_MetaData[] = {
		{ "ModuleRelativePath", "FastPacedFPSGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_wallJumpOffDir = { "wallJumpOffDir", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFastPacedFPSGameCharacter, wallJumpOffDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_wallJumpOffDir_MetaData), Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_wallJumpOffDir_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_wallJumpOffVelocity_MetaData[] = {
		{ "Category", "WallRunning" },
		{ "ModuleRelativePath", "FastPacedFPSGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_wallJumpOffVelocity = { "wallJumpOffVelocity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFastPacedFPSGameCharacter, wallJumpOffVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_wallJumpOffVelocity_MetaData), Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_wallJumpOffVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_wallRunVelocity_MetaData[] = {
		{ "ModuleRelativePath", "FastPacedFPSGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_wallRunVelocity = { "wallRunVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFastPacedFPSGameCharacter, wallRunVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_wallRunVelocity_MetaData), Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_wallRunVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_grappleVelocity_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*GRAPPLING*/" },
#endif
		{ "ModuleRelativePath", "FastPacedFPSGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GRAPPLING" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_grappleVelocity = { "grappleVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFastPacedFPSGameCharacter, grappleVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_grappleVelocity_MetaData), Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_grappleVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_GrappleActor_MetaData[] = {
		{ "ModuleRelativePath", "FastPacedFPSGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_GrappleActor = { "GrappleActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFastPacedFPSGameCharacter, GrappleActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_GrappleActor_MetaData), Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_GrappleActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_grappleSpeed_MetaData[] = {
		{ "Category", "Grappling" },
		{ "ModuleRelativePath", "FastPacedFPSGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_grappleSpeed = { "grappleSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFastPacedFPSGameCharacter, grappleSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_grappleSpeed_MetaData), Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_grappleSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_isGrappling_MetaData[] = {
		{ "Category", "Grappling" },
		{ "ModuleRelativePath", "FastPacedFPSGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_isGrappling_SetBit(void* Obj)
	{
		((AFastPacedFPSGameCharacter*)Obj)->isGrappling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_isGrappling = { "isGrappling", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFastPacedFPSGameCharacter), &Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_isGrappling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_isGrappling_MetaData), Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_isGrappling_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_AttackDamage_MetaData[] = {
		{ "Category", "Attacking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*ATTACKING*/" },
#endif
		{ "ModuleRelativePath", "FastPacedFPSGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ATTACKING" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_AttackDamage = { "AttackDamage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFastPacedFPSGameCharacter, AttackDamage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_AttackDamage_MetaData), Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_AttackDamage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_isAttacking_MetaData[] = {
		{ "Category", "Attacking" },
		{ "ModuleRelativePath", "FastPacedFPSGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_isAttacking_SetBit(void* Obj)
	{
		((AFastPacedFPSGameCharacter*)Obj)->isAttacking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_isAttacking = { "isAttacking", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFastPacedFPSGameCharacter), &Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_isAttacking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_isAttacking_MetaData), Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_isAttacking_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_attackCooldownTime_MetaData[] = {
		{ "Category", "CoolDowns" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*TIMING*/" },
#endif
		{ "ModuleRelativePath", "FastPacedFPSGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TIMING" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_attackCooldownTime = { "attackCooldownTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFastPacedFPSGameCharacter, attackCooldownTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_attackCooldownTime_MetaData), Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_attackCooldownTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_DashCooldownTime_MetaData[] = {
		{ "Category", "CoolDowns" },
		{ "ModuleRelativePath", "FastPacedFPSGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_DashCooldownTime = { "DashCooldownTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFastPacedFPSGameCharacter, DashCooldownTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_DashCooldownTime_MetaData), Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_DashCooldownTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_BlockCooldownTime_MetaData[] = {
		{ "Category", "CoolDowns" },
		{ "ModuleRelativePath", "FastPacedFPSGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_BlockCooldownTime = { "BlockCooldownTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFastPacedFPSGameCharacter, BlockCooldownTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_BlockCooldownTime_MetaData), Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_BlockCooldownTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_dashLocation_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*DASHING*/" },
#endif
		{ "ModuleRelativePath", "FastPacedFPSGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DASHING" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_dashLocation = { "dashLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFastPacedFPSGameCharacter, dashLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_dashLocation_MetaData), Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_dashLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_dashVelocity_MetaData[] = {
		{ "ModuleRelativePath", "FastPacedFPSGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_dashVelocity = { "dashVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFastPacedFPSGameCharacter, dashVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_dashVelocity_MetaData), Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_dashVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_dashSpeed_MetaData[] = {
		{ "Category", "Dashing" },
		{ "ModuleRelativePath", "FastPacedFPSGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_dashSpeed = { "dashSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFastPacedFPSGameCharacter, dashSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_dashSpeed_MetaData), Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_dashSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_dashDistance_MetaData[] = {
		{ "Category", "Dashing" },
		{ "ModuleRelativePath", "FastPacedFPSGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_dashDistance = { "dashDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFastPacedFPSGameCharacter, dashDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_dashDistance_MetaData), Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_dashDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_CanDash_MetaData[] = {
		{ "ModuleRelativePath", "FastPacedFPSGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_CanDash_SetBit(void* Obj)
	{
		((AFastPacedFPSGameCharacter*)Obj)->CanDash = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_CanDash = { "CanDash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFastPacedFPSGameCharacter), &Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_CanDash_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_CanDash_MetaData), Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_CanDash_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_isDashing_MetaData[] = {
		{ "Category", "Dashing" },
		{ "ModuleRelativePath", "FastPacedFPSGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_isDashing_SetBit(void* Obj)
	{
		((AFastPacedFPSGameCharacter*)Obj)->isDashing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_isDashing = { "isDashing", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFastPacedFPSGameCharacter), &Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_isDashing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_isDashing_MetaData), Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_isDashing_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_CanBlock_MetaData[] = {
		{ "Category", "Blocking" },
		{ "ModuleRelativePath", "FastPacedFPSGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_CanBlock_SetBit(void* Obj)
	{
		((AFastPacedFPSGameCharacter*)Obj)->CanBlock = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_CanBlock = { "CanBlock", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFastPacedFPSGameCharacter), &Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_CanBlock_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_CanBlock_MetaData), Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_CanBlock_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_isBlocking_MetaData[] = {
		{ "Category", "Blocking" },
		{ "ModuleRelativePath", "FastPacedFPSGameCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_isBlocking_SetBit(void* Obj)
	{
		((AFastPacedFPSGameCharacter*)Obj)->isBlocking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_isBlocking = { "isBlocking", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFastPacedFPSGameCharacter), &Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_isBlocking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_isBlocking_MetaData), Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_isBlocking_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_BlockingTime_MetaData[] = {
		{ "Category", "Blocking" },
		{ "ModuleRelativePath", "FastPacedFPSGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_BlockingTime = { "BlockingTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFastPacedFPSGameCharacter, BlockingTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_BlockingTime_MetaData), Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_BlockingTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_ImpactNormal_MetaData[] = {
		{ "ModuleRelativePath", "FastPacedFPSGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_ImpactNormal = { "ImpactNormal", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFastPacedFPSGameCharacter, ImpactNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_ImpactNormal_MetaData), Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_ImpactNormal_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_Mesh1P,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_AttackAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_GrappleAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_DashAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_BlockAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_bHasRifle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_wallRunSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_leanDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_isWallRunning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_wallJumpOffDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_wallJumpOffVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_wallRunVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_grappleVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_GrappleActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_grappleSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_isGrappling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_AttackDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_isAttacking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_attackCooldownTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_DashCooldownTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_BlockCooldownTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_dashLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_dashVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_dashSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_dashDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_CanDash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_isDashing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_CanBlock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_isBlocking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_BlockingTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::NewProp_ImpactNormal,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFastPacedFPSGameCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::ClassParams = {
		&AFastPacedFPSGameCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFastPacedFPSGameCharacter()
	{
		if (!Z_Registration_Info_UClass_AFastPacedFPSGameCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFastPacedFPSGameCharacter.OuterSingleton, Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFastPacedFPSGameCharacter.OuterSingleton;
	}
	template<> FASTPACEDFPSGAME_API UClass* StaticClass<AFastPacedFPSGameCharacter>()
	{
		return AFastPacedFPSGameCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFastPacedFPSGameCharacter);
	AFastPacedFPSGameCharacter::~AFastPacedFPSGameCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_yuisa_OneDrive_Documents_Unreal_Projects_FastPacedFPSGame_Source_FastPacedFPSGame_FastPacedFPSGameCharacter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yuisa_OneDrive_Documents_Unreal_Projects_FastPacedFPSGame_Source_FastPacedFPSGame_FastPacedFPSGameCharacter_h_Statics::EnumInfo[] = {
		{ State_StaticEnum, TEXT("State"), &Z_Registration_Info_UEnum_State, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 109136486U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yuisa_OneDrive_Documents_Unreal_Projects_FastPacedFPSGame_Source_FastPacedFPSGame_FastPacedFPSGameCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFastPacedFPSGameCharacter, AFastPacedFPSGameCharacter::StaticClass, TEXT("AFastPacedFPSGameCharacter"), &Z_Registration_Info_UClass_AFastPacedFPSGameCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFastPacedFPSGameCharacter), 1359305992U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yuisa_OneDrive_Documents_Unreal_Projects_FastPacedFPSGame_Source_FastPacedFPSGame_FastPacedFPSGameCharacter_h_200663431(TEXT("/Script/FastPacedFPSGame"),
		Z_CompiledInDeferFile_FID_Users_yuisa_OneDrive_Documents_Unreal_Projects_FastPacedFPSGame_Source_FastPacedFPSGame_FastPacedFPSGameCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_yuisa_OneDrive_Documents_Unreal_Projects_FastPacedFPSGame_Source_FastPacedFPSGame_FastPacedFPSGameCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_yuisa_OneDrive_Documents_Unreal_Projects_FastPacedFPSGame_Source_FastPacedFPSGame_FastPacedFPSGameCharacter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_yuisa_OneDrive_Documents_Unreal_Projects_FastPacedFPSGame_Source_FastPacedFPSGame_FastPacedFPSGameCharacter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
