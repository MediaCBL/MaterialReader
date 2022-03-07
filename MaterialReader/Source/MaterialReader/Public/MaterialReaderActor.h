// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MaterialReaderBPLibrary.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "MaterialReaderActor.generated.h"

UCLASS()
class MATERIALREADER_API AMaterialReaderActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMaterialReaderActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void OnConstruction(const FTransform& Transform) override;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditInstanceOnly, Category = "TestMesh")
		UStaticMeshComponent* SM;

	UPROPERTY(EditInstanceOnly, Category = "CheckParametersHere")
		FMatierialProperty MatParas;

	UPROPERTY(EditInstanceOnly, Category = "PutTestMaterialHere")
		UMaterialInterface* Material;
	UMaterialInstanceDynamic* DynamicMat;

	UFUNCTION(BlueprintCallable, Category = "Init")
		void InitConstruct();

	void SetMat();
	void GetMatPropertys();

	UFUNCTION(CallInEditor, Category = "PressThisIfYouMaterialPropertyNotUpdated")
		void ResetPropertys();
};
