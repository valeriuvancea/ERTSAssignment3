#pragma once
#include "StateInterface.h"
#include "EmbeddedSystemX.h"
#include "SingletonState.h"

class Ready : public SingletonState<Ready>
{
    void Start(Context& context);
    void Configure(Context& context);
};

