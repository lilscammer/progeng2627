#include <iostream>

int main () {
    int n;

    std::cin >> n; // initialisation

    for ( ; n != 0; ) { // condition
        std::cout << n << std::endl;
        std::cin >> n; // update
    }
    // IN THIS CASE, IT IS BETTER TO USE WHILE. 
    // WE USE "FOR" IF THERE IS A SIMPLE COUNTING PATTERN. 
    // WHILE IS USED OTHERWISE. 
}