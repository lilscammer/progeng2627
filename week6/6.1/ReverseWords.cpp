#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>

int main () {
    std::ifstream infile;
    std::vector<std::string> v;
    std::string temp;

    infile.open ("wordInput.txt");

    if (!infile.is_open()) {
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    while (infile >> temp) {
        v.push_back(temp);
    }

    infile.close();

    for (int i = v.size() - 1; i >= 0; i--) {
        std::cout << v[i] << " ";
    }
    
    std::cout << std::endl;

}
