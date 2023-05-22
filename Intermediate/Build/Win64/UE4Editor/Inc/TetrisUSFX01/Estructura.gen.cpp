// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/Estructura.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstructura() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_UEstructura_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UEstructura();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void UEstructura::StaticRegisterNativesUEstructura()
	{
	}
	UClass* Z_Construct_UClass_UEstructura_NoRegister()
	{
		return UEstructura::StaticClass();
	}
	struct Z_Construct_UClass_UEstructura_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEstructura_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEstructura_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Estructura.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEstructura_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEstructura>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEstructura_Statics::ClassParams = {
		&UEstructura::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEstructura_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEstructura_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEstructura()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEstructura_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEstructura, 3366428734);
	template<> TETRISUSFX01_API UClass* StaticClass<UEstructura>()
	{
		return UEstructura::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEstructura(Z_Construct_UClass_UEstructura, &UEstructura::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("UEstructura"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEstructura);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
