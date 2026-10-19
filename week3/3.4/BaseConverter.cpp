#include <iostream>
#include <string>

int main () {
    int base, input, quotient, remainder, r1, r2, r3, r4, r5, bound = 1;
    std::cout << "Welcome to the handy base converter! Please input the base (range from 2 to 9) you would like to convert to:" << std::endl;
    std::cin >> base;
    std::cout << "What base-10 number would you like to convert?" << std::endl;
    std::cin >> input;
    
    quotient = input;

    if (1 < base && base < 10) {
        for (int i = 0; i < 5; i++) {
            bound = bound * base;
        }

        if (input < bound) {
            while (quotient > 0) {
                remainder = quotient % base;
                quotient = quotient - remainder;
                quotient = quotient / base;
                std::cout << remainder;
            }
        std::cout << " sorry, due to program limitations, your number is written backwards :(" << std::endl;
        // std::cout << input << "is equal to " << r5 << r4 << r3 << r2 << r1 << " in base-" << base << std::endl;
        }

        else {
            std::cout << "Sorry, your number is too large for this program :(" << std::endl;
        }

    }
    else {
        std::cout << "Sorry, your number is too large for this program :(" << std::endl;
    }

}