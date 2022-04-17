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
class UUserWidget;
struct FVector;
#ifdef FINALPROJECT_Enemy_generated_h
#error "Enemy.generated.h already included, missing '#pragma once' in Enemy.h"
#endif
#define FINALPROJECT_Enemy_generated_h

#define FinalProject_Source_FinalProject_Enemy_h_13_SPARSE_DATA
#define FinalProject_Source_FinalProject_Enemy_h_13_RPC_WRAPPERS \
	virtual void ShowHealthBar_Implementation(); \
 \
	DECLARE_FUNCTION(execFinishDeath); \
	DECLARE_FUNCTION(execDeactivateRightWeapon); \
	DECLARE_FUNCTION(execActivateRightWeapon); \
	DECLARE_FUNCTION(execDeactivateLeftWeapon); \
	DECLARE_FUNCTION(execActivateLeftWeapon); \
	DECLARE_FUNCTION(execOnRightWeaponOverlap); \
	DECLARE_FUNCTION(execOnLeftWeaponOverlap); \
	DECLARE_FUNCTION(execGetAttackSectionName); \
	DECLARE_FUNCTION(execPlayAttackMontage); \
	DECLARE_FUNCTION(execCombatRangeEndOverlap); \
	DECLARE_FUNCTION(execCombatRangeOverlap); \
	DECLARE_FUNCTION(execSetStunned); \
	DECLARE_FUNCTION(execAggroSphereOverlap); \
	DECLARE_FUNCTION(execDestroyHitNumber); \
	DECLARE_FUNCTION(execStoreHitNumber); \
	DECLARE_FUNCTION(execShowHealthBar);


#define FinalProject_Source_FinalProject_Enemy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFinishDeath); \
	DECLARE_FUNCTION(execDeactivateRightWeapon); \
	DECLARE_FUNCTION(execActivateRightWeapon); \
	DECLARE_FUNCTION(execDeactivateLeftWeapon); \
	DECLARE_FUNCTION(execActivateLeftWeapon); \
	DECLARE_FUNCTION(execOnRightWeaponOverlap); \
	DECLARE_FUNCTION(execOnLeftWeaponOverlap); \
	DECLARE_FUNCTION(execGetAttackSectionName); \
	DECLARE_FUNCTION(execPlayAttackMontage); \
	DECLARE_FUNCTION(execCombatRangeEndOverlap); \
	DECLARE_FUNCTION(execCombatRangeOverlap); \
	DECLARE_FUNCTION(execSetStunned); \
	DECLARE_FUNCTION(execAggroSphereOverlap); \
	DECLARE_FUNCTION(execDestroyHitNumber); \
	DECLARE_FUNCTION(execStoreHitNumber); \
	DECLARE_FUNCTION(execShowHealthBar);


#define FinalProject_Source_FinalProject_Enemy_h_13_EVENT_PARMS \
	struct Enemy_eventShowHitNumber_Parms \
	{ \
		int32 Damage; \
		FVector HitLocation; \
		bool bHeadShot; \
	};


#define FinalProject_Source_FinalProject_Enemy_h_13_CALLBACK_WRAPPERS
#define FinalProject_Source_FinalProject_Enemy_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FinalProject"), NO_API) \
	DECLARE_SERIALIZER(AEnemy) \
	virtual UObject* _getUObject() const override { return const_cast<AEnemy*>(this); }


#define FinalProject_Source_FinalProject_Enemy_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FinalProject"), NO_API) \
	DECLARE_SERIALIZER(AEnemy) \
	virtual UObject* _getUObject() const override { return const_cast<AEnemy*>(this); }


#define FinalProject_Source_FinalProject_Enemy_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public:


#define FinalProject_Source_FinalProject_Enemy_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy)


#define FinalProject_Source_FinalProject_Enemy_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ImpactParticles() { return STRUCT_OFFSET(AEnemy, ImpactParticles); } \
	FORCEINLINE static uint32 __PPO__ImpactSound() { return STRUCT_OFFSET(AEnemy, ImpactSound); } \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(AEnemy, Health); } \
	FORCEINLINE static uint32 __PPO__MaxHealth() { return STRUCT_OFFSET(AEnemy, MaxHealth); } \
	FORCEINLINE static uint32 __PPO__HeadBone() { return STRUCT_OFFSET(AEnemy, HeadBone); } \
	FORCEINLINE static uint32 __PPO__HealthBarDisplayTime() { return STRUCT_OFFSET(AEnemy, HealthBarDisplayTime); } \
	FORCEINLINE static uint32 __PPO__HitMontage() { return STRUCT_OFFSET(AEnemy, HitMontage); } \
	FORCEINLINE static uint32 __PPO__HitReactTimeMin() { return STRUCT_OFFSET(AEnemy, HitReactTimeMin); } \
	FORCEINLINE static uint32 __PPO__HitReactTimeMax() { return STRUCT_OFFSET(AEnemy, HitReactTimeMax); } \
	FORCEINLINE static uint32 __PPO__HitNumbers() { return STRUCT_OFFSET(AEnemy, HitNumbers); } \
	FORCEINLINE static uint32 __PPO__HitNumberDestroyTime() { return STRUCT_OFFSET(AEnemy, HitNumberDestroyTime); } \
	FORCEINLINE static uint32 __PPO__BehaviorTree() { return STRUCT_OFFSET(AEnemy, BehaviorTree); } \
	FORCEINLINE static uint32 __PPO__PatrolPoint() { return STRUCT_OFFSET(AEnemy, PatrolPoint); } \
	FORCEINLINE static uint32 __PPO__PatrolPoint2() { return STRUCT_OFFSET(AEnemy, PatrolPoint2); } \
	FORCEINLINE static uint32 __PPO__AggroSphere() { return STRUCT_OFFSET(AEnemy, AggroSphere); } \
	FORCEINLINE static uint32 __PPO__bStunned() { return STRUCT_OFFSET(AEnemy, bStunned); } \
	FORCEINLINE static uint32 __PPO__StunChance() { return STRUCT_OFFSET(AEnemy, StunChance); } \
	FORCEINLINE static uint32 __PPO__bInAttackRange() { return STRUCT_OFFSET(AEnemy, bInAttackRange); } \
	FORCEINLINE static uint32 __PPO__CombatRangeSphere() { return STRUCT_OFFSET(AEnemy, CombatRangeSphere); } \
	FORCEINLINE static uint32 __PPO__AttackMontage() { return STRUCT_OFFSET(AEnemy, AttackMontage); } \
	FORCEINLINE static uint32 __PPO__LeftWeaponCollision() { return STRUCT_OFFSET(AEnemy, LeftWeaponCollision); } \
	FORCEINLINE static uint32 __PPO__RightWeaponCollision() { return STRUCT_OFFSET(AEnemy, RightWeaponCollision); } \
	FORCEINLINE static uint32 __PPO__BaseDamage() { return STRUCT_OFFSET(AEnemy, BaseDamage); } \
	FORCEINLINE static uint32 __PPO__LeftWeaponSocket() { return STRUCT_OFFSET(AEnemy, LeftWeaponSocket); } \
	FORCEINLINE static uint32 __PPO__RightWeaponSocket() { return STRUCT_OFFSET(AEnemy, RightWeaponSocket); } \
	FORCEINLINE static uint32 __PPO__bCanAttack() { return STRUCT_OFFSET(AEnemy, bCanAttack); } \
	FORCEINLINE static uint32 __PPO__AttackWaitTime() { return STRUCT_OFFSET(AEnemy, AttackWaitTime); } \
	FORCEINLINE static uint32 __PPO__DeathMontage() { return STRUCT_OFFSET(AEnemy, DeathMontage); }


#define FinalProject_Source_FinalProject_Enemy_h_10_PROLOG \
	FinalProject_Source_FinalProject_Enemy_h_13_EVENT_PARMS


#define FinalProject_Source_FinalProject_Enemy_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FinalProject_Source_FinalProject_Enemy_h_13_PRIVATE_PROPERTY_OFFSET \
	FinalProject_Source_FinalProject_Enemy_h_13_SPARSE_DATA \
	FinalProject_Source_FinalProject_Enemy_h_13_RPC_WRAPPERS \
	FinalProject_Source_FinalProject_Enemy_h_13_CALLBACK_WRAPPERS \
	FinalProject_Source_FinalProject_Enemy_h_13_INCLASS \
	FinalProject_Source_FinalProject_Enemy_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FinalProject_Source_FinalProject_Enemy_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FinalProject_Source_FinalProject_Enemy_h_13_PRIVATE_PROPERTY_OFFSET \
	FinalProject_Source_FinalProject_Enemy_h_13_SPARSE_DATA \
	FinalProject_Source_FinalProject_Enemy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FinalProject_Source_FinalProject_Enemy_h_13_CALLBACK_WRAPPERS \
	FinalProject_Source_FinalProject_Enemy_h_13_INCLASS_NO_PURE_DECLS \
	FinalProject_Source_FinalProject_Enemy_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINALPROJECT_API UClass* StaticClass<class AEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FinalProject_Source_FinalProject_Enemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
