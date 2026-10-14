#include <iostream>

int main () {
    int n, rem; 
    // n and rem need to be defined as an INT because "%" is only valid for INTEGER division
    //although n and rem can be an integer stored as a "double" variable
    // the double variable is treated as a non-integer.  

    std::cout << "Please enter a number" << std::endl;
    std::cin >> n;

    rem = n % 2;
    // the % operator indicates the remainder of INTEGER division. 
    // so if n is even, rem = 0. if n is odd, rem = 1

    std::cout << "in the following line, 0 means even and 1 means odd" << std::endl;
    std::cout << rem << std::endl;

    std::cout << 5/2 << std::endl;
    //I dont get the result of 2.5
    // because 5 and 2 are stored as integers, 
    //so I only get the quotient of the division
    
    std::cout << 5.0/2 << std::endl;
    // thus, I force one of the operands to be a decimal
    // so that C++ inteprets the division as division WITH DECIMALS
    // ANY of the operands can be a decimal to make this work
}