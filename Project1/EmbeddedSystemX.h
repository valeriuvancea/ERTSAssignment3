#pragma once
#include "StateInterface.h"
#include "Context.h"

class EmbeddedSystemX : public Context
{
public:
    EmbeddedSystemX();
    void Restart();
    void SelfTestFailed();
    void SelftestOk();
    void Exit();
    void Initalized();
    void Configure();
    void ConfigurationEnded();
    void Start();
    void Stop();
    void Suspend();
    void Resume();
};

