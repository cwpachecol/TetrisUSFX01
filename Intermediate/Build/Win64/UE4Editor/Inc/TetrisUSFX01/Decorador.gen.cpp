// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/Decorador.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDecorador() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_ADecorador_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ADecorador();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UEstructura_NoRegister();
// End Cross Module References
	void ADecorador::StaticRegisterNativesADecorador()
	{
	}
	UClass* Z_Construct_UClass_ADecorador_NoRegister()
	{
		return ADecorador::StaticClass();
	}
	struct Z_Construct_UClass_ADecorador_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADecorador_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADecorador_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Decorador.h" },
		{ "ModuleRelativePath", "Decorador.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADecorador_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEstructura_NoRegister, (int32)VTABLE_OFFSET(ADecorador, IEstructura), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADecorador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADecorador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADecorador_Statics::ClassParams = {
		&ADecorador::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADecorador_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADecorador_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADecorador()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADecorador_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADecorador, 1047094197);
	template<> TETRISUSFX01_API UClass* StaticClass<ADecorador>()
	{
		return ADecorador::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADecorador(Z_Construct_UClass_ADecorador, &ADecorador::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("ADecorador"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADecorador);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
