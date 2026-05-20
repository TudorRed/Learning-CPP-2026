#include <iostream>
#include "log.h"




int main()
{
    Log("Hello World!");
    std::cin.get();

    int a {8};
    a++;
    const char* string = "Hello";

    for  (int i = 0; i < 5; i++)
    {
        const char c = string[i];
        std::cout << c << std::endl;
    }



    return 0;
}
