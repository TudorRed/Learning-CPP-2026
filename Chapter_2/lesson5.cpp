#include <iostream>
// Introduction to local scope

int getValueFromUser()
{

    int val {}; 
    std::cout << "Enter a vlue: ";
    std::cin >> val;
    return val;

}

 
int main()
{
    int num { getValueFromUser() };
    std::cout << "You entered " << num << "\n";


    return 0;
}
