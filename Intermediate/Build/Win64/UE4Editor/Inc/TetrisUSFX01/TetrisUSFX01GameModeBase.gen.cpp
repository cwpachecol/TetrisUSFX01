// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/TetrisUSFX01GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetrisUSFX01GameModeBase() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_ATetrisUSFX01GameModeBase_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ATetrisUSFX01GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABlock_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_APiece_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATetrisUSFX01GameModeBase::execDestroyActorFunction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyActorFunction();
		P_NATIVE_END;
	}
	void ATetrisUSFX01GameModeBase::StaticRegisterNativesATetrisUSFX01GameModeBase()
	{
		UClass* Class = ATetrisUSFX01GameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyActorFunction", &ATetrisUSFX01GameModeBase::execDestroyActorFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATetrisUSFX01GameModeBase_DestroyActorFunction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATetrisUSFX01GameModeBase_DestroyActorFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TetrisUSFX01GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATetrisUSFX01GameModeBase_DestroyActorFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATetrisUSFX01GameModeBase, nullptr, "DestroyActorFunction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATetrisUSFX01GameModeBase_DestroyActorFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATetrisUSFX01GameModeBase_DestroyActorFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATetrisUSFX01GameModeBase_DestroyActorFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATetrisUSFX01GameModeBase_DestroyActorFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATetrisUSFX01GameModeBase_NoRegister()
	{
		return ATetrisUSFX01GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATetrisUSFX01GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedPiece_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedPiece;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATetrisUSFX01GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATetrisUSFX01GameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATetrisUSFX01GameModeBase_DestroyActorFunction, "DestroyActorFunction" }, // 415415422
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetrisUSFX01GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TetrisUSFX01GameModeBase.h" },
		{ "ModuleRelativePath", "TetrisUSFX01GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetrisUSFX01GameModeBase_Statics::NewProp_SpawnedActor_MetaData[] = {
		{ "ModuleRelativePath", "TetrisUSFX01GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATetrisUSFX01GameModeBase_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetrisUSFX01GameModeBase, SpawnedActor), Z_Construct_UClass_ABlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATetrisUSFX01GameModeBase_Statics::NewProp_SpawnedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetrisUSFX01GameModeBase_Statics::NewProp_SpawnedActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetrisUSFX01GameModeBase_Statics::NewProp_SpawnedPiece_MetaData[] = {
		{ "ModuleRelativePath", "TetrisUSFX01GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATetrisUSFX01GameModeBase_Statics::NewProp_SpawnedPiece = { "SpawnedPiece", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetrisUSFX01GameModeBase, SpawnedPiece), Z_Construct_UClass_APiece_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATetrisUSFX01GameModeBase_Statics::NewProp_SpawnedPiece_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetrisUSFX01GameModeBase_Statics::NewProp_SpawnedPiece_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATetrisUSFX01GameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetrisUSFX01GameModeBase_Statics::NewProp_SpawnedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetrisUSFX01GameModeBase_Statics::NewProp_SpawnedPiece,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATetrisUSFX01GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATetrisUSFX01GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATetrisUSFX01GameModeBase_Statics::ClassParams = {
		&ATetrisUSFX01GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATetrisUSFX01GameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATetrisUSFX01GameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATetrisUSFX01GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATetrisUSFX01GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATetrisUSFX01GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATetrisUSFX01GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATetrisUSFX01GameModeBase, 3477774194);
	template<> TETRISUSFX01_API UClass* StaticClass<ATetrisUSFX01GameModeBase>()
	{
		return ATetrisUSFX01GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATetrisUSFX01GameModeBase(Z_Construct_UClass_ATetrisUSFX01GameModeBase, &ATetrisUSFX01GameModeBase::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("ATetrisUSFX01GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATetrisUSFX01GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
