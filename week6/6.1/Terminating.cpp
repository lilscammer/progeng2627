#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
// cstdlib header needed for EXIT_failure

int main () {
    std::ifstream infile;
    std::string file_name;

    std::cout << "what is your file name?" << std::endl;
    std::cin >> file_name;

    infile.open (file_name);

    if (!infile.is_open()) {
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    int temp;

    while (infile >> temp) {
        std::cout << temp << std::endl;
    }

    infile.close();
}