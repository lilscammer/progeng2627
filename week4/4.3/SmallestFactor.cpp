#include <iostream>

int smallest_factor (int n) {
    for (int lcf = 2; lcf < (n/2 + 1); lcf++) {
        if ((n % lcf) == 0) {
            return lcf;
        }
    }
    return 0;
}

int main () {
    int lower, upper, n;

    std::cin >> lower >> upper;

    for (int i = lower; i < upper + 1; i++) {
        if (smallest_factor (i) == 0) {
            std::cout << i << std::endl;
        } 
    }

    n = 4;
    std::cout << smallest_factor(n) << std::endl;
    
    n = 19;
    std::cout << smallest_factor(n) << std::endl;
    
    n = 20;
    std::cout << smallest_factor(n) << std::endl;
    
    n = 101;
    std::cout << smallest_factor(n) << std::endl;

    n = (1009 * 1007);
    std::cout << smallest_factor(n) << std::endl;
    
    n = (101*103);
    std::cout << smallest_factor(n) << std::endl;

    n = 6;
    std::cout << smallest_factor(n) << std::endl;

}