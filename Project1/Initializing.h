#pragma once
#include "StateInterface.h"
#include "EmbeddedSystemX.h"
#include "SingletonState.h"

class Initializing : public SingletonState<Initializing>
{
public:
    void Initalized(Context& context);
};

