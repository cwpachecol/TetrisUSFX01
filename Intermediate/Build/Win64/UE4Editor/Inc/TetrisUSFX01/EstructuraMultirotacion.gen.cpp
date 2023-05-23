// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/EstructuraMultirotacion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstructuraMultirotacion() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEstructuraMultirotacion_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AEstructuraMultirotacion();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ADecorador();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void AEstructuraMultirotacion::StaticRegisterNativesAEstructuraMultirotacion()
	{
	}
	UClass* Z_Construct_UClass_AEstructuraMultirotacion_NoRegister()
	{
		return AEstructuraMultirotacion::StaticClass();
	}
	struct Z_Construct_UClass_AEstructuraMultirotacion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstructuraMultirotacion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADecorador,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstructuraMultirotacion_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EstructuraMultirotacion.h" },
		{ "ModuleRelativePath", "EstructuraMultirotacion.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstructuraMultirotacion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstructuraMultirotacion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstructuraMultirotacion_Statics::ClassParams = {
		&AEstructuraMultirotacion::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEstructuraMultirotacion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstructuraMultirotacion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstructuraMultirotacion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstructuraMultirotacion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstructuraMultirotacion, 678646484);
	template<> TETRISUSFX01_API UClass* StaticClass<AEstructuraMultirotacion>()
	{
		return AEstructuraMultirotacion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstructuraMultirotacion(Z_Construct_UClass_AEstructuraMultirotacion, &AEstructuraMultirotacion::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AEstructuraMultirotacion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstructuraMultirotacion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
