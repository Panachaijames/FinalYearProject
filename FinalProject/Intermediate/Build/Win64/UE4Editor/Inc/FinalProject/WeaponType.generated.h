// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FINALPROJECT_WeaponType_generated_h
#error "WeaponType.generated.h already included, missing '#pragma once' in WeaponType.h"
#endif
#define FINALPROJECT_WeaponType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FinalProject_Source_FinalProject_WeaponType_h


#define FOREACH_ENUM_EWEAPONTYPE(op) \
	op(EWeaponType::EWT_SubmachineGun) \
	op(EWeaponType::EWT_AssaultRifle) \
	op(EWeaponType::EWT_Pistol) 

enum class EWeaponType : uint8;
template<> FINALPROJECT_API UEnum* StaticEnum<EWeaponType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
