#include <iostream>

void measure (double x, double y, double& area, double& perimeter) {
    area = x * y;
    perimeter = 2 * (x + y);
}

int main () {
    double x, y, area, perimeter;

    x = 2;
    y = 2;
    measure (x, y, area, perimeter);
    std::cout << (area == 4) << std::endl;
    std::cout << (perimeter == 8) << std::endl;

    x = 10;
    y = 12;
    measure (x, y, area, perimeter);
    std::cout << (area == 120) << std::endl;
    std::cout << (perimeter == 44) << std::endl;
    
    x = 1;
    y = 1;
    measure (x, y, area, perimeter);
    std::cout << (area == 1) << std::endl;
    std::cout << (perimeter == 4) << std::endl;

    x = 7;
    y = 3;
    measure (x, y, area, perimeter);
    std::cout << (area == 21) << std::endl;
    std::cout << (perimeter == 20) << std::endl;

    x = 26;
    y = 5;
    measure (x, y, area, perimeter);
    std::cout << (area == 130) << std::endl;
    std::cout << (perimeter == 62) << std::endl;

}