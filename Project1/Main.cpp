#include "EmbeddedSystemX.h"
#include "Invoker.h"
#include "ThreadSafeQueue.h"
#include <iostream>
#include <Windows.h>
#include <string>

enum Event
{
    Invalid,
    Restart,
    SelfTestFailed,
    SelftestOk,
    Initalized,
    Exit,
    Configure,
    ConfigurationEnded,
    Stop,
    Suspend,
    Resume,
    Start
};

int readEventCode()
{
    std::string lineRead;
    char* pEnd = (char*)lineRead.c_str();

    std::getline(std::cin, lineRead);
    int eventCode = std::strtol(lineRead.c_str(), &pEnd, 10);

    if (*pEnd != 0) {
        eventCode = Invalid;
    }

    return eventCode;
}

void gotoxy(int x, int y)
{
    COORD p = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
}

int main()
{
    std::cout << "Input a state from the following:" << std::endl;
    std::cout << "Restart: " << Restart << std::endl;
    std::cout << "SelfTestFailed: " << SelfTestFailed << std::endl;
    std::cout << "SelftestOk: " << SelftestOk << std::endl;
    std::cout << "Initalized: " << Initalized << std::endl;
    std::cout << "Exit: " << Exit << std::endl;
    std::cout << "Configure: " << Configure << std::endl;
    std::cout << "ConfigurationEnded: " << ConfigurationEnded << std::endl;
    std::cout << "Stop: " << Stop << std::endl;
    std::cout << "Suspend: " << Suspend << std::endl;
    std::cout << "Resume: " << Resume << std::endl;
    std::cout << "Start: " << Start << std::endl;

    EmbeddedSystemX systemX;
    ThreadSafeQueue<Command> commandQueue;
    Invoker commandInvoker(commandQueue);
    commandInvoker.Start();

    while (true)
    {
        gotoxy(0, 13);
        std::string initialState = systemX.GetCurrentStateName();
        std::cout << "Current state: " << initialState << "                                  ";

        gotoxy(0, 14);
        std::cout << "Input:                                          ";
        gotoxy(6, 14);
        int eventCode = readEventCode();

        switch (eventCode)
        {
            case Restart:
            {
                std::cout << "Event: Restart" << std::endl;
                systemX.Restart();
                break;
            }
            case SelfTestFailed:
            {
                std::cout << "Event: SelfTestFailed" << std::endl;
                systemX.SelfTestFailed();
                break;
            }
            case SelftestOk:
            {
                std::cout << "Event: SelftestOk" << std::endl;
                systemX.SelftestOk();
                break;
            }
            case Initalized:
            {
                std::cout << "Event: Initalized" << std::endl;
                systemX.Initalized();
                break;
            }
            case Exit:
            {
                std::cout << "Event: Exit" << std::endl;
                systemX.Exit();
                break;
            }
            case Configure:
            {
                //std::cout << "Event: Configure" << std::endl;
                //systemX.Configure();
                std::cout << "Command: Configure" << std::endl;
                commandQueue.push(Command([&systemX]() { systemX.Configure(); }));
                break;
            }
            case ConfigurationEnded:
            {
                //std::cout << "Event: ConfigurationEnded" << std::endl;
                //systemX.ConfigurationEnded();
                std::cout << "Command: ConfigurationEnded" << std::endl;
                commandQueue.push(Command([&systemX]() { systemX.ConfigurationEnded(); }));
                break;
            }
            case Stop:
            {
                //std::cout << "Event: Stop" << std::endl;
                //systemX.Stop();
                std::cout << "Command: Stop" << std::endl;
                commandQueue.push(Command([&systemX]() { systemX.Stop(); }));
                break;
            }
            case Suspend:
            {
                //std::cout << "Event: Suspend" << std::endl;
                //systemX.Suspend();
                std::cout << "Command: Suspend" << std::endl;
                commandQueue.push(Command([&systemX]() { systemX.Suspend(); }));
                break;
            }
            case Resume:
            {
                //std::cout << "Event: Resume" << std::endl;
                //systemX.Resume();
                std::cout << "Command: Resume" << std::endl;
                commandQueue.push(Command([&systemX]() { systemX.Resume(); }));
                break;
            }
            case Start:
            {
                //std::cout << "Event: Start" << std::endl;
                //systemX.Start();
                std::cout << "Command: Start" << std::endl;
                commandQueue.push(Command([&systemX]() { systemX.Start(); }));
                break;
            }
            case Invalid:
            default:
            {
                std::cout << "Event: Invalid" << std::endl;
                break;
            }
        }   


        auto start = std::chrono::system_clock::now();
        auto now = std::chrono::system_clock::now();
        bool timePassed = true;
        while (std::chrono::duration_cast<std::chrono::seconds>(now - start).count() < 2)
        {
            now = std::chrono::system_clock::now();

            if (initialState != systemX.GetCurrentStateName())
            {
                timePassed = false;
                break;
            }
        }

        auto elapsedTime = std::chrono::duration_cast<std::chrono::milliseconds>(now - start).count();
        if (timePassed)
        {
            std::cout << "No change in state after " << elapsedTime << "ms" << std::endl;
        }
        else
        {
            std::cout << "Time availabe for additional processing " << elapsedTime << "ms" << std::endl;
        }
    }
}