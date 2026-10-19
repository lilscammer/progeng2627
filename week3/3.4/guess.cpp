#include <iostream>
#include <string>

int main () {
    int lower, upper, guess, counter = 0;
    std::string feedback = "";

    std::cout << "What is the lower and upper bound of your number?" << std::endl;
    std::cin >> lower >> upper;

    while (feedback != "correct") {
        
        guess = (lower + upper) / 2;
        
        std::cout << "is your number " << guess << "?" << std::endl;
        std::cout << "tell me higher, lower, or correct" << std::endl;
        std::cin >> feedback;

        if (feedback == "higher") {
            lower = guess + 1;
        }
        else if (feedback == "lower") {
            upper = guess - 1;
        }
        else if (feedback != "correct") {
            std::cout << "Invalid input. We'll try again." << std::endl;
        }

        guess = (lower + upper) / 2;

        counter = counter + 1;

    }

    std::cout << "Yay! It took us " << counter << " tries." << std::endl;

}