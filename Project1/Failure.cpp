#include <cstdlib>
#include "Failure.h"
#include "PowerOnSelfTest.h"

void Failure::Exit(EmbeddedSystemX& context)
{
    exit(0);
}

void Failure::Restart(EmbeddedSystemX& context)
{
    ChangeState(context, PowerOnSelfTest::GetInstance());
}