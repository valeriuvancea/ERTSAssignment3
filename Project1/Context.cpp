#include "Context.h"
#include <typeinfo>

void Context::ChangeState(StateInterface* newState)
{
    _state = newState;
}

std::string Context::GetCurrentStateName()
{
    Context* stateAsContext = dynamic_cast<Context*>(_state);
    std::string stateName = _state->GetStateName();

    if (stateAsContext != nullptr)
    {
        return stateName + "." + stateAsContext->GetCurrentStateName();
    }

    return stateName;
}