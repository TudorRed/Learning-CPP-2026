#include <iostream>

void doSomething()
{
#ifdef PRINT
    std::cout << "Printing!\n";
#endif
#ifdef PRINT
    std::cout << "Not printing!\n";
#endif
}
