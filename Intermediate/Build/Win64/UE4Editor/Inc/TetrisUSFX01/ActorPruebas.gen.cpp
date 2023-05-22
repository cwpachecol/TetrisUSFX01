// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/ActorPruebas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorPruebas() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AActorPruebas_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AActorPruebas();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void AActorPruebas::StaticRegisterNativesAActorPruebas()
	{
	}
	UClass* Z_Construct_UClass_AActorPruebas_NoRegister()
	{
		return AActorPruebas::StaticClass();
	}
	struct Z_Construct_UClass_AActorPruebas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AActorPruebas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorPruebas_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ActorPruebas.h" },
		{ "ModuleRelativePath", "ActorPruebas.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AActorPruebas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActorPruebas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AActorPruebas_Statics::ClassParams = {
		&AActorPruebas::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AActorPruebas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AActorPruebas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AActorPruebas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AActorPruebas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AActorPruebas, 1081885845);
	template<> TETRISUSFX01_API UClass* StaticClass<AActorPruebas>()
	{
		return AActorPruebas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AActorPruebas(Z_Construct_UClass_AActorPruebas, &AActorPruebas::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AActorPruebas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActorPruebas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
