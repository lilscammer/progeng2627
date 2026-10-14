#include <iostream>

int main () {
    double a, b, c;

    a = 1;
    b = 2;
    c = a + b;

    std::cout << c << std::endl;
    //this will print 3

    a = 2; 

    std::cout << c << std::endl; 
    //I expect that it will still print "3" 
    //because the variable of C is not updated yet. 

    c = a + b;
    std::cout << c << std::endl; 
    // I expect it will pritn "4"
    // because the variable of C has been updated

}