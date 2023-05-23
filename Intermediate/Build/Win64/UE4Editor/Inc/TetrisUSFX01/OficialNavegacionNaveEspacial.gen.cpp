// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/OficialNavegacionNaveEspacial.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOficialNavegacionNaveEspacial() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AOficialNavegacionNaveEspacial_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AOficialNavegacionNaveEspacial();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AMiembroTripulacionNaveEspacial();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void AOficialNavegacionNaveEspacial::StaticRegisterNativesAOficialNavegacionNaveEspacial()
	{
	}
	UClass* Z_Construct_UClass_AOficialNavegacionNaveEspacial_NoRegister()
	{
		return AOficialNavegacionNaveEspacial::StaticClass();
	}
	struct Z_Construct_UClass_AOficialNavegacionNaveEspacial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOficialNavegacionNaveEspacial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMiembroTripulacionNaveEspacial,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOficialNavegacionNaveEspacial_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "OficialNavegacionNaveEspacial.h" },
		{ "ModuleRelativePath", "OficialNavegacionNaveEspacial.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOficialNavegacionNaveEspacial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOficialNavegacionNaveEspacial>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOficialNavegacionNaveEspacial_Statics::ClassParams = {
		&AOficialNavegacionNaveEspacial::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOficialNavegacionNaveEspacial_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOficialNavegacionNaveEspacial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOficialNavegacionNaveEspacial()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOficialNavegacionNaveEspacial_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOficialNavegacionNaveEspacial, 228960010);
	template<> TETRISUSFX01_API UClass* StaticClass<AOficialNavegacionNaveEspacial>()
	{
		return AOficialNavegacionNaveEspacial::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOficialNavegacionNaveEspacial(Z_Construct_UClass_AOficialNavegacionNaveEspacial, &AOficialNavegacionNaveEspacial::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AOficialNavegacionNaveEspacial"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOficialNavegacionNaveEspacial);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
