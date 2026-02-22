#include <iostream>

// Void functions (non-value returning functions)

void returnNothing()
{
    

   
}

int returnFive()
{
    return 5;
}

int main()
{

    returnNothing();
    returnFive();

    std::cout << returnFive();
    std::cout << returnNothing();  



    return 0;
}