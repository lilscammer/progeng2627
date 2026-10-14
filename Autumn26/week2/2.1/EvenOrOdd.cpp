#include <iostream>

int main (){
    int n, rem;

    std::cout << "please enter a number" << std::endl;
    std::cin >> n;

    rem = n % 2;

    bool is_even;
    // boolean variables store a true or false value

    is_even = (rem == 0);
    // this basically assigns the boolean value is_even the value of true or false, depending on rem==0

    // the == sign asks a true/false qn, and returns a true or false
    // not used to define anything, mostly for conditionals
    if(is_even) {
        // the if () {} command executes the curly brackets if the item in () is true               
        std::cout << "the number is even" << std::endl;
    }
    else {
        std::cout << "the number is odd" << std::endl;
    }
}