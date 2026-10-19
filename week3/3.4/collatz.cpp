#include <iostream>

int main () {
    int n, counter = 0, max = 0;
    std::cin >> n;

    if (n > 0) {
        while (n != 1) {
            std::cout << n << " ";

            if (n > max) {
                max = n;
            }

            if (n % 2 == 0) {
                n = n / 2;
            }
            else {
                n = 3 * n + 1;
            }

            counter = counter + 1;
        }

        std::cout << n << std::endl;
        std::cout << "It took " << counter << " steps" << std::endl;
        std::cout << "The maximum value was " << max << std::endl;
    }

    else {
        std::cout << "this is not a valid input" << std::endl;
    }
}