/*

#include <iostream>


// add() takes two integers as parameters, and returns the restul of their sum
// The values of x and y are deteremined by the function that calls add()


int add(int x, int y)
{
    return x + y;
}

int multiply(int z, int w)
{
    return z * w;
}



int doubleNumber(int x)
{
    return x * 2;
}
// main tkaes no paramentrs 
int main()
{
    
    std::cout << add(4, 5) << "\n"; // within add() x=4, y=5, so x+y=9
    std::cout << add(1 + 2, 3 * 4) << "\n"; // within add() x=3, y=12, so x+y=15

    int a{5};
    std::cout << add(a, a) << "\n"; // evaluates (5 + 5)
    
    
    std::cout << add(1, multiply(2, 3)) << "\n"; // evalueates 1 + (2 * 3)
    std::cout << add(1, add(2, 3)) << "\n"; // evaluates 1 + (2 + 3)
    
    std::cout << doubleNumber(7) << "\n";

    return 0;
}
*/

// Quizz Time
/*
Question #5

Write a complete program that reads an integer from the user, 
doubles it using the doubleNumber() function you wrote in the previous quiz question,
and then prints the doubled value out to the console.
*/

#include <iostream>

int doubleNumber(int x)
{
    return x * 2;
}

int main()
{
    // prompt the user to give me an integer and create the empty integer
    std::cout << "Input an integer: ";
    int num {};
    std::cin >> num;

    std::cout << "The value your doubled number has is.." << doubleNumber(num) << "\n";






    return 0;
}