// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MaterialReader/Public/MaterialReaderBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialReaderBPLibrary() {}
// Cross Module References
	MATERIALREADER_API UScriptStruct* Z_Construct_UScriptStruct_FMatierialProperty();
	UPackage* Z_Construct_UPackage__Script_MaterialReader();
	MATERIALREADER_API UScriptStruct* Z_Construct_UScriptStruct_FFontParameter();
	MATERIALREADER_API UScriptStruct* Z_Construct_UScriptStruct_FTextureParameter();
	MATERIALREADER_API UScriptStruct* Z_Construct_UScriptStruct_FVectorParameter();
	MATERIALREADER_API UScriptStruct* Z_Construct_UScriptStruct_FFloatParameter();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialParameterInfo();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	MATERIALREADER_API UClass* Z_Construct_UClass_UMaterialReaderBPLibrary_NoRegister();
	MATERIALREADER_API UClass* Z_Construct_UClass_UMaterialReaderBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MATERIALREADER_API UFunction* Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllFontParameterDefaultValue();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	MATERIALREADER_API UFunction* Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllScalarParameterDefaultValue();
	MATERIALREADER_API UFunction* Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllTextureParameterDefaultValue();
	MATERIALREADER_API UFunction* Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllVectorParameterDefaultValue();
	MATERIALREADER_API UFunction* Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatDependentFunctions();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInterface_NoRegister();
	MATERIALREADER_API UFunction* Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatUsedTextures();
// End Cross Module References
class UScriptStruct* FMatierialProperty::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MATERIALREADER_API uint32 Get_Z_Construct_UScriptStruct_FMatierialProperty_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatierialProperty, Z_Construct_UPackage__Script_MaterialReader(), TEXT("MatierialProperty"), sizeof(FMatierialProperty), Get_Z_Construct_UScriptStruct_FMatierialProperty_Hash());
	}
	return Singleton;
}
template<> MATERIALREADER_API UScriptStruct* StaticStruct<FMatierialProperty>()
{
	return FMatierialProperty::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMatierialProperty(FMatierialProperty::StaticStruct, TEXT("/Script/MaterialReader"), TEXT("MatierialProperty"), false, nullptr, nullptr);
static struct FScriptStruct_MaterialReader_StaticRegisterNativesFMatierialProperty
{
	FScriptStruct_MaterialReader_StaticRegisterNativesFMatierialProperty()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MatierialProperty")),new UScriptStruct::TCppStructOps<FMatierialProperty>);
	}
} ScriptStruct_MaterialReader_StaticRegisterNativesFMatierialProperty;
	struct Z_Construct_UScriptStruct_FMatierialProperty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FontParameters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FontParameters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TextureParameters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureParameters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VectorParameters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorParameters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FloatParameters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatParameters_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatierialProperty_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MaterialReaderBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatierialProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatierialProperty>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatierialProperty_Statics::NewProp_FontParameters_MetaData[] = {
		{ "Category", "FontParameters" },
		{ "ModuleRelativePath", "Public/MaterialReaderBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMatierialProperty_Statics::NewProp_FontParameters = { "FontParameters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatierialProperty, FontParameters), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatierialProperty_Statics::NewProp_FontParameters_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMatierialProperty_Statics::NewProp_FontParameters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMatierialProperty_Statics::NewProp_FontParameters_Inner = { "FontParameters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFontParameter, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatierialProperty_Statics::NewProp_TextureParameters_MetaData[] = {
		{ "Category", "TextureParameters" },
		{ "ModuleRelativePath", "Public/MaterialReaderBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMatierialProperty_Statics::NewProp_TextureParameters = { "TextureParameters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatierialProperty, TextureParameters), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatierialProperty_Statics::NewProp_TextureParameters_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMatierialProperty_Statics::NewProp_TextureParameters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMatierialProperty_Statics::NewProp_TextureParameters_Inner = { "TextureParameters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTextureParameter, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatierialProperty_Statics::NewProp_VectorParameters_MetaData[] = {
		{ "Category", "VectorParameters" },
		{ "ModuleRelativePath", "Public/MaterialReaderBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMatierialProperty_Statics::NewProp_VectorParameters = { "VectorParameters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatierialProperty, VectorParameters), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatierialProperty_Statics::NewProp_VectorParameters_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMatierialProperty_Statics::NewProp_VectorParameters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMatierialProperty_Statics::NewProp_VectorParameters_Inner = { "VectorParameters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVectorParameter, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatierialProperty_Statics::NewProp_FloatParameters_MetaData[] = {
		{ "Category", "FloatParameters" },
		{ "ModuleRelativePath", "Public/MaterialReaderBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMatierialProperty_Statics::NewProp_FloatParameters = { "FloatParameters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatierialProperty, FloatParameters), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatierialProperty_Statics::NewProp_FloatParameters_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMatierialProperty_Statics::NewProp_FloatParameters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMatierialProperty_Statics::NewProp_FloatParameters_Inner = { "FloatParameters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFloatParameter, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatierialProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatierialProperty_Statics::NewProp_FontParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatierialProperty_Statics::NewProp_FontParameters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatierialProperty_Statics::NewProp_TextureParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatierialProperty_Statics::NewProp_TextureParameters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatierialProperty_Statics::NewProp_VectorParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatierialProperty_Statics::NewProp_VectorParameters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatierialProperty_Statics::NewProp_FloatParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatierialProperty_Statics::NewProp_FloatParameters_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatierialProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MaterialReader,
		nullptr,
		&NewStructOps,
		"MatierialProperty",
		sizeof(FMatierialProperty),
		alignof(FMatierialProperty),
		Z_Construct_UScriptStruct_FMatierialProperty_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMatierialProperty_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatierialProperty_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMatierialProperty_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatierialProperty()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMatierialProperty_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MaterialReader();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MatierialProperty"), sizeof(FMatierialProperty), Get_Z_Construct_UScriptStruct_FMatierialProperty_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMatierialProperty_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMatierialProperty_Hash() { return 3779934232U; }
class UScriptStruct* FFontParameter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MATERIALREADER_API uint32 Get_Z_Construct_UScriptStruct_FFontParameter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFontParameter, Z_Construct_UPackage__Script_MaterialReader(), TEXT("FontParameter"), sizeof(FFontParameter), Get_Z_Construct_UScriptStruct_FFontParameter_Hash());
	}
	return Singleton;
}
template<> MATERIALREADER_API UScriptStruct* StaticStruct<FFontParameter>()
{
	return FFontParameter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFontParameter(FFontParameter::StaticStruct, TEXT("/Script/MaterialReader"), TEXT("FontParameter"), false, nullptr, nullptr);
static struct FScriptStruct_MaterialReader_StaticRegisterNativesFFontParameter
{
	FScriptStruct_MaterialReader_StaticRegisterNativesFFontParameter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FontParameter")),new UScriptStruct::TCppStructOps<FFontParameter>);
	}
} ScriptStruct_MaterialReader_StaticRegisterNativesFFontParameter;
	struct Z_Construct_UScriptStruct_FFontParameter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutFontPage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutFontPage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InParameterInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InParameterInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontParameter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/MaterialReaderBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFontParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFontParameter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontParameter_Statics::NewProp_OutFontPage_MetaData[] = {
		{ "Category", "FFontParameter" },
		{ "ModuleRelativePath", "Public/MaterialReaderBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFontParameter_Statics::NewProp_OutFontPage = { "OutFontPage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontParameter, OutFontPage), METADATA_PARAMS(Z_Construct_UScriptStruct_FFontParameter_Statics::NewProp_OutFontPage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontParameter_Statics::NewProp_OutFontPage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontParameter_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "FFontParameter" },
		{ "ModuleRelativePath", "Public/MaterialReaderBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFontParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontParameter, Value), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFontParameter_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontParameter_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontParameter_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "FFontParameter" },
		{ "ModuleRelativePath", "Public/MaterialReaderBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFontParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontParameter, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FFontParameter_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontParameter_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontParameter_Statics::NewProp_InParameterInfo_MetaData[] = {
		{ "Category", "FFontParameter" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/MaterialReaderBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFontParameter_Statics::NewProp_InParameterInfo = { "InParameterInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFontParameter, InParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FFontParameter_Statics::NewProp_InParameterInfo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontParameter_Statics::NewProp_InParameterInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFontParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontParameter_Statics::NewProp_OutFontPage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontParameter_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontParameter_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontParameter_Statics::NewProp_InParameterInfo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFontParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MaterialReader,
		nullptr,
		&NewStructOps,
		"FontParameter",
		sizeof(FFontParameter),
		alignof(FFontParameter),
		Z_Construct_UScriptStruct_FFontParameter_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FFontParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFontParameter_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFontParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFontParameter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFontParameter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MaterialReader();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FontParameter"), sizeof(FFontParameter), Get_Z_Construct_UScriptStruct_FFontParameter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFontParameter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFontParameter_Hash() { return 2077281726U; }
class UScriptStruct* FTextureParameter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MATERIALREADER_API uint32 Get_Z_Construct_UScriptStruct_FTextureParameter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextureParameter, Z_Construct_UPackage__Script_MaterialReader(), TEXT("TextureParameter"), sizeof(FTextureParameter), Get_Z_Construct_UScriptStruct_FTextureParameter_Hash());
	}
	return Singleton;
}
template<> MATERIALREADER_API UScriptStruct* StaticStruct<FTextureParameter>()
{
	return FTextureParameter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTextureParameter(FTextureParameter::StaticStruct, TEXT("/Script/MaterialReader"), TEXT("TextureParameter"), false, nullptr, nullptr);
static struct FScriptStruct_MaterialReader_StaticRegisterNativesFTextureParameter
{
	FScriptStruct_MaterialReader_StaticRegisterNativesFTextureParameter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TextureParameter")),new UScriptStruct::TCppStructOps<FTextureParameter>);
	}
} ScriptStruct_MaterialReader_StaticRegisterNativesFTextureParameter;
	struct Z_Construct_UScriptStruct_FTextureParameter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InParameterInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InParameterInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureParameter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/MaterialReaderBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTextureParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextureParameter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureParameter_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "FTextureParameter" },
		{ "ModuleRelativePath", "Public/MaterialReaderBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTextureParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureParameter, Value), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureParameter_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureParameter_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureParameter_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "FTextureParameter" },
		{ "ModuleRelativePath", "Public/MaterialReaderBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTextureParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureParameter, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureParameter_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureParameter_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureParameter_Statics::NewProp_InParameterInfo_MetaData[] = {
		{ "Category", "FTextureParameter" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/MaterialReaderBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextureParameter_Statics::NewProp_InParameterInfo = { "InParameterInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureParameter, InParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureParameter_Statics::NewProp_InParameterInfo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureParameter_Statics::NewProp_InParameterInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextureParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureParameter_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureParameter_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureParameter_Statics::NewProp_InParameterInfo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextureParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MaterialReader,
		nullptr,
		&NewStructOps,
		"TextureParameter",
		sizeof(FTextureParameter),
		alignof(FTextureParameter),
		Z_Construct_UScriptStruct_FTextureParameter_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureParameter_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTextureParameter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTextureParameter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MaterialReader();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TextureParameter"), sizeof(FTextureParameter), Get_Z_Construct_UScriptStruct_FTextureParameter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTextureParameter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTextureParameter_Hash() { return 1036658270U; }
class UScriptStruct* FVectorParameter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MATERIALREADER_API uint32 Get_Z_Construct_UScriptStruct_FVectorParameter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVectorParameter, Z_Construct_UPackage__Script_MaterialReader(), TEXT("VectorParameter"), sizeof(FVectorParameter), Get_Z_Construct_UScriptStruct_FVectorParameter_Hash());
	}
	return Singleton;
}
template<> MATERIALREADER_API UScriptStruct* StaticStruct<FVectorParameter>()
{
	return FVectorParameter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVectorParameter(FVectorParameter::StaticStruct, TEXT("/Script/MaterialReader"), TEXT("VectorParameter"), false, nullptr, nullptr);
static struct FScriptStruct_MaterialReader_StaticRegisterNativesFVectorParameter
{
	FScriptStruct_MaterialReader_StaticRegisterNativesFVectorParameter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VectorParameter")),new UScriptStruct::TCppStructOps<FVectorParameter>);
	}
} ScriptStruct_MaterialReader_StaticRegisterNativesFVectorParameter;
	struct Z_Construct_UScriptStruct_FVectorParameter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InParameterInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InParameterInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorParameter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MaterialReaderBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVectorParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVectorParameter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorParameter_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "FVectorParameter" },
		{ "ModuleRelativePath", "Public/MaterialReaderBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVectorParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVectorParameter, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorParameter_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorParameter_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorParameter_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "FVectorParameter" },
		{ "ModuleRelativePath", "Public/MaterialReaderBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVectorParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVectorParameter, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorParameter_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorParameter_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorParameter_Statics::NewProp_InParameterInfo_MetaData[] = {
		{ "Category", "FVectorParameter" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/MaterialReaderBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVectorParameter_Statics::NewProp_InParameterInfo = { "InParameterInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVectorParameter, InParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorParameter_Statics::NewProp_InParameterInfo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorParameter_Statics::NewProp_InParameterInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVectorParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorParameter_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorParameter_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorParameter_Statics::NewProp_InParameterInfo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVectorParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MaterialReader,
		nullptr,
		&NewStructOps,
		"VectorParameter",
		sizeof(FVectorParameter),
		alignof(FVectorParameter),
		Z_Construct_UScriptStruct_FVectorParameter_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorParameter_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVectorParameter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVectorParameter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MaterialReader();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VectorParameter"), sizeof(FVectorParameter), Get_Z_Construct_UScriptStruct_FVectorParameter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVectorParameter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVectorParameter_Hash() { return 2128297692U; }
class UScriptStruct* FFloatParameter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MATERIALREADER_API uint32 Get_Z_Construct_UScriptStruct_FFloatParameter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFloatParameter, Z_Construct_UPackage__Script_MaterialReader(), TEXT("FloatParameter"), sizeof(FFloatParameter), Get_Z_Construct_UScriptStruct_FFloatParameter_Hash());
	}
	return Singleton;
}
template<> MATERIALREADER_API UScriptStruct* StaticStruct<FFloatParameter>()
{
	return FFloatParameter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFloatParameter(FFloatParameter::StaticStruct, TEXT("/Script/MaterialReader"), TEXT("FloatParameter"), false, nullptr, nullptr);
static struct FScriptStruct_MaterialReader_StaticRegisterNativesFFloatParameter
{
	FScriptStruct_MaterialReader_StaticRegisterNativesFFloatParameter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FloatParameter")),new UScriptStruct::TCppStructOps<FFloatParameter>);
	}
} ScriptStruct_MaterialReader_StaticRegisterNativesFFloatParameter;
	struct Z_Construct_UScriptStruct_FFloatParameter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InParameterInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InParameterInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatParameter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "ModuleRelativePath", "Public/MaterialReaderBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFloatParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFloatParameter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatParameter_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "FFloatParameter" },
		{ "ModuleRelativePath", "Public/MaterialReaderBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFloatParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFloatParameter, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatParameter_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatParameter_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatParameter_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "FFloatParameter" },
		{ "ModuleRelativePath", "Public/MaterialReaderBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFloatParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFloatParameter, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatParameter_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatParameter_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatParameter_Statics::NewProp_InParameterInfo_MetaData[] = {
		{ "Category", "FFloatParameter" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/MaterialReaderBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFloatParameter_Statics::NewProp_InParameterInfo = { "InParameterInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFloatParameter, InParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatParameter_Statics::NewProp_InParameterInfo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatParameter_Statics::NewProp_InParameterInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFloatParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatParameter_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatParameter_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatParameter_Statics::NewProp_InParameterInfo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFloatParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MaterialReader,
		nullptr,
		&NewStructOps,
		"FloatParameter",
		sizeof(FFloatParameter),
		alignof(FFloatParameter),
		Z_Construct_UScriptStruct_FFloatParameter_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatParameter_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFloatParameter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFloatParameter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MaterialReader();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FloatParameter"), sizeof(FFloatParameter), Get_Z_Construct_UScriptStruct_FFloatParameter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFloatParameter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFloatParameter_Hash() { return 58815648U; }
	void UMaterialReaderBPLibrary::StaticRegisterNativesUMaterialReaderBPLibrary()
	{
		UClass* Class = UMaterialReaderBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMatAllFontParameterDefaultValue", &UMaterialReaderBPLibrary::execGetMatAllFontParameterDefaultValue },
			{ "GetMatAllScalarParameterDefaultValue", &UMaterialReaderBPLibrary::execGetMatAllScalarParameterDefaultValue },
			{ "GetMatAllTextureParameterDefaultValue", &UMaterialReaderBPLibrary::execGetMatAllTextureParameterDefaultValue },
			{ "GetMatAllVectorParameterDefaultValue", &UMaterialReaderBPLibrary::execGetMatAllVectorParameterDefaultValue },
			{ "GetMatDependentFunctions", &UMaterialReaderBPLibrary::execGetMatDependentFunctions },
			{ "GetMatUsedTextures", &UMaterialReaderBPLibrary::execGetMatUsedTextures },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllFontParameterDefaultValue_Statics
	{
		struct MaterialReaderBPLibrary_eventGetMatAllFontParameterDefaultValue_Parms
		{
			UMaterialInterface* MI;
			TArray<FFontParameter> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MI;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllFontParameterDefaultValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialReaderBPLibrary_eventGetMatAllFontParameterDefaultValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllFontParameterDefaultValue_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFontParameter, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllFontParameterDefaultValue_Statics::NewProp_MI = { "MI", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialReaderBPLibrary_eventGetMatAllFontParameterDefaultValue_Parms, MI), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllFontParameterDefaultValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllFontParameterDefaultValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllFontParameterDefaultValue_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllFontParameterDefaultValue_Statics::NewProp_MI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllFontParameterDefaultValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialReader" },
		{ "ModuleRelativePath", "Public/MaterialReaderBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllFontParameterDefaultValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialReaderBPLibrary, nullptr, "GetMatAllFontParameterDefaultValue", nullptr, nullptr, sizeof(MaterialReaderBPLibrary_eventGetMatAllFontParameterDefaultValue_Parms), Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllFontParameterDefaultValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllFontParameterDefaultValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllFontParameterDefaultValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllFontParameterDefaultValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllFontParameterDefaultValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllFontParameterDefaultValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllScalarParameterDefaultValue_Statics
	{
		struct MaterialReaderBPLibrary_eventGetMatAllScalarParameterDefaultValue_Parms
		{
			UMaterialInterface* MI;
			TArray<FFloatParameter> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MI;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllScalarParameterDefaultValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialReaderBPLibrary_eventGetMatAllScalarParameterDefaultValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllScalarParameterDefaultValue_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFloatParameter, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllScalarParameterDefaultValue_Statics::NewProp_MI = { "MI", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialReaderBPLibrary_eventGetMatAllScalarParameterDefaultValue_Parms, MI), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllScalarParameterDefaultValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllScalarParameterDefaultValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllScalarParameterDefaultValue_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllScalarParameterDefaultValue_Statics::NewProp_MI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllScalarParameterDefaultValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialReader" },
		{ "ModuleRelativePath", "Public/MaterialReaderBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllScalarParameterDefaultValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialReaderBPLibrary, nullptr, "GetMatAllScalarParameterDefaultValue", nullptr, nullptr, sizeof(MaterialReaderBPLibrary_eventGetMatAllScalarParameterDefaultValue_Parms), Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllScalarParameterDefaultValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllScalarParameterDefaultValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllScalarParameterDefaultValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllScalarParameterDefaultValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllScalarParameterDefaultValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllScalarParameterDefaultValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllTextureParameterDefaultValue_Statics
	{
		struct MaterialReaderBPLibrary_eventGetMatAllTextureParameterDefaultValue_Parms
		{
			UMaterialInterface* MI;
			TArray<FTextureParameter> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MI;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllTextureParameterDefaultValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialReaderBPLibrary_eventGetMatAllTextureParameterDefaultValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllTextureParameterDefaultValue_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTextureParameter, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllTextureParameterDefaultValue_Statics::NewProp_MI = { "MI", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialReaderBPLibrary_eventGetMatAllTextureParameterDefaultValue_Parms, MI), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllTextureParameterDefaultValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllTextureParameterDefaultValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllTextureParameterDefaultValue_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllTextureParameterDefaultValue_Statics::NewProp_MI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllTextureParameterDefaultValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialReader" },
		{ "ModuleRelativePath", "Public/MaterialReaderBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllTextureParameterDefaultValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialReaderBPLibrary, nullptr, "GetMatAllTextureParameterDefaultValue", nullptr, nullptr, sizeof(MaterialReaderBPLibrary_eventGetMatAllTextureParameterDefaultValue_Parms), Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllTextureParameterDefaultValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllTextureParameterDefaultValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllTextureParameterDefaultValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllTextureParameterDefaultValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllTextureParameterDefaultValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllTextureParameterDefaultValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllVectorParameterDefaultValue_Statics
	{
		struct MaterialReaderBPLibrary_eventGetMatAllVectorParameterDefaultValue_Parms
		{
			UMaterialInterface* MI;
			TArray<FVectorParameter> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MI;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllVectorParameterDefaultValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialReaderBPLibrary_eventGetMatAllVectorParameterDefaultValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllVectorParameterDefaultValue_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVectorParameter, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllVectorParameterDefaultValue_Statics::NewProp_MI = { "MI", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialReaderBPLibrary_eventGetMatAllVectorParameterDefaultValue_Parms, MI), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllVectorParameterDefaultValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllVectorParameterDefaultValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllVectorParameterDefaultValue_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllVectorParameterDefaultValue_Statics::NewProp_MI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllVectorParameterDefaultValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialReader" },
		{ "ModuleRelativePath", "Public/MaterialReaderBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllVectorParameterDefaultValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialReaderBPLibrary, nullptr, "GetMatAllVectorParameterDefaultValue", nullptr, nullptr, sizeof(MaterialReaderBPLibrary_eventGetMatAllVectorParameterDefaultValue_Parms), Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllVectorParameterDefaultValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllVectorParameterDefaultValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllVectorParameterDefaultValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllVectorParameterDefaultValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllVectorParameterDefaultValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllVectorParameterDefaultValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatDependentFunctions_Statics
	{
		struct MaterialReaderBPLibrary_eventGetMatDependentFunctions_Parms
		{
			UMaterialInterface* MI;
			TArray<UMaterialFunctionInterface*> DependentFunctions;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DependentFunctions;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DependentFunctions_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MI;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatDependentFunctions_Statics::NewProp_DependentFunctions = { "DependentFunctions", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialReaderBPLibrary_eventGetMatDependentFunctions_Parms, DependentFunctions), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatDependentFunctions_Statics::NewProp_DependentFunctions_Inner = { "DependentFunctions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialFunctionInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatDependentFunctions_Statics::NewProp_MI = { "MI", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialReaderBPLibrary_eventGetMatDependentFunctions_Parms, MI), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatDependentFunctions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatDependentFunctions_Statics::NewProp_DependentFunctions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatDependentFunctions_Statics::NewProp_DependentFunctions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatDependentFunctions_Statics::NewProp_MI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatDependentFunctions_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialReader" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/MaterialReaderBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatDependentFunctions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialReaderBPLibrary, nullptr, "GetMatDependentFunctions", nullptr, nullptr, sizeof(MaterialReaderBPLibrary_eventGetMatDependentFunctions_Parms), Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatDependentFunctions_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatDependentFunctions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatDependentFunctions_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatDependentFunctions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatDependentFunctions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatDependentFunctions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatUsedTextures_Statics
	{
		struct MaterialReaderBPLibrary_eventGetMatUsedTextures_Parms
		{
			UMaterialInterface* MI;
			TArray<UTexture*> OutTextures;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutTextures;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTextures_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MI;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatUsedTextures_Statics::NewProp_OutTextures = { "OutTextures", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialReaderBPLibrary_eventGetMatUsedTextures_Parms, OutTextures), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatUsedTextures_Statics::NewProp_OutTextures_Inner = { "OutTextures", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatUsedTextures_Statics::NewProp_MI = { "MI", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialReaderBPLibrary_eventGetMatUsedTextures_Parms, MI), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatUsedTextures_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatUsedTextures_Statics::NewProp_OutTextures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatUsedTextures_Statics::NewProp_OutTextures_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatUsedTextures_Statics::NewProp_MI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatUsedTextures_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialReader" },
		{ "ModuleRelativePath", "Public/MaterialReaderBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatUsedTextures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialReaderBPLibrary, nullptr, "GetMatUsedTextures", nullptr, nullptr, sizeof(MaterialReaderBPLibrary_eventGetMatUsedTextures_Parms), Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatUsedTextures_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatUsedTextures_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatUsedTextures_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatUsedTextures_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatUsedTextures()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatUsedTextures_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMaterialReaderBPLibrary_NoRegister()
	{
		return UMaterialReaderBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialReaderBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialReaderBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MaterialReader,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMaterialReaderBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllFontParameterDefaultValue, "GetMatAllFontParameterDefaultValue" }, // 346882194
		{ &Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllScalarParameterDefaultValue, "GetMatAllScalarParameterDefaultValue" }, // 1033937258
		{ &Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllTextureParameterDefaultValue, "GetMatAllTextureParameterDefaultValue" }, // 3333574268
		{ &Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatAllVectorParameterDefaultValue, "GetMatAllVectorParameterDefaultValue" }, // 144310758
		{ &Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatDependentFunctions, "GetMatDependentFunctions" }, // 2282344613
		{ &Z_Construct_UFunction_UMaterialReaderBPLibrary_GetMatUsedTextures, "GetMatUsedTextures" }, // 2830845144
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialReaderBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MaterialReaderBPLibrary.h" },
		{ "ModuleRelativePath", "Public/MaterialReaderBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialReaderBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialReaderBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialReaderBPLibrary_Statics::ClassParams = {
		&UMaterialReaderBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialReaderBPLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialReaderBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialReaderBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialReaderBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialReaderBPLibrary, 12416499);
	template<> MATERIALREADER_API UClass* StaticClass<UMaterialReaderBPLibrary>()
	{
		return UMaterialReaderBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialReaderBPLibrary(Z_Construct_UClass_UMaterialReaderBPLibrary, &UMaterialReaderBPLibrary::StaticClass, TEXT("/Script/MaterialReader"), TEXT("UMaterialReaderBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialReaderBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
