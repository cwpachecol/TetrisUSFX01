// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/AdaptadorPistola.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdaptadorPistola() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AAdaptadorPistola_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AAdaptadorPistola();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_APistola_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UHonda_NoRegister();
// End Cross Module References
	void AAdaptadorPistola::StaticRegisterNativesAAdaptadorPistola()
	{
	}
	UClass* Z_Construct_UClass_AAdaptadorPistola_NoRegister()
	{
		return AAdaptadorPistola::StaticClass();
	}
	struct Z_Construct_UClass_AAdaptadorPistola_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Arma_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Arma;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAdaptadorPistola_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdaptadorPistola_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AdaptadorPistola.h" },
		{ "ModuleRelativePath", "AdaptadorPistola.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdaptadorPistola_Statics::NewProp_Arma_MetaData[] = {
		{ "Comment", "//The Weapon Actor\n" },
		{ "ModuleRelativePath", "AdaptadorPistola.h" },
		{ "ToolTip", "The Weapon Actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdaptadorPistola_Statics::NewProp_Arma = { "Arma", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdaptadorPistola, Arma), Z_Construct_UClass_APistola_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAdaptadorPistola_Statics::NewProp_Arma_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdaptadorPistola_Statics::NewProp_Arma_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAdaptadorPistola_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdaptadorPistola_Statics::NewProp_Arma,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AAdaptadorPistola_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UHonda_NoRegister, (int32)VTABLE_OFFSET(AAdaptadorPistola, IHonda), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAdaptadorPistola_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdaptadorPistola>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAdaptadorPistola_Statics::ClassParams = {
		&AAdaptadorPistola::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAdaptadorPistola_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAdaptadorPistola_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAdaptadorPistola_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAdaptadorPistola_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAdaptadorPistola()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAdaptadorPistola_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAdaptadorPistola, 3769583916);
	template<> TETRISUSFX01_API UClass* StaticClass<AAdaptadorPistola>()
	{
		return AAdaptadorPistola::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAdaptadorPistola(Z_Construct_UClass_AAdaptadorPistola, &AAdaptadorPistola::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AAdaptadorPistola"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdaptadorPistola);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
