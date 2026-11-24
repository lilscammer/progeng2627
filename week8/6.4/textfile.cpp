#include <iostream>
#include <fstream>
#include <vector>
#include <string>

// argc is the number of command line arguments
// argv is an array of C-style strings
// we'll see what this means more in detail later on

int main(int argc, char* argv[]){
    if (argc == 2){
        std::string temp;
        std::ifstream text {argv[1]}; //this opens a file with the name stored inside argv[1]
        while (text >> temp) {
            std::cout << temp << std::endl;
        }
    }
    else {
        std::cout << "error. wrong number of arguments" << std::endl;
    }
}