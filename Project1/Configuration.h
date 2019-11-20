#pragma once
#include "StateInterface.h"
#include "EmbeddedSystemX.h"
#include "Singleton.h"

class Configuration : public StateInterface, public Singleton<Configuration> 
{
    void ConfigurationEnded(Context& context);
};

