#include <iostream>
#include <vector>
#include <string>

bool digits_in_base(int integer, int base, std::vector<int>& digits) {
    int remainder;
    if ((base >= 2) && (base <= 16)) {
        while (integer != 0) {
            remainder = integer % base;
            integer = integer - remainder;
            integer = integer / base;
            digits.push_back(remainder);
        }
        return true;
    }
    else {
        return false;
    }
}

void print_digits_as_number (std::vector<int>& digits) {
    std::vector<std::string> letters {"A", "B", "C", "D", "E", "F"};
    int letter_index = 0;
    
    for (int i = digits.size() - 1; i > -1; i--) {
        if (digits[i] > 9) {
            letter_index = digits[i] - 10;
            std::cout << letters[letter_index];
        }
        else {
            std::cout << digits[i];
        }
    }
    std::cout << std::endl;
}

int digits_to_decimal (const std::vector<int>& digits, int base) {
    int decimal = 0;
    for (int i = 0; i < digits.size(); i++) {
        int mult = 1;
        for (int c = i; c > 0; c--) {
            mult = mult * base;
        }
        decimal = decimal + (digits[i] * mult);
    }

    return decimal;
}

bool convert_base (const std::vector<int>& digits_old, std::vector<int>& digits_new, int base1, int base2) {
    if (digits_in_base (digits_to_decimal(digits_old, base1), base2, digits_new)) {
        return true;
    }
    else {
        return false;
    }
}

int main () {
    std::vector<int> digits_old, digits_new;
    int integer, base1, base2;

    std::cin >> integer >> base1 >> base2;

    digits_in_base(integer, base1, digits_old);
    std::cout << "In " << base1 << ", it is: ";
    print_digits_as_number(digits_old);

    if (convert_base(digits_old, digits_new, base1, base2)) {
        std::cout << "In " << base2 << ", it is: ";
        print_digits_as_number(digits_new);
    }
    else {
        std::cout << "Invalid base" << std::endl;
    }

    return 0;
}