#include "EmbeddedSystemX.h"
#include <iostream>

int main()
{
    EmbeddedSystemX systemX;
    systemX.SelftestOk();
    systemX.Initalized();
    systemX.Configure();
    systemX.Restart();
    std::cout << systemX.GetCurrentStateName();
    return 0;
}