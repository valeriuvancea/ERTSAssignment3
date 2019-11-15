#pragma once
#include "StateInterface.h"
#include <cstddef>
class EmbeddedSystemX
{
	StateInterface* _state = NULL;

public:
	EmbeddedSystemX();
	void Restart();
	void SelfTestFailed();
	void SelftestOk();
	void Exit();
	void Initalized();
	void Configure();
	void ConfigurationEnded();
	void Start();
	void Stop();
	void Suspend();
	void Resume();
	void ChangeState(StateInterface* newState);
};

