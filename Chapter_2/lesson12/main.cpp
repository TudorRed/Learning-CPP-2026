#include "square.h"
#include <iostream>

int main()
{
    std::cout << "a square has " << getSquareSides() << " sides\n";
    std::cout << "a square of lenth 5 has permeter length " << getSquarePerimeter(5) << "\n";

    return 0;
}