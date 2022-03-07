// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MaterialReader/Public/MaterialReaderActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialReaderActor() {}
// Cross Module References
	MATERIALREADER_API UClass* Z_Construct_UClass_AMaterialReaderActor_NoRegister();
	MATERIALREADER_API UClass* Z_Construct_UClass_AMaterialReaderActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MaterialReader();
	MATERIALREADER_API UFunction* Z_Construct_UFunction_AMaterialReaderActor_InitConstruct();
	MATERIALREADER_API UFunction* Z_Construct_UFunction_AMaterialReaderActor_ResetPropertys();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	MATERIALREADER_API UScriptStruct* Z_Construct_UScriptStruct_FMatierialProperty();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AMaterialReaderActor::StaticRegisterNativesAMaterialReaderActor()
	{
		UClass* Class = AMaterialReaderActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitConstruct", &AMaterialReaderActor::execInitConstruct },
			{ "ResetPropertys", &AMaterialReaderActor::execResetPropertys },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMaterialReaderActor_InitConstruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaterialReaderActor_InitConstruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "Init" },
		{ "ModuleRelativePath", "Public/MaterialReaderActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaterialReaderActor_InitConstruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaterialReaderActor, nullptr, "InitConstruct", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaterialReaderActor_InitConstruct_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMaterialReaderActor_InitConstruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaterialReaderActor_InitConstruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaterialReaderActor_InitConstruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaterialReaderActor_ResetPropertys_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaterialReaderActor_ResetPropertys_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "PressThisIfYouMaterialPropertyNotUpdated" },
		{ "ModuleRelativePath", "Public/MaterialReaderActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaterialReaderActor_ResetPropertys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaterialReaderActor, nullptr, "ResetPropertys", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaterialReaderActor_ResetPropertys_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMaterialReaderActor_ResetPropertys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaterialReaderActor_ResetPropertys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaterialReaderActor_ResetPropertys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMaterialReaderActor_NoRegister()
	{
		return AMaterialReaderActor::StaticClass();
	}
	struct Z_Construct_UClass_AMaterialReaderActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatParas_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MatParas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SM_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SM;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMaterialReaderActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MaterialReader,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMaterialReaderActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMaterialReaderActor_InitConstruct, "InitConstruct" }, // 2077533098
		{ &Z_Construct_UFunction_AMaterialReaderActor_ResetPropertys, "ResetPropertys" }, // 1918092650
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaterialReaderActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MaterialReaderActor.h" },
		{ "ModuleRelativePath", "Public/MaterialReaderActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaterialReaderActor_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "PutTestMaterialHere" },
		{ "ModuleRelativePath", "Public/MaterialReaderActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMaterialReaderActor_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaterialReaderActor, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMaterialReaderActor_Statics::NewProp_Material_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMaterialReaderActor_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaterialReaderActor_Statics::NewProp_MatParas_MetaData[] = {
		{ "Category", "CheckParametersHere" },
		{ "ModuleRelativePath", "Public/MaterialReaderActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMaterialReaderActor_Statics::NewProp_MatParas = { "MatParas", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaterialReaderActor, MatParas), Z_Construct_UScriptStruct_FMatierialProperty, METADATA_PARAMS(Z_Construct_UClass_AMaterialReaderActor_Statics::NewProp_MatParas_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMaterialReaderActor_Statics::NewProp_MatParas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaterialReaderActor_Statics::NewProp_SM_MetaData[] = {
		{ "Category", "TestMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MaterialReaderActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMaterialReaderActor_Statics::NewProp_SM = { "SM", nullptr, (EPropertyFlags)0x0010000000080809, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaterialReaderActor, SM), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMaterialReaderActor_Statics::NewProp_SM_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMaterialReaderActor_Statics::NewProp_SM_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMaterialReaderActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaterialReaderActor_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaterialReaderActor_Statics::NewProp_MatParas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaterialReaderActor_Statics::NewProp_SM,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMaterialReaderActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMaterialReaderActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMaterialReaderActor_Statics::ClassParams = {
		&AMaterialReaderActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMaterialReaderActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AMaterialReaderActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMaterialReaderActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMaterialReaderActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMaterialReaderActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMaterialReaderActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMaterialReaderActor, 2093550097);
	template<> MATERIALREADER_API UClass* StaticClass<AMaterialReaderActor>()
	{
		return AMaterialReaderActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMaterialReaderActor(Z_Construct_UClass_AMaterialReaderActor, &AMaterialReaderActor::StaticClass, TEXT("/Script/MaterialReader"), TEXT("AMaterialReaderActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMaterialReaderActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
