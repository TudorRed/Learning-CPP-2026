
#include "io.h"
#include <iostream>


int readNumber()
{
    int x {};
    std::cout << "Name one number of your choice: ";
    std::cin >> x;

    return x;
}

void writeAnswer(int x)
{
    std::cout << x;
    
}