#include <iostream>
// Introduction to expressions
int five()
{
    return 5;
}
int main()
{
    int a{2};           // initialize varibale a wtih literal value 2
    int b{2 + 3};       // initialize variable b with computed value 5
    int c{(2 * 3) + 4}; // intitialize varible c with computed value 10
    int d{b};           // initialize varibale d iwth variable value 5
    int e { five() };    // initialize variable e with function return value 5
}