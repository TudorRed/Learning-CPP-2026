#include <iostream>

//  Function return values (value-returning functions)

int getValueFromUserUB()
{
    std::cout << "Enter an integer: ";
    int input{7};
    std::cin >> input;

    return input;
}


int main()
{


    int x{ getValueFromUserUB() };
    int y{ getValueFromUserUB() };

    std::cout << x << " + " << y << " - " << x + y << "\n";

    return 0;
}