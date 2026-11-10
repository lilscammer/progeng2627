#include <iostream>

void div (int a, int b, int& quotient, int& remainder) {
    remainder = (a % b);
    a = a - remainder;
    quotient = (a / b);
}

int main () {
    int a, b, quotient, remainder;

    a = 2; b = 2;
    div (a, b, quotient, remainder);
    std::cout << (quotient == 1) << (remainder == 0) << std::endl;

    a = 11; b = 2;
    div (a, b, quotient, remainder);
    std::cout << (quotient == 5) << (remainder == 1) << std::endl;

    a = 120; b = 5;
    div (a, b, quotient, remainder);
    std::cout << (quotient == 24) << (remainder == 0) << std::endl;

    a = 202; b = 4;
    div (a, b, quotient, remainder);
    std::cout << (quotient == 50) << (remainder == 2) << std::endl;

    a = 131; b = 11;
    div (a, b, quotient, remainder);
    std::cout << (quotient == 11) << (remainder == 10) << std::endl;
    
}