#include <iostream>

int main () {
    int n;
    bool factor = false;

    std::cout << "Enter an integer greater than 1" << std::endl;
    std::cin >> n;

    for (int cf = 2; cf < n; cf++) {
        if ((n % cf) == 0) {
            factor = true;
            cf = n;
        }
    }

    if (factor) {
        std::cout << "the number is not prime" << std::endl;
    }
    else {
        std::cout << "the number is prime" << std::endl;
    }

}