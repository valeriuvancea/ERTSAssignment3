#include "Context.h"
#include <typeinfo>
#include <thread>
#include <chrono>

void Context::ChangeState(StateInterface* newState)
{
    std::this_thread::sleep_for(std::chrono::seconds(1));
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