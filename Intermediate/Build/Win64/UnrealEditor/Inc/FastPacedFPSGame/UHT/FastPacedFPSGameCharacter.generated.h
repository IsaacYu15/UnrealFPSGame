// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FastPacedFPSGameCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
class USkeletalMeshComponent;
struct FHitResult;
#ifdef FASTPACEDFPSGAME_FastPacedFPSGameCharacter_generated_h
#error "FastPacedFPSGameCharacter.generated.h already included, missing '#pragma once' in FastPacedFPSGameCharacter.h"
#endif
#define FASTPACEDFPSGAME_FastPacedFPSGameCharacter_generated_h

#define FID_Users_yuisa_OneDrive_Documents_Unreal_Projects_FastPacedFPSGame_Source_FastPacedFPSGame_FastPacedFPSGameCharacter_h_34_SPARSE_DATA
#define FID_Users_yuisa_OneDrive_Documents_Unreal_Projects_FastPacedFPSGame_Source_FastPacedFPSGame_FastPacedFPSGameCharacter_h_34_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_yuisa_OneDrive_Documents_Unreal_Projects_FastPacedFPSGame_Source_FastPacedFPSGame_FastPacedFPSGameCharacter_h_34_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_yuisa_OneDrive_Documents_Unreal_Projects_FastPacedFPSGame_Source_FastPacedFPSGame_FastPacedFPSGameCharacter_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLaunchPlayer); \
	DECLARE_FUNCTION(execMovementCoolDownManager); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execGetMesh1P);


#define FID_Users_yuisa_OneDrive_Documents_Unreal_Projects_FastPacedFPSGame_Source_FastPacedFPSGame_FastPacedFPSGameCharacter_h_34_ACCESSORS
#define FID_Users_yuisa_OneDrive_Documents_Unreal_Projects_FastPacedFPSGame_Source_FastPacedFPSGame_FastPacedFPSGameCharacter_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFastPacedFPSGameCharacter(); \
	friend struct Z_Construct_UClass_AFastPacedFPSGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AFastPacedFPSGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FastPacedFPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFastPacedFPSGameCharacter)


#define FID_Users_yuisa_OneDrive_Documents_Unreal_Projects_FastPacedFPSGame_Source_FastPacedFPSGame_FastPacedFPSGameCharacter_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFastPacedFPSGameCharacter(AFastPacedFPSGameCharacter&&); \
	NO_API AFastPacedFPSGameCharacter(const AFastPacedFPSGameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFastPacedFPSGameCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFastPacedFPSGameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFastPacedFPSGameCharacter) \
	NO_API virtual ~AFastPacedFPSGameCharacter();


#define FID_Users_yuisa_OneDrive_Documents_Unreal_Projects_FastPacedFPSGame_Source_FastPacedFPSGame_FastPacedFPSGameCharacter_h_30_PROLOG
#define FID_Users_yuisa_OneDrive_Documents_Unreal_Projects_FastPacedFPSGame_Source_FastPacedFPSGame_FastPacedFPSGameCharacter_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_yuisa_OneDrive_Documents_Unreal_Projects_FastPacedFPSGame_Source_FastPacedFPSGame_FastPacedFPSGameCharacter_h_34_SPARSE_DATA \
	FID_Users_yuisa_OneDrive_Documents_Unreal_Projects_FastPacedFPSGame_Source_FastPacedFPSGame_FastPacedFPSGameCharacter_h_34_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_yuisa_OneDrive_Documents_Unreal_Projects_FastPacedFPSGame_Source_FastPacedFPSGame_FastPacedFPSGameCharacter_h_34_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_yuisa_OneDrive_Documents_Unreal_Projects_FastPacedFPSGame_Source_FastPacedFPSGame_FastPacedFPSGameCharacter_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_yuisa_OneDrive_Documents_Unreal_Projects_FastPacedFPSGame_Source_FastPacedFPSGame_FastPacedFPSGameCharacter_h_34_ACCESSORS \
	FID_Users_yuisa_OneDrive_Documents_Unreal_Projects_FastPacedFPSGame_Source_FastPacedFPSGame_FastPacedFPSGameCharacter_h_34_INCLASS_NO_PURE_DECLS \
	FID_Users_yuisa_OneDrive_Documents_Unreal_Projects_FastPacedFPSGame_Source_FastPacedFPSGame_FastPacedFPSGameCharacter_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FASTPACEDFPSGAME_API UClass* StaticClass<class AFastPacedFPSGameCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_yuisa_OneDrive_Documents_Unreal_Projects_FastPacedFPSGame_Source_FastPacedFPSGame_FastPacedFPSGameCharacter_h


#define FOREACH_ENUM_STATE(op) \
	op(State::None) \
	op(State::Dashing) \
	op(State::Attacking) \
	op(State::Grappling) \
	op(State::WallRunning) \
	op(State::Blocking) 

enum class State : uint8;
template<> struct TIsUEnumClass<State> { enum { Value = true }; };
template<> FASTPACEDFPSGAME_API UEnum* StaticEnum<State>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
