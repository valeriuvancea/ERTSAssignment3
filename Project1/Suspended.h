#pragma once
#include "StateInterface.h"
#include "EmbeddedSystemX.h"
#include "Singleton.h"

class Suspended : public StateInterface, public Singleton<Suspended> 
{
    void Stop(Context& context);
    void Resume(Context& context);
};

