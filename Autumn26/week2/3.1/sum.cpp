#include <iostream>

int main () {
    int n , sum = 0;

    std::cout << "Enter a number (or 0 to quit)" << std::endl;
    std::cin >> n; 

    while (n != 0) {

        sum = sum + n;
        std::cout << "The sum so far is: " << sum << std::endl;

        std::cout << "Enter a number (or 0 to quit)" << std::endl;
        std::cin >> n; 

    }
    

}