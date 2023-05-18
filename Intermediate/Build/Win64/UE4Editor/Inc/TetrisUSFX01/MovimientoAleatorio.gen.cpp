// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/MovimientoAleatorio.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovimientoAleatorio() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_UMovimientoAleatorio_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UMovimientoAleatorio();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void UMovimientoAleatorio::StaticRegisterNativesUMovimientoAleatorio()
	{
	}
	UClass* Z_Construct_UClass_UMovimientoAleatorio_NoRegister()
	{
		return UMovimientoAleatorio::StaticClass();
	}
	struct Z_Construct_UClass_UMovimientoAleatorio_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovimientoAleatorio_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovimientoAleatorio_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "MovimientoAleatorio.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovimientoAleatorio_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovimientoAleatorio>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovimientoAleatorio_Statics::ClassParams = {
		&UMovimientoAleatorio::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovimientoAleatorio_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovimientoAleatorio_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovimientoAleatorio()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovimientoAleatorio_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovimientoAleatorio, 953628922);
	template<> TETRISUSFX01_API UClass* StaticClass<UMovimientoAleatorio>()
	{
		return UMovimientoAleatorio::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovimientoAleatorio(Z_Construct_UClass_UMovimientoAleatorio, &UMovimientoAleatorio::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("UMovimientoAleatorio"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovimientoAleatorio);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
