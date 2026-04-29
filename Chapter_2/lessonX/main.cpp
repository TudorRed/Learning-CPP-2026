#include "io.h"

int readNumber();
void writeAnswer(int x);


int main()
{

    int num1 {};
    int num2 {};

    num1 = readNumber();  
    num2 = readNumber();

    int x = num1 + num2;
    writeAnswer(x);
    

    return 0;
}