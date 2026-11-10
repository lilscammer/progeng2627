#include <iostream>

int myfactorial(int in) {
    int fact = 1;
    while (in > 0) {
        fact = fact * in;
        in--;
    }
    return fact;
}

int main () {
    int n;
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "factorial of " << n << ": " << myfactorial(n) << std::endl;
}