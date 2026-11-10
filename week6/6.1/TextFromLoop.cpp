#include <iostream>
#include <fstream>

int main () {
    std::ifstream infile;
    infile.open ("input.txt");

    if (infile.is_open()) { 
        int temp, sum = 0;

        // the condition in the loop below is an idiomatic way
        // of reading from text files in C++ 

        // (infile >> tmp) at the same time performs the reading attempt
        // and returns a value that is evaluated as a boolean

        // if the reading attempt is successful then
        // the content is stored in temp and what is returned evaluates to true 
        // (so we keep going with the loop)

        // if the reading attempt is unsuccessful then
        // nothing new is stored in tmp and what is returned 
        // evaluates to false (so the loop terminates)

        while (infile >> temp) {
            sum = sum + temp;
            std::cout << temp << std::endl;
        }

        infile.close();

        std::cout << "the sum is: " << sum << std::endl;
    }
    else {
        std::cout << "error opening file" << std::endl;
    }
}