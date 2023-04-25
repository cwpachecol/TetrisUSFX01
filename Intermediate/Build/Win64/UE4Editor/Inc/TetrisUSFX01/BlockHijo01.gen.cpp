// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/BlockHijo01.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlockHijo01() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABlockHijo01_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABlockHijo01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABlock();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void ABlockHijo01::StaticRegisterNativesABlockHijo01()
	{
	}
	UClass* Z_Construct_UClass_ABlockHijo01_NoRegister()
	{
		return ABlockHijo01::StaticClass();
	}
	struct Z_Construct_UClass_ABlockHijo01_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlockHijo01_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABlock,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockHijo01_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BlockHijo01.h" },
		{ "ModuleRelativePath", "BlockHijo01.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlockHijo01_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlockHijo01>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABlockHijo01_Statics::ClassParams = {
		&ABlockHijo01::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABlockHijo01_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockHijo01_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlockHijo01()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABlockHijo01_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABlockHijo01, 1122240800);
	template<> TETRISUSFX01_API UClass* StaticClass<ABlockHijo01>()
	{
		return ABlockHijo01::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlockHijo01(Z_Construct_UClass_ABlockHijo01, &ABlockHijo01::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("ABlockHijo01"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlockHijo01);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
