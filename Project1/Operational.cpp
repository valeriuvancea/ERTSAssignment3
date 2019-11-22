#include "Operational.h"
#include "PowerOnSelfTest.h"
#include "Ready.h"

Operational::Operational()
{
    _state = Ready::GetInstance();
}

void Operational::Restart(Context& context)
{
    StateInterface::ChangeState(context, PowerOnSelfTest::GetInstance());
    _state = Ready::GetInstance();
}

void Operational::Configure(Context& context)
{
    _state->Configure(*this);
}

void Operational::ConfigurationEnded(Context& context)
{
    _state->ConfigurationEnded(*this);
}

void Operational::Start(Context& context)
{
    _state->Start(*this);
}

void Operational::Stop(Context& context)
{
    _state->Stop(*this);
}

void Operational::Suspend(Context& context)
{
    _state->Suspend(*this);
}

void Operational::Resume(Context& context)
{
    _state->Resume(*this);
}