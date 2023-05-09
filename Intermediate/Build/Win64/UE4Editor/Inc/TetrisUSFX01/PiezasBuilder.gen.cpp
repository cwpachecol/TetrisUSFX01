// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/PiezasBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePiezasBuilder() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_UPiezasBuilder_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UPiezasBuilder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void UPiezasBuilder::StaticRegisterNativesUPiezasBuilder()
	{
	}
	UClass* Z_Construct_UClass_UPiezasBuilder_NoRegister()
	{
		return UPiezasBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UPiezasBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPiezasBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPiezasBuilder_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "PiezasBuilder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPiezasBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPiezasBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPiezasBuilder_Statics::ClassParams = {
		&UPiezasBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPiezasBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPiezasBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPiezasBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPiezasBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPiezasBuilder, 3522517566);
	template<> TETRISUSFX01_API UClass* StaticClass<UPiezasBuilder>()
	{
		return UPiezasBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPiezasBuilder(Z_Construct_UClass_UPiezasBuilder, &UPiezasBuilder::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("UPiezasBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPiezasBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
