#include <iostream>

int main () {
    int input, n, acc = 1;
    
    std::cin >> input;
    n = input;

    // leave this "for" loop to i
    // it is the main character here. 
    for (int i = 0; i < input; i++) {
        acc = acc * n;
        n = n - 1;

    }

    std::cout << input << "! is " << acc << std::endl;

}