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

    /*
    To calculate the final grade we sum all the weighted midterm and homework scores 
    and then divide by the number of scores to assign a percentage, which is 
    used to calculate letter grade 
    */

    // To generate a random item, we're going to do the following 
    // 1) Put all of the items of the desired rarity on a list 
    // 2) Calculate a proabability for each item based on level and wight factor
    // 3) Choose a random number
    // 4) Figure out which item that random number corresponds to 
    // 5) Return the appropriate item 

    // (Bad Comment) Set sight range to 0 
    sight = 0 
    // (good comment)The player just drank a potion of blindness and ca not see anything
    sight = 0 
    // (Bad) Calculate the cost of the items
    cost = quantity * 2 * storePrice;
    // (Good) We need to multiply quantity by 2 here because they are bought in pairs
    cost = quantity * 2 * storePrice
    // (Good Comments)
    // We decided to use a linked list instead of an array because 
    // arrays do insertion too slowly 

    // (Bad Comments)
    // We're going to use Newton's method to find the rood of a number because
    // there is no deterministic way to slove these equations
    

    return 0;
}