#include <iostream>

int main () {
    int input, remainder, divisor, quotient = 0; 
    
    std::cout << "what is your quotient" << std::endl;
    std::cin >> input;
    std::cout << "what is your divisor" << std::endl;
    std::cin >> divisor;

    remainder = input;

    while (remainder > divisor) {
        remainder = remainder - divisor;
        quotient = quotient + 1;
    }

    std::cout << input << "/" << divisor << " = " << quotient << " with a remainder of " << remainder << std::endl; 

}