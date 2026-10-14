#include <iostream>

int main () {
    int year;

    std::cout << "What year would you like to check?" << std::endl;
    std::cin >> year;

    if (year % 4 == 0) {

        if (year % 100 == 0) {
            
            if (year % 400 == 0) {

                std::cout << year << " is a leap year";

            }
            
            else {
                std::cout << year << " is NOT a leap year";
            }
        }
        else {
            std::cout << year << " is a leap year";
        }
        
     }

    else {
        std::cout << year << " is NOT a leap year";
    }
}
// IM THE GOAT. FIRST TRY. 
// except that I forgot to do == and did = instead. 