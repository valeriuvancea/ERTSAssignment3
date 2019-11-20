#pragma once
#include "StateInterface.h"
#include "EmbeddedSystemX.h"
#include "SingletonState.h"

class Configuration : public SingletonState<Configuration> 
{
    void ConfigurationEnded(Context& context);
};

