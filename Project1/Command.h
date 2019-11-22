#pragma once
#include <functional>

class Command
{
public:
    Command(std::function<void()> action = [](){});
    void Execute();

private:
    std::function<void()> _action;
};