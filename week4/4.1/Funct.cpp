#include <iostream>

// first, we define a new function in myabs
// then we specify that the function has an input parater of type double
// and returns a value that is a double

// the "double" here tells the function what type of output the function should return
// the "double in" basically says that the input to the function will be a double. 
// "in" is NOT A SPECIAL NAME. just defining a variable .
double myabs(double in) {
    double abs;

    if (in < 0) {
        abs = - in;
    }
    else {
        abs = in;
    }

    return abs;

}

// functions can receive n values as input (can have unlimited parameters, and will require a corresponding amount of arguments)
// and provides an output as the "return" value
// can declare parameters for use as input, but also as output, and as both input and output (passing by reference)
// COME BACK LATER.  


// the "int" here is cus we normally return an integer when the program succeeds. 
// like return "0" for when it works
int main () {
    double n;

    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "|" << n << "| = " << myabs(n) << std::endl;

}