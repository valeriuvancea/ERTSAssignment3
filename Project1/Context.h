#pragma once
#include "StateInterface.h"
#include <string>

class Context
{
protected:
    StateInterface* _state = NULL;

public:
    void ChangeState(StateInterface* newState);
    std::string GetCurrentStateName();
};

