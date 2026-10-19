#include <iostream>

int main () {
    double x, acc = 1;
    int n;
    
    std::cin >> x >> n;

    for (int i = 0; i < n; i++) {
        acc = acc * x;
    }

    std::cout << acc << std::endl;

}