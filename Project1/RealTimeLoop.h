#pragma once
#include "StateInterface.h"
#include "EmbeddedSystemX.h"
#include "SingletonState.h"

class RealTimeLoop : public SingletonState<RealTimeLoop>
{
    void Stop(Context& context);
    void Suspend(Context& context);
};

