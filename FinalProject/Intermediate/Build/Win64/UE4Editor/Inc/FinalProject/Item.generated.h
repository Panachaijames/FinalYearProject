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
struct FHitResult;
#ifdef FINALPROJECT_Item_generated_h
#error "Item.generated.h already included, missing '#pragma once' in Item.h"
#endif
#define FINALPROJECT_Item_generated_h

#define FinalProject_Source_FinalProject_Item_h_12_SPARSE_DATA
#define FinalProject_Source_FinalProject_Item_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSphereEndOverlap); \
	DECLARE_FUNCTION(execOnSphereOverlap);


#define FinalProject_Source_FinalProject_Item_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSphereEndOverlap); \
	DECLARE_FUNCTION(execOnSphereOverlap);


#define FinalProject_Source_FinalProject_Item_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
public: \
	DECLARE_CLASS(AItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FinalProject"), NO_API) \
	DECLARE_SERIALIZER(AItem)


#define FinalProject_Source_FinalProject_Item_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
public: \
	DECLARE_CLASS(AItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FinalProject"), NO_API) \
	DECLARE_SERIALIZER(AItem)


#define FinalProject_Source_FinalProject_Item_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public:


#define FinalProject_Source_FinalProject_Item_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItem)


#define FinalProject_Source_FinalProject_Item_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ItemMesh() { return STRUCT_OFFSET(AItem, ItemMesh); } \
	FORCEINLINE static uint32 __PPO__CollisionBox() { return STRUCT_OFFSET(AItem, CollisionBox); } \
	FORCEINLINE static uint32 __PPO__PickupWidget() { return STRUCT_OFFSET(AItem, PickupWidget); } \
	FORCEINLINE static uint32 __PPO__AreaSphere() { return STRUCT_OFFSET(AItem, AreaSphere); }


#define FinalProject_Source_FinalProject_Item_h_9_PROLOG
#define FinalProject_Source_FinalProject_Item_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FinalProject_Source_FinalProject_Item_h_12_PRIVATE_PROPERTY_OFFSET \
	FinalProject_Source_FinalProject_Item_h_12_SPARSE_DATA \
	FinalProject_Source_FinalProject_Item_h_12_RPC_WRAPPERS \
	FinalProject_Source_FinalProject_Item_h_12_INCLASS \
	FinalProject_Source_FinalProject_Item_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FinalProject_Source_FinalProject_Item_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FinalProject_Source_FinalProject_Item_h_12_PRIVATE_PROPERTY_OFFSET \
	FinalProject_Source_FinalProject_Item_h_12_SPARSE_DATA \
	FinalProject_Source_FinalProject_Item_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FinalProject_Source_FinalProject_Item_h_12_INCLASS_NO_PURE_DECLS \
	FinalProject_Source_FinalProject_Item_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINALPROJECT_API UClass* StaticClass<class AItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FinalProject_Source_FinalProject_Item_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
