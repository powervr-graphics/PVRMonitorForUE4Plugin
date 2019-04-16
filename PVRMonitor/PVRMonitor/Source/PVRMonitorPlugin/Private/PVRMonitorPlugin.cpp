/*!***********************************************************************

 @file           PVRMonitorPlugin.cpp
 @copyright      Copyright (c) Imagination Technologies Ltd. All Rights Reserved. 2019

**************************************************************************/
#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "IPVRMonitorPlugin.h"


class FPVRMonitorPlugin : public IPVRMonitorPlugin
{
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	
protected:

};

IMPLEMENT_MODULE( FPVRMonitorPlugin, PVRMonitorPlugin )



void FPVRMonitorPlugin::StartupModule()
{
}


void FPVRMonitorPlugin::ShutdownModule()
{
}



