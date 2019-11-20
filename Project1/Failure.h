#pragma once
#include "StateInterface.h"
#include "EmbeddedSystemX.h"
#include "SingletonState.h"

class Failure : public SingletonState<Failure>
{
public:
    void Exit(Context& context);
    void Restart(Context& context);
};