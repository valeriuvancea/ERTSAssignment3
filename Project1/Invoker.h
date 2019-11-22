#pragma once
#include "ThreadSafeQueue.h"
#include "Command.h"
#include <thread> 


class Invoker
{
private:
    ThreadSafeQueue<Command>& _queue;
    std::thread _thread;

public:
    Invoker(ThreadSafeQueue<Command>& queue);
    void Start();

private:
    void Run();
};

