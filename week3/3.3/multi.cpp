#include <iostream>

int main () {
    int n, mult;
    std::cin >> n;

    for (int y = 1; y < n + 1; y++) {
        for (int x = 1; x < n + 1; x++) {
            mult = x * y;
            std::cout << mult << "\t";
            // "\t" IS BASICALLY A TAB FUNCTION
        }
        
        std::cout << std::endl;
    }
}