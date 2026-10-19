#include <iostream>

int main () {
    int n, i = 0, j = 0;
    std::cin >> n;

    while (i < n) {
        while (j < n) {
            std::cout << "*";
            j++;
        }
        std::cout << std::endl;
        i++;
        j = 0; // need to reset j to 0 so that the inner "while" repeats. 
    }
}