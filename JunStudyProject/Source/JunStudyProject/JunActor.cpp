


#include "JunActor.h"
#include "JunObject.h"

// Sets default values
AJunActor::AJunActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AJunActor::BeginPlay()
{
	Super::BeginPlay();

	Obj1 = NewObject<UJunObject>();
	Obj2 = NewObject<UJunObject>();

	GEngine->ForceGarbageCollection(true);
}

// Called every frame
void AJunActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Obj1 == nullptr)
	{
		UE_LOG(LogTemp, Log, TEXT("Obj1 Deleted"));
	}

	if (Obj2 == nullptr)
	{
		UE_LOG(LogTemp, Log, TEXT("Obj2 Deleted"));
	}
}

