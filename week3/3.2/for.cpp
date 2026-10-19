#include <iostream>

int main () {
    int n;
    std::cin >> n;

    // initialisation condition increment / update
    // BASICALLY A WHILE LOOP BUT COMPRESSED
    for (int i = 0; i < n; i++) {
        // i++ is basically i = i + 1
        // but i ++ is done AT THE END OF THE FOR LOOP
        // VERY IMPORTANT TO TAKE NOTE
        std::cout << i << std::endl;
    }
}