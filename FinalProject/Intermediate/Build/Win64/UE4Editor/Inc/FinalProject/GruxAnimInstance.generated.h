// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FINALPROJECT_GruxAnimInstance_generated_h
#error "GruxAnimInstance.generated.h already included, missing '#pragma once' in GruxAnimInstance.h"
#endif
#define FINALPROJECT_GruxAnimInstance_generated_h

#define FinalProject_Source_FinalProject_GruxAnimInstance_h_15_SPARSE_DATA
#define FinalProject_Source_FinalProject_GruxAnimInstance_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateAnimationProperties);


#define FinalProject_Source_FinalProject_GruxAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateAnimationProperties);


#define FinalProject_Source_FinalProject_GruxAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGruxAnimInstance(); \
	friend struct Z_Construct_UClass_UGruxAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UGruxAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/FinalProject"), NO_API) \
	DECLARE_SERIALIZER(UGruxAnimInstance)


#define FinalProject_Source_FinalProject_GruxAnimInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUGruxAnimInstance(); \
	friend struct Z_Construct_UClass_UGruxAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UGruxAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/FinalProject"), NO_API) \
	DECLARE_SERIALIZER(UGruxAnimInstance)


#define FinalProject_Source_FinalProject_GruxAnimInstance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGruxAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGruxAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGruxAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGruxAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGruxAnimInstance(UGruxAnimInstance&&); \
	NO_API UGruxAnimInstance(const UGruxAnimInstance&); \
public:


#define FinalProject_Source_FinalProject_GruxAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGruxAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGruxAnimInstance(UGruxAnimInstance&&); \
	NO_API UGruxAnimInstance(const UGruxAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGruxAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGruxAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGruxAnimInstance)


#define FinalProject_Source_FinalProject_GruxAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Speed() { return STRUCT_OFFSET(UGruxAnimInstance, Speed); } \
	FORCEINLINE static uint32 __PPO__Enemy() { return STRUCT_OFFSET(UGruxAnimInstance, Enemy); }


#define FinalProject_Source_FinalProject_GruxAnimInstance_h_12_PROLOG
#define FinalProject_Source_FinalProject_GruxAnimInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FinalProject_Source_FinalProject_GruxAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	FinalProject_Source_FinalProject_GruxAnimInstance_h_15_SPARSE_DATA \
	FinalProject_Source_FinalProject_GruxAnimInstance_h_15_RPC_WRAPPERS \
	FinalProject_Source_FinalProject_GruxAnimInstance_h_15_INCLASS \
	FinalProject_Source_FinalProject_GruxAnimInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FinalProject_Source_FinalProject_GruxAnimInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FinalProject_Source_FinalProject_GruxAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	FinalProject_Source_FinalProject_GruxAnimInstance_h_15_SPARSE_DATA \
	FinalProject_Source_FinalProject_GruxAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FinalProject_Source_FinalProject_GruxAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
	FinalProject_Source_FinalProject_GruxAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINALPROJECT_API UClass* StaticClass<class UGruxAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FinalProject_Source_FinalProject_GruxAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
