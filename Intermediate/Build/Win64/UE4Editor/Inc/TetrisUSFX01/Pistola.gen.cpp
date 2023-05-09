// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/Pistola.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePistola() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_APistola_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_APistola();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void APistola::StaticRegisterNativesAPistola()
	{
	}
	UClass* Z_Construct_UClass_APistola_NoRegister()
	{
		return APistola::StaticClass();
	}
	struct Z_Construct_UClass_APistola_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APistola_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APistola_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pistola.h" },
		{ "ModuleRelativePath", "Pistola.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APistola_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APistola>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APistola_Statics::ClassParams = {
		&APistola::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APistola_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APistola_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APistola()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APistola_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APistola, 3450189839);
	template<> TETRISUSFX01_API UClass* StaticClass<APistola>()
	{
		return APistola::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APistola(Z_Construct_UClass_APistola, &APistola::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("APistola"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APistola);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
