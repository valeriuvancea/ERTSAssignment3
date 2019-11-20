#include "EmbeddedSystemX.h"
#include <iostream>


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
    char* pEnd = new char(0);
    std::getline(std::cin, lineRead);
    int eventCode = std::strtol(lineRead.c_str(), &pEnd, 10);

    if (*pEnd != 0) {
        eventCode = Invalid;
    }

    return eventCode;
}

int main()
{
    EmbeddedSystemX systemX;

    while (true)
    {
        std::cout << "Current state: " << systemX.GetCurrentStateName();
        std::cout << std::endl << std::endl << std::endl << std::endl;

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

        std::cout << std::endl << "Input:";
        
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
                std::cout << "Event: Configure" << std::endl;
                systemX.Configure();
                break;
            }
            case ConfigurationEnded:
            {
                std::cout << "Event: ConfigurationEnded" << std::endl;
                systemX.ConfigurationEnded();
                break;
            }
            case Stop:
            {
                std::cout << "Event: Stop" << std::endl;
                systemX.Stop();
                break;
            }
            case Suspend:
            {
                std::cout << "Event: Suspend" << std::endl;
                systemX.Suspend();
                break;
            }
            case Resume:
            {
                std::cout << "Event: Resume" << std::endl;
                systemX.Resume();
                break;
            }
            case Start:
            {
                std::cout << "Event: Start" << std::endl;
                systemX.Start();
                break;
            }
            case Invalid:
            default:
            {
                std::cout << "Event: Invalid" << std::endl;
                break;
            }
        }   
    }
}