// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/Board.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoard() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABoard_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABoard();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void ABoard::StaticRegisterNativesABoard()
	{
	}
	UClass* Z_Construct_UClass_ABoard_NoRegister()
	{
		return ABoard::StaticClass();
	}
	struct Z_Construct_UClass_ABoard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Board.h" },
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABoard_Statics::ClassParams = {
		&ABoard::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABoard_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoard, 2352777754);
	template<> TETRISUSFX01_API UClass* StaticClass<ABoard>()
	{
		return ABoard::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoard(Z_Construct_UClass_ABoard, &ABoard::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("ABoard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
