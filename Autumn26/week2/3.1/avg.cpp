#include <iostream>

int main () {
    //MISTAKE. I LET COUNTER AND SUM BE INTEGERS.
    // BUT IF THEY ARE INTEGERS, THEN ALTHOUGH AVG IS A DOUBLE
    // THEY CANNOT UNDERGO DIVISION WITH DECIMAL PLACES
    // SO AVG WILL NOT GIVE ME DIVISION WITH DECIMAL PLACES
    int input;
    double avg = 0.0, counter = 0, sum = 0;;

    std::cout << "Enter a number to take the average of: (or 0 to quit)" << std::endl;
    std::cin >> input;

    while (input != 0) {
        counter = counter + 1;
        sum = sum + input;
        avg = sum / counter;
        std::cout << "Your average so far is: " << avg << std::endl;
        
        std::cout << "Enter a number to take the average of: (or 0 to quit)" << std::endl;
        std::cin >> input;
    }

    std::cout << "Your final average is: " << avg << std::endl;

}