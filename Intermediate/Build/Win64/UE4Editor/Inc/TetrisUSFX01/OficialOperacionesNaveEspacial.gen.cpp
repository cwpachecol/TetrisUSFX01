// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/OficialOperacionesNaveEspacial.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOficialOperacionesNaveEspacial() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AOficialOperacionesNaveEspacial_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AOficialOperacionesNaveEspacial();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AMiembroTripulacionNaveEspacial();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void AOficialOperacionesNaveEspacial::StaticRegisterNativesAOficialOperacionesNaveEspacial()
	{
	}
	UClass* Z_Construct_UClass_AOficialOperacionesNaveEspacial_NoRegister()
	{
		return AOficialOperacionesNaveEspacial::StaticClass();
	}
	struct Z_Construct_UClass_AOficialOperacionesNaveEspacial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOficialOperacionesNaveEspacial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMiembroTripulacionNaveEspacial,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOficialOperacionesNaveEspacial_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "OficialOperacionesNaveEspacial.h" },
		{ "ModuleRelativePath", "OficialOperacionesNaveEspacial.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOficialOperacionesNaveEspacial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOficialOperacionesNaveEspacial>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOficialOperacionesNaveEspacial_Statics::ClassParams = {
		&AOficialOperacionesNaveEspacial::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AOficialOperacionesNaveEspacial_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOficialOperacionesNaveEspacial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOficialOperacionesNaveEspacial()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOficialOperacionesNaveEspacial_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOficialOperacionesNaveEspacial, 694349923);
	template<> TETRISUSFX01_API UClass* StaticClass<AOficialOperacionesNaveEspacial>()
	{
		return AOficialOperacionesNaveEspacial::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOficialOperacionesNaveEspacial(Z_Construct_UClass_AOficialOperacionesNaveEspacial, &AOficialOperacionesNaveEspacial::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AOficialOperacionesNaveEspacial"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOficialOperacionesNaveEspacial);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
