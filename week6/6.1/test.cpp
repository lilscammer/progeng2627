#include <iostream>
#include <fstream>
// header fstream requried for working with text files

int main () {
    std::ifstream infile;
    // we create an object called "infile"
    // it need not be the actual name of your file
    
    infile.open("input.txt");

    // is_open is a bool that checks if the file has been opened.   
    if (infile.is_open()) {
        int temp;

        infile >> temp;
        std::cout << temp << std::endl;
        // assigns and prints the first number in the file

        infile >> temp;
        std::cout << temp << std::endl;
        // reads and prints the 2nd number in the file. 

        infile >> temp;
        std::cout << temp << std::endl;
        
        infile >> temp;
        std::cout << temp << std::endl;
        
        infile.close();
    }
    else {
        std::cout << "error opening file" << std::endl;
    }
}