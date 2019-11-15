#pragma once
#include "StateInterface.h"
#include "EmbeddedSystemX.h"
class PowerOnSelfTest : public StateInterface
{
	static PowerOnSelfTest* _instance;
	PowerOnSelfTest();

public:
	static StateInterface* Instance();
	void SelfTestFailed(EmbeddedSystemX* context);
	void SelftestOk(EmbeddedSystemX* context);
};

