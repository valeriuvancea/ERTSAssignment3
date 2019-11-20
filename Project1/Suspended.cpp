#include "Suspended.h"
#include "RealTimeLoop.h"
#include "Ready.h"

void Suspended::Stop(Context& context)
{
    StateInterface::ChangeState(context, Ready::GetInstance());
}

void Suspended::Resume(Context& context)
{
    StateInterface::ChangeState(context, RealTimeLoop::GetInstance());
}