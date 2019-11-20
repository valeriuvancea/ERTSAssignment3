#pragma once
#include "StateInterface.h"
#include "EmbeddedSystemX.h"
#include "Singleton.h"

class RealTimeLoop : public StateInterface, public Singleton<RealTimeLoop>
{
    void Stop(Context& context);
    void Suspend(Context& context);
};

