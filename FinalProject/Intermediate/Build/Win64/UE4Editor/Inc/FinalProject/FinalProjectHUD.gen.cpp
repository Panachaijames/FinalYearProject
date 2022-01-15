// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FinalProject/FinalProjectHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFinalProjectHUD() {}
// Cross Module References
	FINALPROJECT_API UClass* Z_Construct_UClass_AFinalProjectHUD_NoRegister();
	FINALPROJECT_API UClass* Z_Construct_UClass_AFinalProjectHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_FinalProject();
// End Cross Module References
	void AFinalProjectHUD::StaticRegisterNativesAFinalProjectHUD()
	{
	}
	UClass* Z_Construct_UClass_AFinalProjectHUD_NoRegister()
	{
		return AFinalProjectHUD::StaticClass();
	}
	struct Z_Construct_UClass_AFinalProjectHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFinalProjectHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_FinalProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFinalProjectHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "FinalProjectHUD.h" },
		{ "ModuleRelativePath", "FinalProjectHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFinalProjectHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFinalProjectHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFinalProjectHUD_Statics::ClassParams = {
		&AFinalProjectHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFinalProjectHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFinalProjectHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFinalProjectHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFinalProjectHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFinalProjectHUD, 737272437);
	template<> FINALPROJECT_API UClass* StaticClass<AFinalProjectHUD>()
	{
		return AFinalProjectHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFinalProjectHUD(Z_Construct_UClass_AFinalProjectHUD, &AFinalProjectHUD::StaticClass, TEXT("/Script/FinalProject"), TEXT("AFinalProjectHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFinalProjectHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
