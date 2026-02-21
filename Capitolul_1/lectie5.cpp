#include <iostream>
// Introduction to iostream: cout, cin, and endl
int main(){

    // Asks the user to enter three values and then print those values as a snetence

    std::cout << "Enter three numbers: ";

    int x{};
    int y{};
    int z{};

    std::cin >> x >> y >> z;
    std::cout << "You entered " << x << ", " << y << ", and " << z;

    
    return 0;
}