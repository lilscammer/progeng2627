#include <iostream>

double max(double n1, double n2, double n3) {
    double out;
    if (n1 > n2 || n1 == n2) {
        if (n1 > n3 || n1 == n3){
            out = n1;
        }
        else {
            out = n3;
        }
    }
    else {
        if (n2 > n3 || n2 == n3) {
            out = n2;
        }
        else {
            out = n3;
        }
    }

    return out;
}

int main () {
    std::cout << (max(1,1,2) == 2) << std::endl;
    std::cout << (max(3,1,2) == 3) << std::endl;
    std::cout << (max(0,5,12) == 12) << std::endl;
    std::cout << (max(-1212,-123,-53) == -53) << std::endl;
    std::cout << (max(-123,340, 200) == 340) << std::endl;
    std::cout << (max(0,0,0) == 0) << std::endl;
    std::cout << (max(0,0,1) == 1) << std::endl;
    std::cout << (max(0,1,0) == 1) << std::endl;
    std::cout << (max(0,1,1) == 1) << std::endl;
    std::cout << (max(1,0,0) == 1) << std::endl;
    std::cout << (max(1,0,1) == 1) << std::endl;
    std::cout << (max(1,1,0) == 1) << std::endl;
    std::cout << (max(1,1,1) == 1) << std::endl;
}