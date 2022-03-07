//  Copyright 2019 Guqing, Inc. All Rights Reserved.


#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "MaterialReaderBPLibrary.generated.h"

/* 
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. 
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/
USTRUCT(BlueprintType)
struct FFloatParameter
{
	GENERATED_USTRUCT_BODY()
	//
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FFloatParameter")
	FMaterialParameterInfo InParameterInfo;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FFloatParameter")
	FName Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FFloatParameter")
	float Value;
};

USTRUCT(BlueprintType)
struct FVectorParameter
{
	GENERATED_USTRUCT_BODY()
		//
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FVectorParameter")
		FMaterialParameterInfo InParameterInfo;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FVectorParameter")
		FName Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FVectorParameter")
		FLinearColor Value;
};
//
USTRUCT(BlueprintType)
struct FTextureParameter
{
	GENERATED_USTRUCT_BODY()
		//
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTextureParameter")
		FMaterialParameterInfo InParameterInfo;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTextureParameter")
		FName Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTextureParameter")
		UTexture *Value;
};
//
USTRUCT(BlueprintType)
struct FFontParameter
{
	GENERATED_USTRUCT_BODY()
		//
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FFontParameter")
		FMaterialParameterInfo InParameterInfo;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FFontParameter")
		FName Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FFontParameter")
		UFont *Value;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FFontParameter")
		int32 OutFontPage;
};

USTRUCT(BlueprintType)
struct FMatierialProperty
{
	GENERATED_USTRUCT_BODY()
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FloatParameters")
		TArray <FFloatParameter> FloatParameters;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VectorParameters")
		TArray <FVectorParameter> VectorParameters;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TextureParameters")
		TArray <FTextureParameter> TextureParameters;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FontParameters")
		TArray <FFontParameter> FontParameters;
};



UCLASS()
class UMaterialReaderBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	//UFUNCTION(BlueprintCallable, meta = (Category = "MaterialReader"))
	static bool GetMatAllScalarParameterInfo(UMaterialInterface* MI, TArray<FMaterialParameterInfo>&OutParameterInfo);
	//UFUNCTION(BlueprintCallable, meta = (Category = "MaterialReader"))
	static float GetMatScalarParameterDefaultValue(UMaterialInterface* MI, FMaterialParameterInfo InParameterInfo);
	UFUNCTION(BlueprintPure, meta = (Category = "MaterialReader"))
	static TArray<FFloatParameter> GetMatAllScalarParameterDefaultValue(UMaterialInterface* MI);


	//UFUNCTION(BlueprintCallable, meta = (Category = "MaterialReader"))
	static bool GetMatAllVectorParameterInfo(UMaterialInterface* MI, TArray<FMaterialParameterInfo>&OutParameterInfo);
	//UFUNCTION(BlueprintCallable, meta = (Category = "MaterialReader"))
	static FLinearColor GetMatVectorParameterDefaultValue(UMaterialInterface* MI, FMaterialParameterInfo InParameterInfo);
	UFUNCTION(BlueprintPure, meta = (Category = "MaterialReader"))
	static TArray<FVectorParameter> GetMatAllVectorParameterDefaultValue(UMaterialInterface* MI);


	//UFUNCTION(BlueprintCallable, meta = (Category = "MaterialReader"))
	static bool GetMatAllTextureParameterInfo(UMaterialInterface* MI, TArray<FMaterialParameterInfo>&OutParameterInfo);
	//UFUNCTION(BlueprintCallable, meta = (Category = "MaterialReader"))
	static UTexture* GetMatTextureParameterDefaultValue(UMaterialInterface* MI, FMaterialParameterInfo InParameterInfo);
	UFUNCTION(BlueprintPure, meta = (Category = "MaterialReader"))
	static TArray<FTextureParameter> GetMatAllTextureParameterDefaultValue(UMaterialInterface* MI);


	//UFUNCTION(BlueprintCallable, meta = (Category = "MaterialReader"))
	static bool GetMatAllFontParameterInfo(UMaterialInterface* MI, TArray<FMaterialParameterInfo>&OutParameterInfo);
	//UFUNCTION(BlueprintCallable, meta = (Category = "MaterialReader"))
	static UFont* GetMatFontParameterDefaultValue(UMaterialInterface* MI, FMaterialParameterInfo InParameterInfo, int32& OutFontPage);
	UFUNCTION(BlueprintPure, meta = (Category = "MaterialReader"))
	static TArray<FFontParameter> GetMatAllFontParameterDefaultValue(UMaterialInterface* MI);
	//

	UFUNCTION(BlueprintPure, meta = (Category = "MaterialReader"))
	static void GetMatDependentFunctions(UMaterialInterface* MI, TArray<UMaterialFunctionInterface*>& DependentFunctions);


	UFUNCTION(BlueprintPure, meta = (Category = "MaterialReader"))
	static void GetMatUsedTextures(UMaterialInterface* MI, TArray<UTexture*>& OutTextures);

};
