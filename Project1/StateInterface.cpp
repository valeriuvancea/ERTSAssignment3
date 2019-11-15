#include "StateInterface.h"

void StateInterface::ChangeState(EmbeddedSystemX* context, StateInterface* newState)
{
	context->ChangeState(newState);
}