#include "EmbeddedSystemX.h"
#include "PowerOnSelfTest.h"

EmbeddedSystemX::EmbeddedSystemX()
{
	_state = PowerOnSelfTest::Instance();
}

void EmbeddedSystemX::Restart()
{
	_state->Restart(this);
}

void EmbeddedSystemX::SelfTestFailed()
{
	_state->SelfTestFailed(this);
}

void EmbeddedSystemX::SelftestOk()
{
	_state->SelftestOk(this);
}

void EmbeddedSystemX::Exit()
{
	_state->Exit(this);
}

void EmbeddedSystemX::Initalized()
{
	_state->Initalized(this);
}

void EmbeddedSystemX::Configure()
{
	_state->Configure(this);
}

void EmbeddedSystemX::ConfigurationEnded()
{
	_state->ConfigurationEnded(this);
}

void EmbeddedSystemX::Start()
{
	_state->Start(this);
}

void EmbeddedSystemX::Stop()
{
	_state->Stop(this);
}

void EmbeddedSystemX::Suspend()
{
	_state->Suspend(this);
}

void EmbeddedSystemX::Resume()
{
	_state->Resume(this);
}

void EmbeddedSystemX::ChangeState(StateInterface* newState)
{
	_state = newState;
}