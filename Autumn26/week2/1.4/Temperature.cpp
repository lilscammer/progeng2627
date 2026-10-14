#include <iostream>

int main() {
    double C, F;
    std::cout << "What temperature is it in Celsius?" << std::endl;
    std::cin >> C;

    F = (C * 1.8) + 32;

    std::cout << "It is currently " << F << " Farenheit" << std::endl;
}