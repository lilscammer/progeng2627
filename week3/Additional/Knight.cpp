#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

int main () {
    std::srand(std::time(NULL));

    bool valid = false, win = false;

    while (!win) {

        int x_start = std::rand() % 6 + 2;
        int y_start = std::rand() % 6 + 2;
        int x_temp, y_temp, counter = 0, moves = 5;

        std::cout << "You are starting at: (" << x_start << ", " << y_start << ")" << std::endl;
        
        while (moves > 0 && !win) {
            if (!((x_start == 1 || x_start == 8) && (y_start == 1 || y_start == 8))) {

                std::cout << "What square do you want to go to (in x y coordinates)? You have: " << moves << " moves left" << std::endl;
                std::cin >> x_temp >> y_temp;

                if (abs (x_start - x_temp) == 1 && abs (y_start - y_temp) == 2) {
                    valid = true;
                }

                else if (abs (x_start - x_temp) == 2 && abs (y_start - y_temp) == 1) {
                    valid = true;
                }

                if (valid){
                    x_start = x_temp;
                    y_start = y_temp;
                    counter++;
                    moves--;

                    std::cout << "This is a valid move" << std::endl;
                    valid = false;
                }
                else {
                    std::cout << "This is NOT a valid move" << std::endl;
                }
            }

            else {
                win = true;
            }
            
        }

        if (win) {
            std::cout << "Congratulations!!! You finished the puzzle!!" << std::endl;
            std::cout << "You took " << counter << " steps!" << std::endl;
        }

        else {
            std::cout << "You ran out of moves. Try again." << std::endl;
        }
            
    }

   

}