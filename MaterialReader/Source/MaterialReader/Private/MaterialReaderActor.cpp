// Fill out your copyright notice in the Description page of Project Settings.


#include "MaterialReaderActor.h"
#include "Runtime/Engine/Classes/Kismet/KismetMaterialLibrary.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
// Sets default values
AMaterialReaderActor::AMaterialReaderActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;
	SM = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM"));
	SM->SetupAttachment(RootComponent);

	UStaticMesh* Mesh = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'")));
	if (Mesh)
	{
		SM->SetStaticMesh(Mesh);
	}

}

// Called when the game starts or when spawned
void AMaterialReaderActor::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AMaterialReaderActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AMaterialReaderActor::OnConstruction(const FTransform& Transform)
{
	AMaterialReaderActor::InitConstruct();
}
//
void AMaterialReaderActor::InitConstruct()
{
	if (!Material->IsValidLowLevel())return;
	if (DynamicMat->IsValidLowLevel() && Material->GetBaseMaterial() == DynamicMat->GetBaseMaterial())
	{
		SetMat();
		for (FFloatParameter floatPara : MatParas.FloatParameters)
		{
			DynamicMat->SetScalarParameterValue(floatPara.Name, floatPara.Value);
		}

		for (FVectorParameter vectorPara : MatParas.VectorParameters)
		{
			DynamicMat->SetVectorParameterValue(vectorPara.Name, vectorPara.Value);
		}

		for (FTextureParameter texturePara : MatParas.TextureParameters)
		{
			DynamicMat->SetTextureParameterValue(texturePara.Name, texturePara.Value);
		}
	}
	else
	{
		SetMat();
		GetMatPropertys();
	}
}

void AMaterialReaderActor::SetMat()
{
	SM->SetMaterial(0, Material);
	DynamicMat = SM->CreateDynamicMaterialInstance(0, SM->GetMaterial(0));
	//DynamicMat = UKismetMaterialLibrary::CreateDynamicMaterialInstance(GetWorld(), SM->GetMaterial(0));
		//SM->
}
//
void AMaterialReaderActor::GetMatPropertys()
{
	TArray<FFloatParameter> TempFloatParas = UMaterialReaderBPLibrary::GetMatAllScalarParameterDefaultValue(DynamicMat);
	TArray<FVectorParameter> TempVectorParas = UMaterialReaderBPLibrary::GetMatAllVectorParameterDefaultValue(DynamicMat);
	TArray<FTextureParameter> TempTextureParas = UMaterialReaderBPLibrary::GetMatAllTextureParameterDefaultValue(DynamicMat);
	MatParas.FloatParameters = TempFloatParas;
	MatParas.VectorParameters = TempVectorParas;
	MatParas.TextureParameters = TempTextureParas;
}


void AMaterialReaderActor::ResetPropertys()
{
	SetMat();
	GetMatPropertys();
}