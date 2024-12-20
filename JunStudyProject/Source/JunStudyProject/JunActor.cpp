


#include "JunActor.h"

// Sets default values
AJunActor::AJunActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// 작업내용이 있다고 치자고 ㅇㅇ

}

// Called when the game starts or when spawned
void AJunActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AJunActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

