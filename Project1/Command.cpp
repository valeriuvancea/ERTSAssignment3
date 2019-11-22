#include "Command.h"

Command::Command(std::function<void()> action)
{
    _action = action;
}

void Command::Execute()
{
    _action();
}