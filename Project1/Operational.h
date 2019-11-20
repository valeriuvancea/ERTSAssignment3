#pragma once
#include "StateInterface.h"
#include "Context.h"
#include "Singleton.h"

class Operational : public StateInterface, public Singleton<Operational>, public Context
{
public:
    Operational();
    void Restart(Context& context);
    void Configure(Context& context);
    void ConfigurationEnded(Context& context);
    void Start(Context& context);
    void Stop(Context& context);
    void Suspend(Context& context);
    void Resume(Context& context);
};

