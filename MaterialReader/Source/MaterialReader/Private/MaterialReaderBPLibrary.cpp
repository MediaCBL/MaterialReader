//  Copyright 2019 Guqing, Inc. All Rights Reserved.


#include "MaterialReaderBPLibrary.h"
#include "MaterialReader.h"

UMaterialReaderBPLibrary::UMaterialReaderBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

//-------------------------------------------------------------Float-----------------------------------------------------------------
bool UMaterialReaderBPLibrary::GetMatAllScalarParameterInfo(UMaterialInterface* MI, TArray<FMaterialParameterInfo>&OutParameterInfo)
{
	TArray<FGuid> Guids;
	MI->GetAllScalarParameterInfo(OutParameterInfo, Guids);
	//
	return OutParameterInfo.Num()>0;
}
float UMaterialReaderBPLibrary::GetMatScalarParameterDefaultValue(UMaterialInterface* MI, FMaterialParameterInfo InParameterInfo)
{
	float OutValue;
	MI->GetScalarParameterDefaultValue(InParameterInfo, OutValue);
	return OutValue;
}

TArray<FFloatParameter> UMaterialReaderBPLibrary::GetMatAllScalarParameterDefaultValue(UMaterialInterface* MI)
{
	TArray<FFloatParameter> OutParameters;
	//
	TArray<FMaterialParameterInfo> OutParameterInfo;
	GetMatAllScalarParameterInfo(MI, OutParameterInfo);
	//
	for (FMaterialParameterInfo MPI : OutParameterInfo)
	{
		FFloatParameter P;
		P.InParameterInfo = MPI;
		P.Name = MPI.Name;
		P.Value = GetMatScalarParameterDefaultValue(MI, MPI);
		//
		OutParameters.Add(P);
	}
	//
	return OutParameters;
}
//---------------------------------------------------------Vector-----------------------------------------------------------------------------------
bool UMaterialReaderBPLibrary::GetMatAllVectorParameterInfo(UMaterialInterface* MI, TArray<FMaterialParameterInfo>&OutParameterInfo)
{
	TArray<FGuid> Guids;
	MI->GetAllVectorParameterInfo(OutParameterInfo, Guids);
	//
	return OutParameterInfo.Num()>0;
}
FLinearColor UMaterialReaderBPLibrary::GetMatVectorParameterDefaultValue(UMaterialInterface* MI, FMaterialParameterInfo InParameterInfo)
{
	FLinearColor OutValue;
	MI->GetVectorParameterDefaultValue(InParameterInfo, OutValue);
	return OutValue;
}


TArray<FVectorParameter> UMaterialReaderBPLibrary::GetMatAllVectorParameterDefaultValue(UMaterialInterface* MI)
{
	TArray<FVectorParameter> OutParameters;
	//
	TArray<FMaterialParameterInfo> OutParameterInfo;
	GetMatAllVectorParameterInfo(MI, OutParameterInfo);
	//
	for (FMaterialParameterInfo MPI : OutParameterInfo)
	{
		FVectorParameter P;
		P.InParameterInfo = MPI;
		P.Name = MPI.Name;
		P.Value = GetMatVectorParameterDefaultValue(MI, MPI);
		//
		OutParameters.Add(P);
	}
	//
	return OutParameters;
}

//----------------------------------------------------------Texture------------------------------------------------------------------
bool UMaterialReaderBPLibrary::GetMatAllTextureParameterInfo(UMaterialInterface* MI, TArray<FMaterialParameterInfo>&OutParameterInfo)
{
	TArray<FGuid> Guids;
	MI->GetAllTextureParameterInfo(OutParameterInfo, Guids);
	//
	return OutParameterInfo.Num()>0;
}
UTexture* UMaterialReaderBPLibrary::GetMatTextureParameterDefaultValue(UMaterialInterface* MI, FMaterialParameterInfo InParameterInfo)
{
	UTexture* OutValue;
	MI->GetTextureParameterDefaultValue(InParameterInfo, OutValue);
	return OutValue;
}


TArray<FTextureParameter> UMaterialReaderBPLibrary::GetMatAllTextureParameterDefaultValue(UMaterialInterface* MI)
{
	TArray<FTextureParameter> OutParameters;
	//
	TArray<FMaterialParameterInfo> OutParameterInfo;
	GetMatAllTextureParameterInfo(MI, OutParameterInfo);
	//
	for (FMaterialParameterInfo MPI : OutParameterInfo)
	{
		FTextureParameter P;
		P.InParameterInfo = MPI;
		P.Name = MPI.Name;
		P.Value = GetMatTextureParameterDefaultValue(MI, MPI);
		//
		OutParameters.Add(P);
	}
	//
	return OutParameters;
}
//--------------------------------------------------------------Font------------------------------------------------------------------------
bool UMaterialReaderBPLibrary::GetMatAllFontParameterInfo(UMaterialInterface* MI, TArray<FMaterialParameterInfo>&OutParameterInfo)
{
	TArray<FGuid> Guids;
	MI->GetAllFontParameterInfo(OutParameterInfo, Guids);
	//
	return OutParameterInfo.Num()>0;
}
UFont* UMaterialReaderBPLibrary::GetMatFontParameterDefaultValue(UMaterialInterface* MI, FMaterialParameterInfo InParameterInfo, int32& OutFontPage)
{
	UFont* OutValue;
	MI->GetFontParameterDefaultValue(InParameterInfo, OutValue, OutFontPage);
	return OutValue;
}

TArray<FFontParameter> UMaterialReaderBPLibrary::GetMatAllFontParameterDefaultValue(UMaterialInterface* MI)
{
	TArray<FFontParameter> OutParameters;
	//
	TArray<FMaterialParameterInfo> OutParameterInfo;
	GetMatAllFontParameterInfo(MI, OutParameterInfo);
	//
	for (FMaterialParameterInfo MPI : OutParameterInfo)
	{
		FFontParameter P;
		P.InParameterInfo = MPI;
		P.Name = MPI.Name;
		P.Value = GetMatFontParameterDefaultValue(MI, MPI, P.OutFontPage);
		//
		OutParameters.Add(P);
	}
	//
	return OutParameters;
}
//-----------------------------------------------------------------------------------------------------------------------------------------------


void UMaterialReaderBPLibrary::GetMatDependentFunctions(UMaterialInterface* MI, TArray<UMaterialFunctionInterface*>& DependentFunctions)
{
	MI->GetDependentFunctions(DependentFunctions);
}


void UMaterialReaderBPLibrary::GetMatUsedTextures(UMaterialInterface* MI, TArray<UTexture*>& OutTextures)
{
	//, EMaterialQualityLevel::Type QualityLevel, bool bAllQualityLevels, ERHIFeatureLevel::Type FeatureLevel, bool bAllFeatureLevels
	return MI->GetUsedTextures(OutTextures, EMaterialQualityLevel::High, true, ERHIFeatureLevel::SM5, true);
}