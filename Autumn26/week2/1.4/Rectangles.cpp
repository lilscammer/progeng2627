#include <iostream>

int main () {
    double x, y;
    std::cout << "what is the length of your rectangle?" << std::endl;
    std::cin >> x;

    std::cout << "what is the breadth of your rectangle?" << std::endl;
    std::cin >> y;

    std::cout << "your rectangle has area: " << x * y << std::endl;
    std::cout << "perimeter: " << 2 * (x + y) << std::endl;
}