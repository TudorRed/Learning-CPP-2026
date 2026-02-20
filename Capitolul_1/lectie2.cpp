#include <iostream>

int main(){
    std::cout << "Hello world"; // Everything from here to the end of the line is ignored 
    std::cout << "Hello world!\n"; // std::cout lives in the iostream librabry
    std::cout << "It is very nice to meet you!\n"; // these comments make the code hard to read 
    std::cout << "Yeah!\n"; // especially when lines are differnet lenths

    std::cout << "Hello world!\n";
    
    std::cout << "It is very nice to meet you!\n "; // this  is much easier to read 
    std::cout << "Yeah!\n"; // don't you think so? 

    // std::cout lives in the iostream library 
    std::cout << "Hello world!\n";

    // this is much easier to read 
    std::cout << "It is very nice to meet you!\n";

    // don't you think so?
    std::cout << "Yeah!\n";

    /*
    This is a multi-line comment.
    This line will be ignored.
    So will this one 
    */
    /* This is a multi-line comment.
     * the matching asterisks to the left
     * can make this easier to read
     *
    */
    return 0;
}