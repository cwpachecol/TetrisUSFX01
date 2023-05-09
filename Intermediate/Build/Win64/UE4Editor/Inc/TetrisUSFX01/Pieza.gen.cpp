// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/Pieza.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePieza() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_APieza_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_APieza();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UPiezaEstructura_NoRegister();
// End Cross Module References
	void APieza::StaticRegisterNativesAPieza()
	{
	}
	UClass* Z_Construct_UClass_APieza_NoRegister()
	{
		return APieza::StaticClass();
	}
	struct Z_Construct_UClass_APieza_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APieza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APieza_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pieza.h" },
		{ "ModuleRelativePath", "Pieza.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APieza_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPiezaEstructura_NoRegister, (int32)VTABLE_OFFSET(APieza, IPiezaEstructura), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APieza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APieza>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APieza_Statics::ClassParams = {
		&APieza::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APieza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APieza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APieza()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APieza_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APieza, 2713535535);
	template<> TETRISUSFX01_API UClass* StaticClass<APieza>()
	{
		return APieza::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APieza(Z_Construct_UClass_APieza, &APieza::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("APieza"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APieza);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
