#include <iostream>
// 1.4 Variable assignment and initialization

int main(){
    /*
    int x;     // define an integer variable name x (preferred)
    int y, z; // define two integer variables, name y and z 

    int width; // define an integer variable named width 
    width = 5; // assignment of value 5 into variable width 

    // variable width now has value 5
    std::cout << width; // prints 5
    width = 7;
    std::cout << width; //prints 7

    int width { 5 } // define variable width and initialize with initial value 5 
    std::cout << width; // prints 5 
*/

// An integer can only hold non-fractional values
// Initalizing an int with fractional value 4.5 requires the compiler to convert 4/5 to a value an int can hold

// int w1 {4.5}; // compile error: list-init does not allow narrowing conversion
 /* 
    int w2 = 4.5;

    int a = 5, b = 6;
    int c ( 7 ), d ( 8 );
    int e { 9 }, f { 10 };
    int i {}, j{};
*/
    int x { 5 }; // variable x defined
    
    // but not used anywhere

    return 0;
}


/*
The 5 common ways of initialization in C++

int a; // default-initialization (no initializer)

// Traditional initialization forms;
int b = 5; // copy-initialization (initial value after euquals sign)
int c ( 6 );  // direct-initialization (initial value in parenthesis)

// Modern initailization forms (preferred):
int d { 7 };  // direct-list-initialization (initial value in braces)
int e {}; // value-initaialization (empty braces)

*/