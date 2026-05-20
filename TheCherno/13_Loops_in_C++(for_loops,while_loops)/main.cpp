#include <iostream>
#include "log.h"

int main()
{

    for (int i = 0; i < 5; i++)
    {
        Log("Hello World!");
    }
    std::cin.get();

    return 0;
}