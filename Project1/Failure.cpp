#include <cstdlib>
#include "Failure.h"
#include "PowerOnSelfTest.h"

void Failure::Exit(Context& context)
{
    exit(0);
}

void Failure::Restart(Context& context)
{
    ChangeState(context, PowerOnSelfTest::GetInstance());
}