// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FINALPROJECT_FinalProjectCharacter_generated_h
#error "FinalProjectCharacter.generated.h already included, missing '#pragma once' in FinalProjectCharacter.h"
#endif
#define FINALPROJECT_FinalProjectCharacter_generated_h

#define FinalProject_Source_FinalProject_FinalProjectCharacter_h_20_SPARSE_DATA
#define FinalProject_Source_FinalProject_FinalProjectCharacter_h_20_RPC_WRAPPERS
#define FinalProject_Source_FinalProject_FinalProjectCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define FinalProject_Source_FinalProject_FinalProjectCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFinalProjectCharacter(); \
	friend struct Z_Construct_UClass_AFinalProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AFinalProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FinalProject"), NO_API) \
	DECLARE_SERIALIZER(AFinalProjectCharacter)


#define FinalProject_Source_FinalProject_FinalProjectCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAFinalProjectCharacter(); \
	friend struct Z_Construct_UClass_AFinalProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AFinalProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FinalProject"), NO_API) \
	DECLARE_SERIALIZER(AFinalProjectCharacter)


#define FinalProject_Source_FinalProject_FinalProjectCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFinalProjectCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFinalProjectCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFinalProjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFinalProjectCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFinalProjectCharacter(AFinalProjectCharacter&&); \
	NO_API AFinalProjectCharacter(const AFinalProjectCharacter&); \
public:


#define FinalProject_Source_FinalProject_FinalProjectCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFinalProjectCharacter(AFinalProjectCharacter&&); \
	NO_API AFinalProjectCharacter(const AFinalProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFinalProjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFinalProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFinalProjectCharacter)


#define FinalProject_Source_FinalProject_FinalProjectCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AFinalProjectCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AFinalProjectCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AFinalProjectCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AFinalProjectCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AFinalProjectCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AFinalProjectCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AFinalProjectCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AFinalProjectCharacter, L_MotionController); }


#define FinalProject_Source_FinalProject_FinalProjectCharacter_h_17_PROLOG
#define FinalProject_Source_FinalProject_FinalProjectCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FinalProject_Source_FinalProject_FinalProjectCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FinalProject_Source_FinalProject_FinalProjectCharacter_h_20_SPARSE_DATA \
	FinalProject_Source_FinalProject_FinalProjectCharacter_h_20_RPC_WRAPPERS \
	FinalProject_Source_FinalProject_FinalProjectCharacter_h_20_INCLASS \
	FinalProject_Source_FinalProject_FinalProjectCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FinalProject_Source_FinalProject_FinalProjectCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FinalProject_Source_FinalProject_FinalProjectCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FinalProject_Source_FinalProject_FinalProjectCharacter_h_20_SPARSE_DATA \
	FinalProject_Source_FinalProject_FinalProjectCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FinalProject_Source_FinalProject_FinalProjectCharacter_h_20_INCLASS_NO_PURE_DECLS \
	FinalProject_Source_FinalProject_FinalProjectCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINALPROJECT_API UClass* StaticClass<class AFinalProjectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FinalProject_Source_FinalProject_FinalProjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
