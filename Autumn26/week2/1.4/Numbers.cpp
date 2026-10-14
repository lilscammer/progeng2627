#include <iostream>

int main (){
    double n1, n2, sum;
    //declares 3 variables of numerical type
    //double is the type of variable, which is general decimal numbers

    std::cout << "please enter the first number" <<std::endl;
    std::cin >> n1;

    std::cout << "please enter the second number" << std::endl;
    std::cin >> n2;

    sum = n1 * n2;

    //NOTE THAT "=" does not mean equality. 
    // a = b + c. means that the value of b + c is stored under the variable of a
    // thus, a + b = c is NOT a valid instruction. 

    std::cout << n1 << " * " << n2 << " = " << sum << std::endl;
}