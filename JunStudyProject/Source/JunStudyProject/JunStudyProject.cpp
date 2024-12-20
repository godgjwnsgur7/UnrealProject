// Copyright Epic Games, Inc. All Rights Reserved.

#include "JunStudyProject.h"
#include "Modules/ModuleManager.h"

#include "JunLogChannels.h"

class FJunModule : public FDefaultGameModuleImpl
{
	virtual void StartupModule() override
	{
		//UE_LOG(LogTemp, Warning, TEXT("Test Log"));
		UE_LOG(LogJun, Log, TEXT("Test Log"));
	}

	virtual void ShutdownModule() override
	{

	}
};

IMPLEMENT_PRIMARY_GAME_MODULE(FJunModule, JunStudyProject, "JunStudyProject" );
