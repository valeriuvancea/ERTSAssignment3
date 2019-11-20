#pragma once
#include "StateInterface.h"

class Context
{
protected:
    StateInterface* _state = NULL;

public:
    void ChangeState(StateInterface* newState);
};

