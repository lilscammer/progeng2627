#include <iostream>

int main () {
    int n = 1, max = 0, min;

    std::cout << "Please enter a number:" << std::endl;
    std::cin >> n;

    max = n;
    min = n;

    while (n != 0) {
        if (n > max) {
            max = n;
        }

        if (n < min){
            min = n;
        }

        if (n != 0) {
            std::cout << "The maximum so far is: " << max << std::endl;
            std::cout << "The minimum so far is: " << min << std::endl;
        }

        std::cout << "Please enter a number:" << std::endl;
        std::cin >> n;

    }

    std::cout << "Your maximum was: " << max << std::endl;
    std::cout << "Your minimum was: " << min << std::endl;

}