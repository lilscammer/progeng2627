#include <iostream>
#include <string>

int main () {
    std::string command;

    std::cout << "Can you guess the command to tell me to stop?" << std::endl;
    std::cin >> command;

    // NOTE, you cannot do while(-11 < n < 11)
    // cpp will do: "is -11 < n?" then output a T or F 
    // then cpp converts that result into an integer T = 1, F = 0
    // then the expression becomes while(1 < 11), or while(0 < 11)
    // which will always be true. 

    // must separate the range and use the && operator

    while (command != "STOP") {
        std::cout << "Wrong! " << command << " is not the command. Guess again:" << std::endl;
        std::cin >> command;
    }

    std::cout << "Correct! Well done!" << std::endl;

}