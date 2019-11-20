#pragma once
#include <functional>

class CommandInterface
{
public:
    CommandInterface(std::function<void()> action)
    {
        _action = action;
    }

    virtual void Execute()
    {
        _action();
    }

private:
    std::function<void()> _action;
};