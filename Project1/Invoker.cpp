#include "Invoker.h"
#include <chrono>

Invoker::Invoker(ThreadSafeQueue<Command>& queue):_queue(queue)
{
}

void Invoker::Start()
{
    _thread = std::thread([this]() {this->Run();});
}

void Invoker::Run()
{
    Command newCommand;
    while (true)
    {
        if (_queue.pop(newCommand))
        {
            newCommand.Execute();
        }

        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
}
