#include <iostream>

double mypow (double base, int exp) {
    double result = 1;

    if (exp > 0) {
        for (int i = 0; i < exp; i++) {
                result = result * base;
            }
    }
    else {
        exp = -exp;
        for (int i = 0; i < exp; i++) {
                result = result / base;
            }
    }
    
    
    return result;
}

int main () {
    std::cout << "2^3: " << mypow(2, 3) << std::endl;
    std::cout << "0.5^2: " << mypow(0.5, 2) << std::endl;
    std::cout << "1^0: " << mypow(1, 0) << std::endl;
    std::cout << "0.1^(-3): " << mypow(0.1, -3) << std::endl;
    std::cout << "2^(-3): " << mypow(2, -3) << std::endl;
}