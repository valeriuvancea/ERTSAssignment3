#include "Ready.h"
#include "RealTimeLoop.h"
#include "Configuration.h"

void Ready::Start(Context& context)
{
    StateInterface::ChangeState(context, RealTimeLoop::GetInstance());
}

void Ready::Configure(Context& context)
{
    StateInterface::ChangeState(context, Configuration::GetInstance());
}