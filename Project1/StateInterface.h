#pragma once
#include <cstddef>

class Context;

class StateInterface
{
public:
	virtual void Restart(Context& context) {}
	virtual void SelfTestFailed(Context& context) {}
	virtual void SelftestOk(Context& context) {}
	virtual void Exit(Context& context) {}
	virtual void Initalized(Context& context) {}
	virtual void Configure(Context& context) {}
	virtual void ConfigurationEnded(Context& context) {}
	virtual void Start(Context& context) {}
	virtual void Stop(Context& context) {}
	virtual void Suspend(Context& context) {}
	virtual void Resume(Context& context) {}

protected:
	void ChangeState(Context& context, StateInterface* newState);
};
