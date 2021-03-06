// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FinalProject/WeaponType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponType() {}
// Cross Module References
	FINALPROJECT_API UEnum* Z_Construct_UEnum_FinalProject_EWeaponType();
	UPackage* Z_Construct_UPackage__Script_FinalProject();
// End Cross Module References
	static UEnum* EWeaponType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FinalProject_EWeaponType, Z_Construct_UPackage__Script_FinalProject(), TEXT("EWeaponType"));
		}
		return Singleton;
	}
	template<> FINALPROJECT_API UEnum* StaticEnum<EWeaponType>()
	{
		return EWeaponType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWeaponType(EWeaponType_StaticEnum, TEXT("/Script/FinalProject"), TEXT("EWeaponType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FinalProject_EWeaponType_Hash() { return 692334950U; }
	UEnum* Z_Construct_UEnum_FinalProject_EWeaponType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FinalProject();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWeaponType"), 0, Get_Z_Construct_UEnum_FinalProject_EWeaponType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWeaponType::EWT_SubmachineGun", (int64)EWeaponType::EWT_SubmachineGun },
				{ "EWeaponType::EWT_AssaultRifle", (int64)EWeaponType::EWT_AssaultRifle },
				{ "EWeaponType::EWT_Pistol", (int64)EWeaponType::EWT_Pistol },
				{ "EWeaponType::EWT_MAX", (int64)EWeaponType::EWT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EWT_AssaultRifle.DisplayName", "AssaultRifle" },
				{ "EWT_AssaultRifle.Name", "EWeaponType::EWT_AssaultRifle" },
				{ "EWT_MAX.DisplayName", "DefaultMAX" },
				{ "EWT_MAX.Name", "EWeaponType::EWT_MAX" },
				{ "EWT_Pistol.DisplayName", "Pistol" },
				{ "EWT_Pistol.Name", "EWeaponType::EWT_Pistol" },
				{ "EWT_SubmachineGun.DisplayName", "SubmachineGun" },
				{ "EWT_SubmachineGun.Name", "EWeaponType::EWT_SubmachineGun" },
				{ "ModuleRelativePath", "WeaponType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FinalProject,
				nullptr,
				"EWeaponType",
				"EWeaponType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
