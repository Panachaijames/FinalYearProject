// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FINALPROJECT_CharacterMovement_generated_h
#error "CharacterMovement.generated.h already included, missing '#pragma once' in CharacterMovement.h"
#endif
#define FINALPROJECT_CharacterMovement_generated_h

#define FinalProject_Source_FinalProject_CharacterMovement_h_12_SPARSE_DATA
#define FinalProject_Source_FinalProject_CharacterMovement_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCrosshairSpreadMultiplier);


#define FinalProject_Source_FinalProject_CharacterMovement_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCrosshairSpreadMultiplier);


#define FinalProject_Source_FinalProject_CharacterMovement_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacterMovement(); \
	friend struct Z_Construct_UClass_ACharacterMovement_Statics; \
public: \
	DECLARE_CLASS(ACharacterMovement, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FinalProject"), NO_API) \
	DECLARE_SERIALIZER(ACharacterMovement)


#define FinalProject_Source_FinalProject_CharacterMovement_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACharacterMovement(); \
	friend struct Z_Construct_UClass_ACharacterMovement_Statics; \
public: \
	DECLARE_CLASS(ACharacterMovement, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FinalProject"), NO_API) \
	DECLARE_SERIALIZER(ACharacterMovement)


#define FinalProject_Source_FinalProject_CharacterMovement_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACharacterMovement(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACharacterMovement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterMovement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterMovement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterMovement(ACharacterMovement&&); \
	NO_API ACharacterMovement(const ACharacterMovement&); \
public:


#define FinalProject_Source_FinalProject_CharacterMovement_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterMovement(ACharacterMovement&&); \
	NO_API ACharacterMovement(const ACharacterMovement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterMovement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterMovement); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACharacterMovement)


#define FinalProject_Source_FinalProject_CharacterMovement_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ACharacterMovement, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ACharacterMovement, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__BaseTurnRate() { return STRUCT_OFFSET(ACharacterMovement, BaseTurnRate); } \
	FORCEINLINE static uint32 __PPO__BaseLookUpRate() { return STRUCT_OFFSET(ACharacterMovement, BaseLookUpRate); } \
	FORCEINLINE static uint32 __PPO__HipTurnRate() { return STRUCT_OFFSET(ACharacterMovement, HipTurnRate); } \
	FORCEINLINE static uint32 __PPO__HipLookUpRate() { return STRUCT_OFFSET(ACharacterMovement, HipLookUpRate); } \
	FORCEINLINE static uint32 __PPO__AimingTurnRate() { return STRUCT_OFFSET(ACharacterMovement, AimingTurnRate); } \
	FORCEINLINE static uint32 __PPO__AimingLookUpRate() { return STRUCT_OFFSET(ACharacterMovement, AimingLookUpRate); } \
	FORCEINLINE static uint32 __PPO__MouseHipTurnRate() { return STRUCT_OFFSET(ACharacterMovement, MouseHipTurnRate); } \
	FORCEINLINE static uint32 __PPO__MouseHipLookUpRate() { return STRUCT_OFFSET(ACharacterMovement, MouseHipLookUpRate); } \
	FORCEINLINE static uint32 __PPO__MouseAimingTurnRate() { return STRUCT_OFFSET(ACharacterMovement, MouseAimingTurnRate); } \
	FORCEINLINE static uint32 __PPO__MouseAimingLookUpRate() { return STRUCT_OFFSET(ACharacterMovement, MouseAimingLookUpRate); } \
	FORCEINLINE static uint32 __PPO__FireSound() { return STRUCT_OFFSET(ACharacterMovement, FireSound); } \
	FORCEINLINE static uint32 __PPO__MuzzleFlash() { return STRUCT_OFFSET(ACharacterMovement, MuzzleFlash); } \
	FORCEINLINE static uint32 __PPO__HipFireMontage() { return STRUCT_OFFSET(ACharacterMovement, HipFireMontage); } \
	FORCEINLINE static uint32 __PPO__ImpactParticles() { return STRUCT_OFFSET(ACharacterMovement, ImpactParticles); } \
	FORCEINLINE static uint32 __PPO__BeamParticles() { return STRUCT_OFFSET(ACharacterMovement, BeamParticles); } \
	FORCEINLINE static uint32 __PPO__bAiming() { return STRUCT_OFFSET(ACharacterMovement, bAiming); } \
	FORCEINLINE static uint32 __PPO__ZoomInterSpeed() { return STRUCT_OFFSET(ACharacterMovement, ZoomInterSpeed); } \
	FORCEINLINE static uint32 __PPO__CrosshairSpreadMultiplier() { return STRUCT_OFFSET(ACharacterMovement, CrosshairSpreadMultiplier); } \
	FORCEINLINE static uint32 __PPO__CrosshairVelocityFactor() { return STRUCT_OFFSET(ACharacterMovement, CrosshairVelocityFactor); } \
	FORCEINLINE static uint32 __PPO__CrosshairInAirFactor() { return STRUCT_OFFSET(ACharacterMovement, CrosshairInAirFactor); } \
	FORCEINLINE static uint32 __PPO__CrosshairAimFactor() { return STRUCT_OFFSET(ACharacterMovement, CrosshairAimFactor); } \
	FORCEINLINE static uint32 __PPO__CrosshairShootingFactor() { return STRUCT_OFFSET(ACharacterMovement, CrosshairShootingFactor); }


#define FinalProject_Source_FinalProject_CharacterMovement_h_9_PROLOG
#define FinalProject_Source_FinalProject_CharacterMovement_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FinalProject_Source_FinalProject_CharacterMovement_h_12_PRIVATE_PROPERTY_OFFSET \
	FinalProject_Source_FinalProject_CharacterMovement_h_12_SPARSE_DATA \
	FinalProject_Source_FinalProject_CharacterMovement_h_12_RPC_WRAPPERS \
	FinalProject_Source_FinalProject_CharacterMovement_h_12_INCLASS \
	FinalProject_Source_FinalProject_CharacterMovement_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FinalProject_Source_FinalProject_CharacterMovement_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FinalProject_Source_FinalProject_CharacterMovement_h_12_PRIVATE_PROPERTY_OFFSET \
	FinalProject_Source_FinalProject_CharacterMovement_h_12_SPARSE_DATA \
	FinalProject_Source_FinalProject_CharacterMovement_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FinalProject_Source_FinalProject_CharacterMovement_h_12_INCLASS_NO_PURE_DECLS \
	FinalProject_Source_FinalProject_CharacterMovement_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINALPROJECT_API UClass* StaticClass<class ACharacterMovement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FinalProject_Source_FinalProject_CharacterMovement_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
