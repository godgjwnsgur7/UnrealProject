

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "JunActor.generated.h"

class UJunObject;
class UStaticMeshComponent;

UCLASS()
class JUNSTUDYPROJECT_API AJunActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AJunActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TObjectPtr<UStaticMeshComponent> Body;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TObjectPtr<UStaticMeshComponent> Wing;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TObjectPtr<UStaticMeshComponent> Head;

	UPROPERTY(EditAnywhere, Category = Battle)
	TObjectPtr<class AActor> Target;
};
