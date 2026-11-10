#include <iostream>

int gcd (int a, int b) {

    // always makes a the larger number
    if (b > a) {
        int temp;
        temp = a;
        a = b;
        b = temp;
    }

    int remainder = 1, quotient;

    while (remainder != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    return a;
}

int euler_toitent (int n) {
    int counter = 0;

    for (int i = 1; i < n + 1; i++) {
        if (gcd (n, i) == 1) {
            counter++;
        }
    }

    return counter;
}

int toitent_sum (int n) {
    int depth = 0;
    while (n != 1){
        n = euler_toitent (n);
        depth++;
    }

    return depth;
}

int Local_Toitent_Depth_Peak (int a, int b) {
    int strongest_peak = -1, peak_str, strongest_peak_str;

    for (int n = a; n < b; n++) {

    }

}

int main () {
    int a, b;

    std::cin >> a >> b;
    std::cout << Local_Toitent_Depth_Peak (a, b) << std::endl;
}