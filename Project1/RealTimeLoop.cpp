#include "RealTimeLoop.h"
#include "Ready.h"
#include "Suspended.h"

void RealTimeLoop::Stop(Context& context)
{
    StateInterface::ChangeState(context, Ready::GetInstance());
}

void RealTimeLoop::Suspend(Context& context)
{
    StateInterface::ChangeState(context, Suspended::GetInstance());
}