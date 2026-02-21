#include <iostream>
// Developing your first program
int main()
{
    /*
    std::cout << "Enter an integer: ";

    int num{};
    std::cin >> num;

    std::cout << "Double that number is: " << num * 2 << "\n"; // use an expression to multiply num * 2
*/

    std::cout << "Enter an integer: ";

    int userInput { };
    std::cin >> userInput;

    std::cout << "Double " << userInput << " is: " << userInput * 2 << "\n";
    std::cout << "Triple " << userInput << " is: " << userInput * 3 << "\n";

    return 0;
}