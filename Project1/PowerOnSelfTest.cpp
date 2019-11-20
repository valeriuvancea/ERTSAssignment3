#include "PowerOnSelfTest.h"
#include "Failure.h"
#include "Initializing.h"

void PowerOnSelfTest::SelfTestFailed(Context& context)
{
    ChangeState(context, Failure::GetInstance());
}

void PowerOnSelfTest::SelftestOk(Context& context) 
{
    ChangeState(context, Initializing::GetInstance());
}