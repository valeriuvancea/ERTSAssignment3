#pragma once
#include "StateInterface.h"
#include "EmbeddedSystemX.h"
#include "SingletonState.h"

class Suspended : public SingletonState<Suspended> 
{
    void Stop(Context& context);
    void Resume(Context& context);
};

