// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/AdaptadorMovimientoAleatorio_CA.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdaptadorMovimientoAleatorio_CA() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_UAdaptadorMovimientoAleatorio_CA_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UAdaptadorMovimientoAleatorio_CA();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UMovimientoAleatorio_CA();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UMovimientoAleatorio_NoRegister();
// End Cross Module References
	void UAdaptadorMovimientoAleatorio_CA::StaticRegisterNativesUAdaptadorMovimientoAleatorio_CA()
	{
	}
	UClass* Z_Construct_UClass_UAdaptadorMovimientoAleatorio_CA_NoRegister()
	{
		return UAdaptadorMovimientoAleatorio_CA::StaticClass();
	}
	struct Z_Construct_UClass_UAdaptadorMovimientoAleatorio_CA_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdaptadorMovimientoAleatorio_CA_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovimientoAleatorio_CA,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdaptadorMovimientoAleatorio_CA_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AdaptadorMovimientoAleatorio_CA.h" },
		{ "ModuleRelativePath", "AdaptadorMovimientoAleatorio_CA.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAdaptadorMovimientoAleatorio_CA_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovimientoAleatorio_NoRegister, (int32)VTABLE_OFFSET(UAdaptadorMovimientoAleatorio_CA, IMovimientoAleatorio), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdaptadorMovimientoAleatorio_CA_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdaptadorMovimientoAleatorio_CA>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdaptadorMovimientoAleatorio_CA_Statics::ClassParams = {
		&UAdaptadorMovimientoAleatorio_CA::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAdaptadorMovimientoAleatorio_CA_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAdaptadorMovimientoAleatorio_CA_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdaptadorMovimientoAleatorio_CA()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdaptadorMovimientoAleatorio_CA_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdaptadorMovimientoAleatorio_CA, 2148088740);
	template<> TETRISUSFX01_API UClass* StaticClass<UAdaptadorMovimientoAleatorio_CA>()
	{
		return UAdaptadorMovimientoAleatorio_CA::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdaptadorMovimientoAleatorio_CA(Z_Construct_UClass_UAdaptadorMovimientoAleatorio_CA, &UAdaptadorMovimientoAleatorio_CA::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("UAdaptadorMovimientoAleatorio_CA"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdaptadorMovimientoAleatorio_CA);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
