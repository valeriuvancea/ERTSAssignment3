#pragma once
#include "StateInterface.h"
#include "EmbeddedSystemX.h"
#include "Singleton.h"

class Failure : public StateInterface, public Singleton<Failure>
{
public:
    void Exit(EmbeddedSystemX& context);
    void Restart(EmbeddedSystemX& context);
};