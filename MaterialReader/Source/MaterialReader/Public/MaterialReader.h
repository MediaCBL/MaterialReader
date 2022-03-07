//  Copyright 2019 Guqing, Inc. All Rights Reserved.


#pragma once

#include "Modules/ModuleManager.h"

class FMaterialReaderModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
