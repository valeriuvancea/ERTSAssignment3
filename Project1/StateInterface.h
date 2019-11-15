#pragma once
#include "EmbeddedSystemX.h"
class StateInterface
{
public:
	virtual void Restart(EmbeddedSystemX* context) {}
	virtual void SelfTestFailed(EmbeddedSystemX* context) {}
	virtual void SelftestOk(EmbeddedSystemX* context) {}
	virtual void Exit(EmbeddedSystemX* context) {}
	virtual void Initalized(EmbeddedSystemX* context) {}
	virtual void Configure(EmbeddedSystemX* context) {}
	virtual void ConfigurationEnded(EmbeddedSystemX* context) {}
	virtual void Start(EmbeddedSystemX* context) {}
	virtual void Stop(EmbeddedSystemX* context) {}
	virtual void Suspend(EmbeddedSystemX* context) {}
	virtual void Resume(EmbeddedSystemX* context) {}

protected:
	void ChangeState(EmbeddedSystemX* context, StateInterface* newState);
};
