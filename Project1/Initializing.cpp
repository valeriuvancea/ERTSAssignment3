#include "Initializing.h"
#include "Operational.h"

void Initializing::Initalized(Context& context)
{
    ChangeState(context, Operational::GetInstance());
}