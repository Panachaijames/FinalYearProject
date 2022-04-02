// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FinalProject/CharacterMovement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterMovement() {}
// Cross Module References
	FINALPROJECT_API UClass* Z_Construct_UClass_ACharacterMovement_NoRegister();
	FINALPROJECT_API UClass* Z_Construct_UClass_ACharacterMovement();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_FinalProject();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	FINALPROJECT_API UClass* Z_Construct_UClass_AItem_NoRegister();
	FINALPROJECT_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(ACharacterMovement::execGetCrosshairSpreadMultiplier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCrosshairSpreadMultiplier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacterMovement::execAutoFireReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AutoFireReset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacterMovement::execFinishCrosshairBulletFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishCrosshairBulletFire();
		P_NATIVE_END;
	}
	void ACharacterMovement::StaticRegisterNativesACharacterMovement()
	{
		UClass* Class = ACharacterMovement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AutoFireReset", &ACharacterMovement::execAutoFireReset },
			{ "FinishCrosshairBulletFire", &ACharacterMovement::execFinishCrosshairBulletFire },
			{ "GetCrosshairSpreadMultiplier", &ACharacterMovement::execGetCrosshairSpreadMultiplier },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACharacterMovement_AutoFireReset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterMovement_AutoFireReset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterMovement_AutoFireReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterMovement, nullptr, "AutoFireReset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterMovement_AutoFireReset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterMovement_AutoFireReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterMovement_AutoFireReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacterMovement_AutoFireReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterMovement_FinishCrosshairBulletFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterMovement_FinishCrosshairBulletFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterMovement_FinishCrosshairBulletFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterMovement, nullptr, "FinishCrosshairBulletFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterMovement_FinishCrosshairBulletFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterMovement_FinishCrosshairBulletFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterMovement_FinishCrosshairBulletFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacterMovement_FinishCrosshairBulletFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterMovement_GetCrosshairSpreadMultiplier_Statics
	{
		struct CharacterMovement_eventGetCrosshairSpreadMultiplier_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacterMovement_GetCrosshairSpreadMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterMovement_eventGetCrosshairSpreadMultiplier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterMovement_GetCrosshairSpreadMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterMovement_GetCrosshairSpreadMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterMovement_GetCrosshairSpreadMultiplier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterMovement_GetCrosshairSpreadMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterMovement, nullptr, "GetCrosshairSpreadMultiplier", nullptr, nullptr, sizeof(CharacterMovement_eventGetCrosshairSpreadMultiplier_Parms), Z_Construct_UFunction_ACharacterMovement_GetCrosshairSpreadMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterMovement_GetCrosshairSpreadMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterMovement_GetCrosshairSpreadMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterMovement_GetCrosshairSpreadMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterMovement_GetCrosshairSpreadMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacterMovement_GetCrosshairSpreadMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACharacterMovement_NoRegister()
	{
		return ACharacterMovement::StaticClass();
	}
	struct Z_Construct_UClass_ACharacterMovement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HipTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HipTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HipLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HipLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimingTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimingLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseHipTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MouseHipTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseHipLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MouseHipLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseAimingTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MouseAimingTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseAimingLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MouseAimingLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleFlash_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuzzleFlash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HipFireMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HipFireMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImpactParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeamParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BeamParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAiming_MetaData[];
#endif
		static void NewProp_bAiming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAiming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZoomInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairSpreadMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrosshairSpreadMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairVelocityFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrosshairVelocityFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairInAirFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrosshairInAirFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairAimFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrosshairAimFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairShootingFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrosshairShootingFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceHitItemLastFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TraceHitItemLastFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippedWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquippedWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultWeaponClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultWeaponClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceHitItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TraceHitItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraInterpDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraInterpDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraInterpElevation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraInterpElevation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacterMovement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FinalProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACharacterMovement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACharacterMovement_AutoFireReset, "AutoFireReset" }, // 847656714
		{ &Z_Construct_UFunction_ACharacterMovement_FinishCrosshairBulletFire, "FinishCrosshairBulletFire" }, // 2062173036
		{ &Z_Construct_UFunction_ACharacterMovement_GetCrosshairSpreadMultiplier, "GetCrosshairSpreadMultiplier" }, // 3800122887
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMovement_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CharacterMovement.h" },
		{ "ModuleRelativePath", "CharacterMovement.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMovement_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CharacterMovement.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterMovement_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterMovement, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMovement_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera that follows the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CharacterMovement.h" },
		{ "ToolTip", "Camera that follows the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterMovement_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterMovement, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMovement_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate */" },
		{ "ModuleRelativePath", "CharacterMovement.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterMovement_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterMovement, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMovement_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final turn rate */" },
		{ "ModuleRelativePath", "CharacterMovement.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final turn rate" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterMovement_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterMovement, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMovement_Statics::NewProp_HipTurnRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Turn rate wile not aiming*/" },
		{ "ModuleRelativePath", "CharacterMovement.h" },
		{ "ToolTip", "Turn rate wile not aiming" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterMovement_Statics::NewProp_HipTurnRate = { "HipTurnRate", nullptr, (EPropertyFlags)0x0040000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterMovement, HipTurnRate), METADATA_PARAMS(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_HipTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_HipTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMovement_Statics::NewProp_HipLookUpRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/**Look up rate when not aiming*/" },
		{ "ModuleRelativePath", "CharacterMovement.h" },
		{ "ToolTip", "Look up rate when not aiming" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterMovement_Statics::NewProp_HipLookUpRate = { "HipLookUpRate", nullptr, (EPropertyFlags)0x0040000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterMovement, HipLookUpRate), METADATA_PARAMS(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_HipLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_HipLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMovement_Statics::NewProp_AimingTurnRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "CharacterMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterMovement_Statics::NewProp_AimingTurnRate = { "AimingTurnRate", nullptr, (EPropertyFlags)0x0040000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterMovement, AimingTurnRate), METADATA_PARAMS(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_AimingTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_AimingTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMovement_Statics::NewProp_AimingLookUpRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "CharacterMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterMovement_Statics::NewProp_AimingLookUpRate = { "AimingLookUpRate", nullptr, (EPropertyFlags)0x0040000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterMovement, AimingLookUpRate), METADATA_PARAMS(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_AimingLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_AimingLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMovement_Statics::NewProp_MouseHipTurnRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Scale Factor for mouse look sensitivity. Turn rate when not aiming.*/" },
		{ "ModuleRelativePath", "CharacterMovement.h" },
		{ "ToolTip", "Scale Factor for mouse look sensitivity. Turn rate when not aiming." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterMovement_Statics::NewProp_MouseHipTurnRate = { "MouseHipTurnRate", nullptr, (EPropertyFlags)0x0040000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterMovement, MouseHipTurnRate), METADATA_PARAMS(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_MouseHipTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_MouseHipTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMovement_Statics::NewProp_MouseHipLookUpRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Scale Factor for mouse look sensitivity. Look up rate when not aiming.*/" },
		{ "ModuleRelativePath", "CharacterMovement.h" },
		{ "ToolTip", "Scale Factor for mouse look sensitivity. Look up rate when not aiming." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterMovement_Statics::NewProp_MouseHipLookUpRate = { "MouseHipLookUpRate", nullptr, (EPropertyFlags)0x0040000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterMovement, MouseHipLookUpRate), METADATA_PARAMS(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_MouseHipLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_MouseHipLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMovement_Statics::NewProp_MouseAimingTurnRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Scale Factor for mouse look sensitivity. Turn rate when aiming.*/" },
		{ "ModuleRelativePath", "CharacterMovement.h" },
		{ "ToolTip", "Scale Factor for mouse look sensitivity. Turn rate when aiming." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterMovement_Statics::NewProp_MouseAimingTurnRate = { "MouseAimingTurnRate", nullptr, (EPropertyFlags)0x0040000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterMovement, MouseAimingTurnRate), METADATA_PARAMS(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_MouseAimingTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_MouseAimingTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMovement_Statics::NewProp_MouseAimingLookUpRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Scale Factor for mouse look sensitivity. Look up rate when aiming.*/" },
		{ "ModuleRelativePath", "CharacterMovement.h" },
		{ "ToolTip", "Scale Factor for mouse look sensitivity. Look up rate when aiming." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterMovement_Statics::NewProp_MouseAimingLookUpRate = { "MouseAimingLookUpRate", nullptr, (EPropertyFlags)0x0040000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterMovement, MouseAimingLookUpRate), METADATA_PARAMS(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_MouseAimingLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_MouseAimingLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMovement_Statics::NewProp_FireSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "Comment", "/** Randomized gunshot sound cue */" },
		{ "ModuleRelativePath", "CharacterMovement.h" },
		{ "ToolTip", "Randomized gunshot sound cue" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterMovement_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterMovement, FireSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_FireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_FireSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMovement_Statics::NewProp_MuzzleFlash_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "Comment", "/** Flash spawned at BarrelSocket */" },
		{ "ModuleRelativePath", "CharacterMovement.h" },
		{ "ToolTip", "Flash spawned at BarrelSocket" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterMovement_Statics::NewProp_MuzzleFlash = { "MuzzleFlash", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterMovement, MuzzleFlash), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_MuzzleFlash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_MuzzleFlash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMovement_Statics::NewProp_HipFireMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "Comment", "/** Montage for firing the weapon */" },
		{ "ModuleRelativePath", "CharacterMovement.h" },
		{ "ToolTip", "Montage for firing the weapon" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterMovement_Statics::NewProp_HipFireMontage = { "HipFireMontage", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterMovement, HipFireMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_HipFireMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_HipFireMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMovement_Statics::NewProp_ImpactParticles_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "Comment", "/** Particles spawned upon bullet impact */" },
		{ "ModuleRelativePath", "CharacterMovement.h" },
		{ "ToolTip", "Particles spawned upon bullet impact" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterMovement_Statics::NewProp_ImpactParticles = { "ImpactParticles", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterMovement, ImpactParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_ImpactParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_ImpactParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMovement_Statics::NewProp_BeamParticles_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "Comment", "/** Smoke trail for bullets */" },
		{ "ModuleRelativePath", "CharacterMovement.h" },
		{ "ToolTip", "Smoke trail for bullets" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterMovement_Statics::NewProp_BeamParticles = { "BeamParticles", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterMovement, BeamParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_BeamParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_BeamParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMovement_Statics::NewProp_bAiming_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "Comment", "/** True when aiming */" },
		{ "ModuleRelativePath", "CharacterMovement.h" },
		{ "ToolTip", "True when aiming" },
	};
#endif
	void Z_Construct_UClass_ACharacterMovement_Statics::NewProp_bAiming_SetBit(void* Obj)
	{
		((ACharacterMovement*)Obj)->bAiming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacterMovement_Statics::NewProp_bAiming = { "bAiming", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACharacterMovement), &Z_Construct_UClass_ACharacterMovement_Statics::NewProp_bAiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_bAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_bAiming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMovement_Statics::NewProp_ZoomInterpSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "Comment", "/**Interp speed for zooming when aiming*/" },
		{ "ModuleRelativePath", "CharacterMovement.h" },
		{ "ToolTip", "Interp speed for zooming when aiming" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterMovement_Statics::NewProp_ZoomInterpSpeed = { "ZoomInterpSpeed", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterMovement, ZoomInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_ZoomInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_ZoomInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMovement_Statics::NewProp_CrosshairSpreadMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Crosshairs" },
		{ "Comment", "/** Determines the spread of the crosshairs */" },
		{ "ModuleRelativePath", "CharacterMovement.h" },
		{ "ToolTip", "Determines the spread of the crosshairs" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterMovement_Statics::NewProp_CrosshairSpreadMultiplier = { "CrosshairSpreadMultiplier", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterMovement, CrosshairSpreadMultiplier), METADATA_PARAMS(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_CrosshairSpreadMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_CrosshairSpreadMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMovement_Statics::NewProp_CrosshairVelocityFactor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Crosshairs" },
		{ "Comment", "/** Velocity component for crosshair spread*/" },
		{ "ModuleRelativePath", "CharacterMovement.h" },
		{ "ToolTip", "Velocity component for crosshair spread" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterMovement_Statics::NewProp_CrosshairVelocityFactor = { "CrosshairVelocityFactor", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterMovement, CrosshairVelocityFactor), METADATA_PARAMS(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_CrosshairVelocityFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_CrosshairVelocityFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMovement_Statics::NewProp_CrosshairInAirFactor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Crosshairs" },
		{ "Comment", "/** In Air component for crosshair spread*/" },
		{ "ModuleRelativePath", "CharacterMovement.h" },
		{ "ToolTip", "In Air component for crosshair spread" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterMovement_Statics::NewProp_CrosshairInAirFactor = { "CrosshairInAirFactor", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterMovement, CrosshairInAirFactor), METADATA_PARAMS(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_CrosshairInAirFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_CrosshairInAirFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMovement_Statics::NewProp_CrosshairAimFactor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Crosshairs" },
		{ "Comment", "/** Aim component for crosshair spread*/" },
		{ "ModuleRelativePath", "CharacterMovement.h" },
		{ "ToolTip", "Aim component for crosshair spread" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterMovement_Statics::NewProp_CrosshairAimFactor = { "CrosshairAimFactor", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterMovement, CrosshairAimFactor), METADATA_PARAMS(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_CrosshairAimFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_CrosshairAimFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMovement_Statics::NewProp_CrosshairShootingFactor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Crosshairs" },
		{ "Comment", "/** Shooting component for crosshair spread*/" },
		{ "ModuleRelativePath", "CharacterMovement.h" },
		{ "ToolTip", "Shooting component for crosshair spread" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterMovement_Statics::NewProp_CrosshairShootingFactor = { "CrosshairShootingFactor", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterMovement, CrosshairShootingFactor), METADATA_PARAMS(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_CrosshairShootingFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_CrosshairShootingFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMovement_Statics::NewProp_TraceHitItemLastFrame_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Items" },
		{ "Comment", "/** The AItem we hit last frame */" },
		{ "ModuleRelativePath", "CharacterMovement.h" },
		{ "ToolTip", "The AItem we hit last frame" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterMovement_Statics::NewProp_TraceHitItemLastFrame = { "TraceHitItemLastFrame", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterMovement, TraceHitItemLastFrame), Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_TraceHitItemLastFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_TraceHitItemLastFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMovement_Statics::NewProp_EquippedWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "Comment", "/** Currently equpped Weapon*/" },
		{ "ModuleRelativePath", "CharacterMovement.h" },
		{ "ToolTip", "Currently equpped Weapon" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterMovement_Statics::NewProp_EquippedWeapon = { "EquippedWeapon", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterMovement, EquippedWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_EquippedWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_EquippedWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMovement_Statics::NewProp_DefaultWeaponClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "Comment", "/**Set this in blueprints for the default weapon class*/" },
		{ "ModuleRelativePath", "CharacterMovement.h" },
		{ "ToolTip", "Set this in blueprints for the default weapon class" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACharacterMovement_Statics::NewProp_DefaultWeaponClass = { "DefaultWeaponClass", nullptr, (EPropertyFlags)0x0044000000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterMovement, DefaultWeaponClass), Z_Construct_UClass_AWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_DefaultWeaponClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_DefaultWeaponClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMovement_Statics::NewProp_TraceHitItem_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "Comment", "/** The Item current hit by our trace in TraceFor Items could be null*/" },
		{ "ModuleRelativePath", "CharacterMovement.h" },
		{ "ToolTip", "The Item current hit by our trace in TraceFor Items could be null" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterMovement_Statics::NewProp_TraceHitItem = { "TraceHitItem", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterMovement, TraceHitItem), Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_TraceHitItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_TraceHitItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMovement_Statics::NewProp_CameraInterpDistance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Items" },
		{ "Comment", "/** Distance outward from the camera for the interp destination*/" },
		{ "ModuleRelativePath", "CharacterMovement.h" },
		{ "ToolTip", "Distance outward from the camera for the interp destination" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterMovement_Statics::NewProp_CameraInterpDistance = { "CameraInterpDistance", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterMovement, CameraInterpDistance), METADATA_PARAMS(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_CameraInterpDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_CameraInterpDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMovement_Statics::NewProp_CameraInterpElevation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Items" },
		{ "Comment", "/** Distance upward from the camera for the interp destination*/" },
		{ "ModuleRelativePath", "CharacterMovement.h" },
		{ "ToolTip", "Distance upward from the camera for the interp destination" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterMovement_Statics::NewProp_CameraInterpElevation = { "CameraInterpElevation", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterMovement, CameraInterpElevation), METADATA_PARAMS(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_CameraInterpElevation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMovement_Statics::NewProp_CameraInterpElevation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACharacterMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMovement_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMovement_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMovement_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMovement_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMovement_Statics::NewProp_HipTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMovement_Statics::NewProp_HipLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMovement_Statics::NewProp_AimingTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMovement_Statics::NewProp_AimingLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMovement_Statics::NewProp_MouseHipTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMovement_Statics::NewProp_MouseHipLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMovement_Statics::NewProp_MouseAimingTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMovement_Statics::NewProp_MouseAimingLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMovement_Statics::NewProp_FireSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMovement_Statics::NewProp_MuzzleFlash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMovement_Statics::NewProp_HipFireMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMovement_Statics::NewProp_ImpactParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMovement_Statics::NewProp_BeamParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMovement_Statics::NewProp_bAiming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMovement_Statics::NewProp_ZoomInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMovement_Statics::NewProp_CrosshairSpreadMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMovement_Statics::NewProp_CrosshairVelocityFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMovement_Statics::NewProp_CrosshairInAirFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMovement_Statics::NewProp_CrosshairAimFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMovement_Statics::NewProp_CrosshairShootingFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMovement_Statics::NewProp_TraceHitItemLastFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMovement_Statics::NewProp_EquippedWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMovement_Statics::NewProp_DefaultWeaponClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMovement_Statics::NewProp_TraceHitItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMovement_Statics::NewProp_CameraInterpDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterMovement_Statics::NewProp_CameraInterpElevation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacterMovement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterMovement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACharacterMovement_Statics::ClassParams = {
		&ACharacterMovement::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACharacterMovement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMovement_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACharacterMovement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMovement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACharacterMovement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACharacterMovement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACharacterMovement, 532776295);
	template<> FINALPROJECT_API UClass* StaticClass<ACharacterMovement>()
	{
		return ACharacterMovement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACharacterMovement(Z_Construct_UClass_ACharacterMovement, &ACharacterMovement::StaticClass, TEXT("/Script/FinalProject"), TEXT("ACharacterMovement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterMovement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
