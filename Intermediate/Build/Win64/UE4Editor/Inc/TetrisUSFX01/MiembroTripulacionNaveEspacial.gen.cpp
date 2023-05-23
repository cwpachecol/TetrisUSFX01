// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/MiembroTripulacionNaveEspacial.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMiembroTripulacionNaveEspacial() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AMiembroTripulacionNaveEspacial_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AMiembroTripulacionNaveEspacial();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void AMiembroTripulacionNaveEspacial::StaticRegisterNativesAMiembroTripulacionNaveEspacial()
	{
	}
	UClass* Z_Construct_UClass_AMiembroTripulacionNaveEspacial_NoRegister()
	{
		return AMiembroTripulacionNaveEspacial::StaticClass();
	}
	struct Z_Construct_UClass_AMiembroTripulacionNaveEspacial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMiembroTripulacionNaveEspacial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMiembroTripulacionNaveEspacial_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MiembroTripulacionNaveEspacial.h" },
		{ "ModuleRelativePath", "MiembroTripulacionNaveEspacial.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMiembroTripulacionNaveEspacial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMiembroTripulacionNaveEspacial>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMiembroTripulacionNaveEspacial_Statics::ClassParams = {
		&AMiembroTripulacionNaveEspacial::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMiembroTripulacionNaveEspacial_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMiembroTripulacionNaveEspacial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMiembroTripulacionNaveEspacial()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMiembroTripulacionNaveEspacial_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMiembroTripulacionNaveEspacial, 1948680467);
	template<> TETRISUSFX01_API UClass* StaticClass<AMiembroTripulacionNaveEspacial>()
	{
		return AMiembroTripulacionNaveEspacial::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMiembroTripulacionNaveEspacial(Z_Construct_UClass_AMiembroTripulacionNaveEspacial, &AMiembroTripulacionNaveEspacial::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AMiembroTripulacionNaveEspacial"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMiembroTripulacionNaveEspacial);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
