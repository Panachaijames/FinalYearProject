// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef FINALPROJECT_FinalProjectProjectile_generated_h
#error "FinalProjectProjectile.generated.h already included, missing '#pragma once' in FinalProjectProjectile.h"
#endif
#define FINALPROJECT_FinalProjectProjectile_generated_h

#define FinalProject_Source_FinalProject_FinalProjectProjectile_h_15_SPARSE_DATA
#define FinalProject_Source_FinalProject_FinalProjectProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FinalProject_Source_FinalProject_FinalProjectProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FinalProject_Source_FinalProject_FinalProjectProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFinalProjectProjectile(); \
	friend struct Z_Construct_UClass_AFinalProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(AFinalProjectProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FinalProject"), NO_API) \
	DECLARE_SERIALIZER(AFinalProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FinalProject_Source_FinalProject_FinalProjectProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFinalProjectProjectile(); \
	friend struct Z_Construct_UClass_AFinalProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(AFinalProjectProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FinalProject"), NO_API) \
	DECLARE_SERIALIZER(AFinalProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FinalProject_Source_FinalProject_FinalProjectProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFinalProjectProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFinalProjectProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFinalProjectProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFinalProjectProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFinalProjectProjectile(AFinalProjectProjectile&&); \
	NO_API AFinalProjectProjectile(const AFinalProjectProjectile&); \
public:


#define FinalProject_Source_FinalProject_FinalProjectProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFinalProjectProjectile(AFinalProjectProjectile&&); \
	NO_API AFinalProjectProjectile(const AFinalProjectProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFinalProjectProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFinalProjectProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFinalProjectProjectile)


#define FinalProject_Source_FinalProject_FinalProjectProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AFinalProjectProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AFinalProjectProjectile, ProjectileMovement); }


#define FinalProject_Source_FinalProject_FinalProjectProjectile_h_12_PROLOG
#define FinalProject_Source_FinalProject_FinalProjectProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FinalProject_Source_FinalProject_FinalProjectProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FinalProject_Source_FinalProject_FinalProjectProjectile_h_15_SPARSE_DATA \
	FinalProject_Source_FinalProject_FinalProjectProjectile_h_15_RPC_WRAPPERS \
	FinalProject_Source_FinalProject_FinalProjectProjectile_h_15_INCLASS \
	FinalProject_Source_FinalProject_FinalProjectProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FinalProject_Source_FinalProject_FinalProjectProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FinalProject_Source_FinalProject_FinalProjectProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FinalProject_Source_FinalProject_FinalProjectProjectile_h_15_SPARSE_DATA \
	FinalProject_Source_FinalProject_FinalProjectProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FinalProject_Source_FinalProject_FinalProjectProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FinalProject_Source_FinalProject_FinalProjectProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINALPROJECT_API UClass* StaticClass<class AFinalProjectProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FinalProject_Source_FinalProject_FinalProjectProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
