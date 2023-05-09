// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/BloqueMetal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueMetal() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABloqueMetal_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABloqueMetal();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UBloque_NoRegister();
// End Cross Module References
	void ABloqueMetal::StaticRegisterNativesABloqueMetal()
	{
	}
	UClass* Z_Construct_UClass_ABloqueMetal_NoRegister()
	{
		return ABloqueMetal::StaticClass();
	}
	struct Z_Construct_UClass_ABloqueMetal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABloqueMetal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloqueMetal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BloqueMetal.h" },
		{ "ModuleRelativePath", "BloqueMetal.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABloqueMetal_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBloque_NoRegister, (int32)VTABLE_OFFSET(ABloqueMetal, IBloque), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABloqueMetal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueMetal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABloqueMetal_Statics::ClassParams = {
		&ABloqueMetal::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABloqueMetal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueMetal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABloqueMetal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABloqueMetal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABloqueMetal, 3605360986);
	template<> TETRISUSFX01_API UClass* StaticClass<ABloqueMetal>()
	{
		return ABloqueMetal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABloqueMetal(Z_Construct_UClass_ABloqueMetal, &ABloqueMetal::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("ABloqueMetal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueMetal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
