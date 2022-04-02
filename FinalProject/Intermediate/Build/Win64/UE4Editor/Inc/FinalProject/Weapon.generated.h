// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FINALPROJECT_Weapon_generated_h
#error "Weapon.generated.h already included, missing '#pragma once' in Weapon.h"
#endif
#define FINALPROJECT_Weapon_generated_h

#define FinalProject_Source_FinalProject_Weapon_h_15_SPARSE_DATA
#define FinalProject_Source_FinalProject_Weapon_h_15_RPC_WRAPPERS
#define FinalProject_Source_FinalProject_Weapon_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FinalProject_Source_FinalProject_Weapon_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FinalProject"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define FinalProject_Source_FinalProject_Weapon_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FinalProject"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define FinalProject_Source_FinalProject_Weapon_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public:


#define FinalProject_Source_FinalProject_Weapon_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon)


#define FinalProject_Source_FinalProject_Weapon_h_15_PRIVATE_PROPERTY_OFFSET
#define FinalProject_Source_FinalProject_Weapon_h_12_PROLOG
#define FinalProject_Source_FinalProject_Weapon_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FinalProject_Source_FinalProject_Weapon_h_15_PRIVATE_PROPERTY_OFFSET \
	FinalProject_Source_FinalProject_Weapon_h_15_SPARSE_DATA \
	FinalProject_Source_FinalProject_Weapon_h_15_RPC_WRAPPERS \
	FinalProject_Source_FinalProject_Weapon_h_15_INCLASS \
	FinalProject_Source_FinalProject_Weapon_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FinalProject_Source_FinalProject_Weapon_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FinalProject_Source_FinalProject_Weapon_h_15_PRIVATE_PROPERTY_OFFSET \
	FinalProject_Source_FinalProject_Weapon_h_15_SPARSE_DATA \
	FinalProject_Source_FinalProject_Weapon_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FinalProject_Source_FinalProject_Weapon_h_15_INCLASS_NO_PURE_DECLS \
	FinalProject_Source_FinalProject_Weapon_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINALPROJECT_API UClass* StaticClass<class AWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FinalProject_Source_FinalProject_Weapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
