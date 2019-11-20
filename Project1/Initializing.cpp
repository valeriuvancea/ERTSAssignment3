#include "Initializing.h"
#include "Operational.h"

void Initializing::Initalized(EmbeddedSystemX& context)
{
    ChangeState(context, Operational::GetInstance());
}