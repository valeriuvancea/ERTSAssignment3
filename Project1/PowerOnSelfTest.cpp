#include "PowerOnSelfTest.h"
#include "Failure.h"
#include "Initializing.h"

void PowerOnSelfTest::SelfTestFailed(EmbeddedSystemX& context)
{
    ChangeState(context, Failure::GetInstance());
}

void PowerOnSelfTest::SelftestOk(EmbeddedSystemX& context) 
{
    ChangeState(context, Initializing::GetInstance());
}