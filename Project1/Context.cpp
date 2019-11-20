#include "Context.h"

void Context::ChangeState(StateInterface* newState)
{
    _state = newState;
}