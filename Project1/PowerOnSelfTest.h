#pragma once
#include "StateInterface.h"
#include "EmbeddedSystemX.h"
#include "Singleton.h"

class PowerOnSelfTest : public StateInterface, public Singleton<PowerOnSelfTest>
{
public:
	void SelfTestFailed(EmbeddedSystemX& context);
	void SelftestOk(EmbeddedSystemX& context);
};

