

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "JunObject.generated.h"

/**
 * 
 */
UCLASS()
class JUNSTUDYPROJECT_API UJunObject : public UObject
{
	GENERATED_BODY()

private:
	int32 Hp = 100;
	int32 Mp = 50;
	float Speed = 3.5f;
};
