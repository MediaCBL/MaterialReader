// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
class UTexture;
class UMaterialFunctionInterface;
struct FFontParameter;
struct FTextureParameter;
struct FVectorParameter;
struct FFloatParameter;
#ifdef MATERIALREADER_MaterialReaderBPLibrary_generated_h
#error "MaterialReaderBPLibrary.generated.h already included, missing '#pragma once' in MaterialReaderBPLibrary.h"
#endif
#define MATERIALREADER_MaterialReaderBPLibrary_generated_h

#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MaterialReader_Source_MaterialReader_Public_MaterialReaderBPLibrary_h_84_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMatierialProperty_Statics; \
	MATERIALREADER_API static class UScriptStruct* StaticStruct();


template<> MATERIALREADER_API UScriptStruct* StaticStruct<struct FMatierialProperty>();

#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MaterialReader_Source_MaterialReader_Public_MaterialReaderBPLibrary_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFontParameter_Statics; \
	MATERIALREADER_API static class UScriptStruct* StaticStruct();


template<> MATERIALREADER_API UScriptStruct* StaticStruct<struct FFontParameter>();

#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MaterialReader_Source_MaterialReader_Public_MaterialReaderBPLibrary_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTextureParameter_Statics; \
	MATERIALREADER_API static class UScriptStruct* StaticStruct();


template<> MATERIALREADER_API UScriptStruct* StaticStruct<struct FTextureParameter>();

#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MaterialReader_Source_MaterialReader_Public_MaterialReaderBPLibrary_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVectorParameter_Statics; \
	MATERIALREADER_API static class UScriptStruct* StaticStruct();


template<> MATERIALREADER_API UScriptStruct* StaticStruct<struct FVectorParameter>();

#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MaterialReader_Source_MaterialReader_Public_MaterialReaderBPLibrary_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFloatParameter_Statics; \
	MATERIALREADER_API static class UScriptStruct* StaticStruct();


template<> MATERIALREADER_API UScriptStruct* StaticStruct<struct FFloatParameter>();

#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MaterialReader_Source_MaterialReader_Public_MaterialReaderBPLibrary_h_100_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMatUsedTextures) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_MI); \
		P_GET_TARRAY_REF(UTexture*,Z_Param_Out_OutTextures); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMaterialReaderBPLibrary::GetMatUsedTextures(Z_Param_MI,Z_Param_Out_OutTextures); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMatDependentFunctions) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_MI); \
		P_GET_TARRAY_REF(UMaterialFunctionInterface*,Z_Param_Out_DependentFunctions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMaterialReaderBPLibrary::GetMatDependentFunctions(Z_Param_MI,Z_Param_Out_DependentFunctions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMatAllFontParameterDefaultValue) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_MI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FFontParameter>*)Z_Param__Result=UMaterialReaderBPLibrary::GetMatAllFontParameterDefaultValue(Z_Param_MI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMatAllTextureParameterDefaultValue) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_MI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FTextureParameter>*)Z_Param__Result=UMaterialReaderBPLibrary::GetMatAllTextureParameterDefaultValue(Z_Param_MI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMatAllVectorParameterDefaultValue) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_MI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVectorParameter>*)Z_Param__Result=UMaterialReaderBPLibrary::GetMatAllVectorParameterDefaultValue(Z_Param_MI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMatAllScalarParameterDefaultValue) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_MI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FFloatParameter>*)Z_Param__Result=UMaterialReaderBPLibrary::GetMatAllScalarParameterDefaultValue(Z_Param_MI); \
		P_NATIVE_END; \
	}


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MaterialReader_Source_MaterialReader_Public_MaterialReaderBPLibrary_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMatUsedTextures) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_MI); \
		P_GET_TARRAY_REF(UTexture*,Z_Param_Out_OutTextures); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMaterialReaderBPLibrary::GetMatUsedTextures(Z_Param_MI,Z_Param_Out_OutTextures); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMatDependentFunctions) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_MI); \
		P_GET_TARRAY_REF(UMaterialFunctionInterface*,Z_Param_Out_DependentFunctions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMaterialReaderBPLibrary::GetMatDependentFunctions(Z_Param_MI,Z_Param_Out_DependentFunctions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMatAllFontParameterDefaultValue) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_MI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FFontParameter>*)Z_Param__Result=UMaterialReaderBPLibrary::GetMatAllFontParameterDefaultValue(Z_Param_MI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMatAllTextureParameterDefaultValue) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_MI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FTextureParameter>*)Z_Param__Result=UMaterialReaderBPLibrary::GetMatAllTextureParameterDefaultValue(Z_Param_MI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMatAllVectorParameterDefaultValue) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_MI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVectorParameter>*)Z_Param__Result=UMaterialReaderBPLibrary::GetMatAllVectorParameterDefaultValue(Z_Param_MI); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMatAllScalarParameterDefaultValue) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_MI); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FFloatParameter>*)Z_Param__Result=UMaterialReaderBPLibrary::GetMatAllScalarParameterDefaultValue(Z_Param_MI); \
		P_NATIVE_END; \
	}


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MaterialReader_Source_MaterialReader_Public_MaterialReaderBPLibrary_h_100_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialReaderBPLibrary(); \
	friend struct Z_Construct_UClass_UMaterialReaderBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UMaterialReaderBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MaterialReader"), NO_API) \
	DECLARE_SERIALIZER(UMaterialReaderBPLibrary)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MaterialReader_Source_MaterialReader_Public_MaterialReaderBPLibrary_h_100_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialReaderBPLibrary(); \
	friend struct Z_Construct_UClass_UMaterialReaderBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UMaterialReaderBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MaterialReader"), NO_API) \
	DECLARE_SERIALIZER(UMaterialReaderBPLibrary)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MaterialReader_Source_MaterialReader_Public_MaterialReaderBPLibrary_h_100_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialReaderBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialReaderBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialReaderBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialReaderBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialReaderBPLibrary(UMaterialReaderBPLibrary&&); \
	NO_API UMaterialReaderBPLibrary(const UMaterialReaderBPLibrary&); \
public:


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MaterialReader_Source_MaterialReader_Public_MaterialReaderBPLibrary_h_100_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialReaderBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialReaderBPLibrary(UMaterialReaderBPLibrary&&); \
	NO_API UMaterialReaderBPLibrary(const UMaterialReaderBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialReaderBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialReaderBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialReaderBPLibrary)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MaterialReader_Source_MaterialReader_Public_MaterialReaderBPLibrary_h_100_PRIVATE_PROPERTY_OFFSET
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MaterialReader_Source_MaterialReader_Public_MaterialReaderBPLibrary_h_97_PROLOG
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MaterialReader_Source_MaterialReader_Public_MaterialReaderBPLibrary_h_100_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MaterialReader_Source_MaterialReader_Public_MaterialReaderBPLibrary_h_100_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MaterialReader_Source_MaterialReader_Public_MaterialReaderBPLibrary_h_100_RPC_WRAPPERS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MaterialReader_Source_MaterialReader_Public_MaterialReaderBPLibrary_h_100_INCLASS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MaterialReader_Source_MaterialReader_Public_MaterialReaderBPLibrary_h_100_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MaterialReader_Source_MaterialReader_Public_MaterialReaderBPLibrary_h_100_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MaterialReader_Source_MaterialReader_Public_MaterialReaderBPLibrary_h_100_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MaterialReader_Source_MaterialReader_Public_MaterialReaderBPLibrary_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MaterialReader_Source_MaterialReader_Public_MaterialReaderBPLibrary_h_100_INCLASS_NO_PURE_DECLS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MaterialReader_Source_MaterialReader_Public_MaterialReaderBPLibrary_h_100_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialReaderBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MATERIALREADER_API UClass* StaticClass<class UMaterialReaderBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MaterialReader_Source_MaterialReader_Public_MaterialReaderBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
