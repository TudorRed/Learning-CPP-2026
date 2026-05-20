#include <iostream>
#include "log.h"

int main()
{

    int x = 6;
    bool comparisonResult = x == 5;    
    if (comparisonResult)
    {
        Log("Hello World!");
    }
    std::cin.get();

    return 0;
}