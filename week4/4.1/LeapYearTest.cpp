#include <iostream>

bool is_leap(int year) {
    bool LeapYr = false;

    if (year % 4 == 0) {
        if (year % 400 == 0) {
            LeapYr = true;
        }
        else if (year % 100 == 0) {
        }
        else {
            LeapYr = true;
        }
    }

    return LeapYr;
}

int main () {
    std::cout << (is_leap(1600) == true) << std::endl;
    std::cout << (is_leap(2000) == true) << std::endl;
    std::cout << (is_leap(2400) == true) << std::endl;
    std::cout << (is_leap(2800) == true) << std::endl;
    std::cout << (is_leap(1700) == false) << std::endl;    
    std::cout << (is_leap(1800) == false) << std::endl;
    std::cout << (is_leap(1900) == false) << std::endl;    
    std::cout << (is_leap(2100) == false) << std::endl;    
    std::cout << (is_leap(2200) == false) << std::endl;    
    std::cout << (is_leap(2300) == false) << std::endl;    
    std::cout << (is_leap(2500) == false) << std::endl;    
    std::cout << (is_leap(2600) == false) << std::endl;    
    std::cout << (is_leap(2700) == false) << std::endl;    
    std::cout << (is_leap(2900) == false) << std::endl;    
    std::cout << (is_leap(3000) == false) << std::endl;    
}