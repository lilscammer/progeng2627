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
    int input_year;

    std::cout << "please enter a year" << std::endl;
    std::cin >> input_year;

    if (is_leap(input_year)) {
        std::cout << "It is a leap year" << std::endl;
    }
    else {
        std::cout << "it's not a leap year" << std::endl;
    }
}