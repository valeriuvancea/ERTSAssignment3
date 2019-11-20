#include "StateInterface.h"
#include "Context.h"


void StateInterface::ChangeState(Context& context, StateInterface* newState)
{
	context.ChangeState(newState);
}