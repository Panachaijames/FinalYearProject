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

#define FinalProject_Source_FinalProject_CharacterMovement_h_19_SPARSE_DATA
#define FinalProject_Source_FinalProject_CharacterMovement_h_19_RPC_WRAPPERS
#define FinalProject_Source_FinalProject_CharacterMovement_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define FinalProject_Source_FinalProject_CharacterMovement_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacterMovement(); \
	friend struct Z_Construct_UClass_ACharacterMovement_Statics; \
public: \
	DECLARE_CLASS(ACharacterMovement, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FinalProject"), NO_API) \
	DECLARE_SERIALIZER(ACharacterMovement)


#define FinalProject_Source_FinalProject_CharacterMovement_h_19_INCLASS \
private: \
	static void StaticRegisterNativesACharacterMovement(); \
	friend struct Z_Construct_UClass_ACharacterMovement_Statics; \
public: \
	DECLARE_CLASS(ACharacterMovement, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FinalProject"), NO_API) \
	DECLARE_SERIALIZER(ACharacterMovement)


#define FinalProject_Source_FinalProject_CharacterMovement_h_19_STANDARD_CONSTRUCTORS \
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


#define FinalProject_Source_FinalProject_CharacterMovement_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterMovement(ACharacterMovement&&); \
	NO_API ACharacterMovement(const ACharacterMovement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterMovement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterMovement); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACharacterMovement)


#define FinalProject_Source_FinalProject_CharacterMovement_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FireSound() { return STRUCT_OFFSET(ACharacterMovement, FireSound); } \
	FORCEINLINE static uint32 __PPO__MuzzleFlash() { return STRUCT_OFFSET(ACharacterMovement, MuzzleFlash); } \
	FORCEINLINE static uint32 __PPO__HipFireMontage() { return STRUCT_OFFSET(ACharacterMovement, HipFireMontage); }


#define FinalProject_Source_FinalProject_CharacterMovement_h_16_PROLOG
#define FinalProject_Source_FinalProject_CharacterMovement_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FinalProject_Source_FinalProject_CharacterMovement_h_19_PRIVATE_PROPERTY_OFFSET \
	FinalProject_Source_FinalProject_CharacterMovement_h_19_SPARSE_DATA \
	FinalProject_Source_FinalProject_CharacterMovement_h_19_RPC_WRAPPERS \
	FinalProject_Source_FinalProject_CharacterMovement_h_19_INCLASS \
	FinalProject_Source_FinalProject_CharacterMovement_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FinalProject_Source_FinalProject_CharacterMovement_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FinalProject_Source_FinalProject_CharacterMovement_h_19_PRIVATE_PROPERTY_OFFSET \
	FinalProject_Source_FinalProject_CharacterMovement_h_19_SPARSE_DATA \
	FinalProject_Source_FinalProject_CharacterMovement_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FinalProject_Source_FinalProject_CharacterMovement_h_19_INCLASS_NO_PURE_DECLS \
	FinalProject_Source_FinalProject_CharacterMovement_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINALPROJECT_API UClass* StaticClass<class ACharacterMovement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FinalProject_Source_FinalProject_CharacterMovement_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
