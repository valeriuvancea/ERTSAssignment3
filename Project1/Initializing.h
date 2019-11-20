#pragma once
#include "StateInterface.h"
#include "EmbeddedSystemX.h"
#include "Singleton.h"

class Initializing : public StateInterface, public Singleton<Initializing>
{
public:
    void Initalized(EmbeddedSystemX& context);
};

