#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int main () {
    std::ifstream infile;
    std::ofstream outfile;
    std::vector<std::string> v;
    std::string input_file_name, output_file_name, temp;

    std::cout << "what is the name of your input file?" << std::endl;
    std::cin >> input_file_name;

    infile.open(input_file_name);

    if (!infile.is_open()) {
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    while (infile >> temp) {
        v.push_back(temp);
    }

    infile.close();
    
    std::cout << "what is the name of your output file?" << std::endl;
    std::cin >> output_file_name;

    outfile.open(output_file_name);

    if (!outfile.is_open()) {
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    for (int i = v.size() - 1; i >= 0; i--) {
        outfile << v[i] << " ";
    }

    outfile << std::endl;

    outfile.close();
}