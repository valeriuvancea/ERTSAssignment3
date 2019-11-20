#pragma once
#include "StateInterface.h"
#include "EmbeddedSystemX.h"
#include "Singleton.h"

class Ready : public StateInterface, public Singleton<Ready>
{
    void Start(Context& context);
    void Configure(Context& context);
};

