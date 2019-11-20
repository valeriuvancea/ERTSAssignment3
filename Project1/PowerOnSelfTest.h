#pragma once
#include "StateInterface.h"
#include "EmbeddedSystemX.h"
#include "SingletonState.h"

class PowerOnSelfTest : public SingletonState<PowerOnSelfTest>
{
public:
	void SelfTestFailed(Context& context);
	void SelftestOk(Context& context);
};

