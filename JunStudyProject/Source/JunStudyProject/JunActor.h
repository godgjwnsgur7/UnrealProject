

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "JunActor.generated.h"

class UJunObject;

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
	UJunObject* Obj1;

	UPROPERTY()
	UJunObject* Obj2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Stat)
	int32 Hp = 100;

	UPROPERTY(VisibleAnywhere)
	int32 Mp = 50;

	UPROPERTY(VisibleAnywhere)
	float Speed = 3.5f;
};
