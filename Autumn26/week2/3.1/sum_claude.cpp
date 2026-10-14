#include <iostream>

int main () {
    int n , sum = 0;

// if I input a non-valid input into std::cin >> n, then 
// the code just keeps running non stop, and keeps printing "enter a number"
// this is because it "hello" cannot fit inside n
// so std::cin is in a failed state, and continues to be failed, until it is cleared. 
// so the hello keeps staying inside the buffer, jamming up the system. 

    while (true) {
        std::cout << "Enter a number (or 0 to quit)" << std::endl;
        
        //this calls for an input to be entered to n
        // but also checks if the input fails. 
        // if the input fails, the "break" forces the program to exit the loop
        if (!(std::cin >> n)){
        
        // NOTE, you can do std::cin inside a function. BECAUSE:
        // first std::cin >> n runs and n is assigned to a value
        // then, std::cin is used as the condition for the "if"
        // but since std::cin is not a bool, C++ converts it to one
        // if std::cin properly worked, then true. if it didnt, then false. 
            
            std::cout << "InVaLiD InPuT" << std::endl;
            break;
            // this "break" command jumps out of loops
            // "While" is a loop, but "if" is not a loop. 
        }

        if (n == 0) {
            break;
        }

        sum = sum + n;

        std::cout << "The sum so far is: " << sum << std::endl;
        
    }

    std::cout << "The final sum is: " << sum << std::endl;

}