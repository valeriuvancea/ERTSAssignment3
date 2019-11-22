#include "Invoker.h"

Invoker::Invoker(ThreadSafeQueue<Command>& queue):_queue(queue)
{
}

void Invoker::Start()
{
   _thread = std::thread(this->Run);
}

void Invoker::Run()
{
    while (true)
    {
        Command newCommand;
        
        if (_queue.pop(newCommand))
        {
            newCommand.Execute();
        }
    }
}
