#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

int main () {
    std::ifstream infile;
    infile.open ("input.txt");

    int temp;
    std::vector<int> v;

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    while (infile >> temp) {
        v.push_back (temp);
    }

    infile.close();
    
    for (int i = v.size() - 1; i > -1; i--) {
        std::cout << v[i] << std::endl;
    }

}
