#include <iostream>

int main () {
    double n, absv; 
    
    std::cout << "Please enter a number" << std::endl;
    std::cin >> n;

    if (n < 0) {
        absv = - n;
    }
    else {
        absv = n;
    }

    std::cout << "|" << n << "| = " << absv << std::endl;

    // often its better to have a separate variables for the input
    // and for the output as it makes the code more readable

}