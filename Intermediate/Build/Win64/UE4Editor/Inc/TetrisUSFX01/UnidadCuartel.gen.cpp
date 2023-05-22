// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/UnidadCuartel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnidadCuartel() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AUnidadCuartel_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AUnidadCuartel();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ACuartel();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
// End Cross Module References
	void AUnidadCuartel::StaticRegisterNativesAUnidadCuartel()
	{
	}
	UClass* Z_Construct_UClass_AUnidadCuartel_NoRegister()
	{
		return AUnidadCuartel::StaticClass();
	}
	struct Z_Construct_UClass_AUnidadCuartel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisualRepresentation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VisualRepresentation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnidadCuartel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACuartel,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnidadCuartel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UnidadCuartel.h" },
		{ "ModuleRelativePath", "UnidadCuartel.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnidadCuartel_Statics::NewProp_VisualRepresentation_MetaData[] = {
		{ "Comment", "// Called to bind functionality to input\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnidadCuartel.h" },
		{ "ToolTip", "Called to bind functionality to input" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnidadCuartel_Statics::NewProp_VisualRepresentation = { "VisualRepresentation", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnidadCuartel, VisualRepresentation), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnidadCuartel_Statics::NewProp_VisualRepresentation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnidadCuartel_Statics::NewProp_VisualRepresentation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUnidadCuartel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnidadCuartel_Statics::NewProp_VisualRepresentation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnidadCuartel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnidadCuartel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnidadCuartel_Statics::ClassParams = {
		&AUnidadCuartel::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUnidadCuartel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AUnidadCuartel_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUnidadCuartel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnidadCuartel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnidadCuartel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnidadCuartel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnidadCuartel, 944501539);
	template<> TETRISUSFX01_API UClass* StaticClass<AUnidadCuartel>()
	{
		return AUnidadCuartel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnidadCuartel(Z_Construct_UClass_AUnidadCuartel, &AUnidadCuartel::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AUnidadCuartel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnidadCuartel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
