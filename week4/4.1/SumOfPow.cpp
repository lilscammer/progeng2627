#include <iostream>
#include <cmath>

double mypow (double base, int exp);
double SOP (double x, double n);

int main () {
    double x_sum, n_sum, sum;
    std::cout << "What is your Base?" << std::endl;
    std::cin >> x_sum;
    std::cout << "To what power would you want it?" << std::endl;
    std::cin >> n_sum;  

    sum = SOP (x_sum, n_sum);

    std::cout << sum << std::endl;

    std::cout << (SOP (3, 4) == 120) << std::endl;
    std::cout << (SOP (11, 2) == 132) << std::endl;
    std::cout << (SOP (0, 1) == 0) << std::endl;
    std::cout << (SOP (2, 5) == 62) << std::endl;
    std::cout << (SOP (11, 3) == 1463) << std::endl;
    std::cout << (SOP (7, 3) == 399) << std::endl;

}

double SOP (double x, double n) {
    double total = 0;
    
    for (int i = 1; i < n+1; i++) {
        total = total + mypow(x, i);
    }

    return total;
}

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