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

#define FinalProject_Source_FinalProject_CharacterMovement_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInterpLocation_Statics; \
	FINALPROJECT_API static class UScriptStruct* StaticStruct();


template<> FINALPROJECT_API UScriptStruct* StaticStruct<struct FInterpLocation>();

#define FinalProject_Source_FinalProject_CharacterMovement_h_39_DELEGATE \
struct _Script_FinalProject_eventHighlightIconDelegate_Parms \
{ \
	int32 SlotIndex; \
	bool bStartAnimation; \
}; \
static inline void FHighlightIconDelegate_DelegateWrapper(const FMulticastScriptDelegate& HighlightIconDelegate, int32 SlotIndex, bool bStartAnimation) \
{ \
	_Script_FinalProject_eventHighlightIconDelegate_Parms Parms; \
	Parms.SlotIndex=SlotIndex; \
	Parms.bStartAnimation=bStartAnimation ? true : false; \
	HighlightIconDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FinalProject_Source_FinalProject_CharacterMovement_h_38_DELEGATE \
struct _Script_FinalProject_eventEquipItemDelegate_Parms \
{ \
	int32 CurrentSlotIndex; \
	int32 NewSlotIndex; \
}; \
static inline void FEquipItemDelegate_DelegateWrapper(const FMulticastScriptDelegate& EquipItemDelegate, int32 CurrentSlotIndex, int32 NewSlotIndex) \
{ \
	_Script_FinalProject_eventEquipItemDelegate_Parms Parms; \
	Parms.CurrentSlotIndex=CurrentSlotIndex; \
	Parms.NewSlotIndex=NewSlotIndex; \
	EquipItemDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FinalProject_Source_FinalProject_CharacterMovement_h_44_SPARSE_DATA
#define FinalProject_Source_FinalProject_CharacterMovement_h_44_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCrosshairSpreadMultiplier); \
	DECLARE_FUNCTION(execFinishEquipping); \
	DECLARE_FUNCTION(execEndStun); \
	DECLARE_FUNCTION(execGetSurfaceType); \
	DECLARE_FUNCTION(execReleaseClip); \
	DECLARE_FUNCTION(execGrabClip); \
	DECLARE_FUNCTION(execFinishReloading); \
	DECLARE_FUNCTION(execAutoFireReset); \
	DECLARE_FUNCTION(execFinishCrosshairBulletFire);


#define FinalProject_Source_FinalProject_CharacterMovement_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCrosshairSpreadMultiplier); \
	DECLARE_FUNCTION(execFinishEquipping); \
	DECLARE_FUNCTION(execEndStun); \
	DECLARE_FUNCTION(execGetSurfaceType); \
	DECLARE_FUNCTION(execReleaseClip); \
	DECLARE_FUNCTION(execGrabClip); \
	DECLARE_FUNCTION(execFinishReloading); \
	DECLARE_FUNCTION(execAutoFireReset); \
	DECLARE_FUNCTION(execFinishCrosshairBulletFire);


#define FinalProject_Source_FinalProject_CharacterMovement_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacterMovement(); \
	friend struct Z_Construct_UClass_ACharacterMovement_Statics; \
public: \
	DECLARE_CLASS(ACharacterMovement, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FinalProject"), NO_API) \
	DECLARE_SERIALIZER(ACharacterMovement)


#define FinalProject_Source_FinalProject_CharacterMovement_h_44_INCLASS \
private: \
	static void StaticRegisterNativesACharacterMovement(); \
	friend struct Z_Construct_UClass_ACharacterMovement_Statics; \
public: \
	DECLARE_CLASS(ACharacterMovement, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FinalProject"), NO_API) \
	DECLARE_SERIALIZER(ACharacterMovement)


#define FinalProject_Source_FinalProject_CharacterMovement_h_44_STANDARD_CONSTRUCTORS \
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


#define FinalProject_Source_FinalProject_CharacterMovement_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterMovement(ACharacterMovement&&); \
	NO_API ACharacterMovement(const ACharacterMovement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterMovement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterMovement); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACharacterMovement)


#define FinalProject_Source_FinalProject_CharacterMovement_h_44_PRIVATE_PROPERTY_OFFSET \
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
	FORCEINLINE static uint32 __PPO__HipFireMontage() { return STRUCT_OFFSET(ACharacterMovement, HipFireMontage); } \
	FORCEINLINE static uint32 __PPO__ImpactParticles() { return STRUCT_OFFSET(ACharacterMovement, ImpactParticles); } \
	FORCEINLINE static uint32 __PPO__BeamParticles() { return STRUCT_OFFSET(ACharacterMovement, BeamParticles); } \
	FORCEINLINE static uint32 __PPO__bAiming() { return STRUCT_OFFSET(ACharacterMovement, bAiming); } \
	FORCEINLINE static uint32 __PPO__ZoomInterpSpeed() { return STRUCT_OFFSET(ACharacterMovement, ZoomInterpSpeed); } \
	FORCEINLINE static uint32 __PPO__CrosshairSpreadMultiplier() { return STRUCT_OFFSET(ACharacterMovement, CrosshairSpreadMultiplier); } \
	FORCEINLINE static uint32 __PPO__CrosshairVelocityFactor() { return STRUCT_OFFSET(ACharacterMovement, CrosshairVelocityFactor); } \
	FORCEINLINE static uint32 __PPO__CrosshairInAirFactor() { return STRUCT_OFFSET(ACharacterMovement, CrosshairInAirFactor); } \
	FORCEINLINE static uint32 __PPO__CrosshairAimFactor() { return STRUCT_OFFSET(ACharacterMovement, CrosshairAimFactor); } \
	FORCEINLINE static uint32 __PPO__CrosshairShootingFactor() { return STRUCT_OFFSET(ACharacterMovement, CrosshairShootingFactor); } \
	FORCEINLINE static uint32 __PPO__TraceHitItemLastFrame() { return STRUCT_OFFSET(ACharacterMovement, TraceHitItemLastFrame); } \
	FORCEINLINE static uint32 __PPO__EquippedWeapon() { return STRUCT_OFFSET(ACharacterMovement, EquippedWeapon); } \
	FORCEINLINE static uint32 __PPO__DefaultWeaponClass() { return STRUCT_OFFSET(ACharacterMovement, DefaultWeaponClass); } \
	FORCEINLINE static uint32 __PPO__TraceHitItem() { return STRUCT_OFFSET(ACharacterMovement, TraceHitItem); } \
	FORCEINLINE static uint32 __PPO__CameraInterpDistance() { return STRUCT_OFFSET(ACharacterMovement, CameraInterpDistance); } \
	FORCEINLINE static uint32 __PPO__CameraInterpElevation() { return STRUCT_OFFSET(ACharacterMovement, CameraInterpElevation); } \
	FORCEINLINE static uint32 __PPO__AmmoMap() { return STRUCT_OFFSET(ACharacterMovement, AmmoMap); } \
	FORCEINLINE static uint32 __PPO__Starting9mmAmmo() { return STRUCT_OFFSET(ACharacterMovement, Starting9mmAmmo); } \
	FORCEINLINE static uint32 __PPO__StartingARAmmo() { return STRUCT_OFFSET(ACharacterMovement, StartingARAmmo); } \
	FORCEINLINE static uint32 __PPO__CombatState() { return STRUCT_OFFSET(ACharacterMovement, CombatState); } \
	FORCEINLINE static uint32 __PPO__ReloadMontage() { return STRUCT_OFFSET(ACharacterMovement, ReloadMontage); } \
	FORCEINLINE static uint32 __PPO__EquipMontage() { return STRUCT_OFFSET(ACharacterMovement, EquipMontage); } \
	FORCEINLINE static uint32 __PPO__ClipTransform() { return STRUCT_OFFSET(ACharacterMovement, ClipTransform); } \
	FORCEINLINE static uint32 __PPO__HandSceneComponent() { return STRUCT_OFFSET(ACharacterMovement, HandSceneComponent); } \
	FORCEINLINE static uint32 __PPO__WeaponInterpComp() { return STRUCT_OFFSET(ACharacterMovement, WeaponInterpComp); } \
	FORCEINLINE static uint32 __PPO__InterpComp1() { return STRUCT_OFFSET(ACharacterMovement, InterpComp1); } \
	FORCEINLINE static uint32 __PPO__InterpComp2() { return STRUCT_OFFSET(ACharacterMovement, InterpComp2); } \
	FORCEINLINE static uint32 __PPO__InterpComp3() { return STRUCT_OFFSET(ACharacterMovement, InterpComp3); } \
	FORCEINLINE static uint32 __PPO__InterpComp4() { return STRUCT_OFFSET(ACharacterMovement, InterpComp4); } \
	FORCEINLINE static uint32 __PPO__InterpComp5() { return STRUCT_OFFSET(ACharacterMovement, InterpComp5); } \
	FORCEINLINE static uint32 __PPO__InterpComp6() { return STRUCT_OFFSET(ACharacterMovement, InterpComp6); } \
	FORCEINLINE static uint32 __PPO__InterpLocation() { return STRUCT_OFFSET(ACharacterMovement, InterpLocation); } \
	FORCEINLINE static uint32 __PPO__PickupSoundResetTime() { return STRUCT_OFFSET(ACharacterMovement, PickupSoundResetTime); } \
	FORCEINLINE static uint32 __PPO__EquipSoundResetTime() { return STRUCT_OFFSET(ACharacterMovement, EquipSoundResetTime); } \
	FORCEINLINE static uint32 __PPO__Inventory() { return STRUCT_OFFSET(ACharacterMovement, Inventory); } \
	FORCEINLINE static uint32 __PPO__EquipItemDelegate() { return STRUCT_OFFSET(ACharacterMovement, EquipItemDelegate); } \
	FORCEINLINE static uint32 __PPO__HighlightIconDelegate() { return STRUCT_OFFSET(ACharacterMovement, HighlightIconDelegate); } \
	FORCEINLINE static uint32 __PPO__HighlightedSlot() { return STRUCT_OFFSET(ACharacterMovement, HighlightedSlot); } \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(ACharacterMovement, Health); } \
	FORCEINLINE static uint32 __PPO__MaxHealth() { return STRUCT_OFFSET(ACharacterMovement, MaxHealth); } \
	FORCEINLINE static uint32 __PPO__MeleeImpactSound() { return STRUCT_OFFSET(ACharacterMovement, MeleeImpactSound); } \
	FORCEINLINE static uint32 __PPO__BloodParticles() { return STRUCT_OFFSET(ACharacterMovement, BloodParticles); } \
	FORCEINLINE static uint32 __PPO__HitReactMontage() { return STRUCT_OFFSET(ACharacterMovement, HitReactMontage); } \
	FORCEINLINE static uint32 __PPO__StunChance() { return STRUCT_OFFSET(ACharacterMovement, StunChance); }


#define FinalProject_Source_FinalProject_CharacterMovement_h_41_PROLOG
#define FinalProject_Source_FinalProject_CharacterMovement_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FinalProject_Source_FinalProject_CharacterMovement_h_44_PRIVATE_PROPERTY_OFFSET \
	FinalProject_Source_FinalProject_CharacterMovement_h_44_SPARSE_DATA \
	FinalProject_Source_FinalProject_CharacterMovement_h_44_RPC_WRAPPERS \
	FinalProject_Source_FinalProject_CharacterMovement_h_44_INCLASS \
	FinalProject_Source_FinalProject_CharacterMovement_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FinalProject_Source_FinalProject_CharacterMovement_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FinalProject_Source_FinalProject_CharacterMovement_h_44_PRIVATE_PROPERTY_OFFSET \
	FinalProject_Source_FinalProject_CharacterMovement_h_44_SPARSE_DATA \
	FinalProject_Source_FinalProject_CharacterMovement_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FinalProject_Source_FinalProject_CharacterMovement_h_44_INCLASS_NO_PURE_DECLS \
	FinalProject_Source_FinalProject_CharacterMovement_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINALPROJECT_API UClass* StaticClass<class ACharacterMovement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FinalProject_Source_FinalProject_CharacterMovement_h


#define FOREACH_ENUM_ECOMBATSTATE(op) \
	op(ECombatState::ECS_Unoccupied) \
	op(ECombatState::ECS_FireTimerInProgress) \
	op(ECombatState::ECS_Reloading) \
	op(ECombatState::ECS_Equipping) \
	op(ECombatState::ECS_Stunned) 

enum class ECombatState : uint8;
template<> FINALPROJECT_API UEnum* StaticEnum<ECombatState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
