#include "Configuration.h"
#include "Ready.h"

void Configuration::ConfigurationEnded(Context& context)
{
    StateInterface::ChangeState(context, Ready::GetInstance());
}
