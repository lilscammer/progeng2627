#include <iostream>
#include <string>

void swap (std::string& a, std::string& b) {
    std::string temp;

    temp = a;
    a = b;
    b = temp;

}

int main () {
    std::string n1, n2;
    
    n1 = "me"; 
    n2 = "help";
    swap (n1, n2);
    std::cout << n1 << n2 << std::endl;

    n1 = "you"; 
    n2 = "love";
    swap (n1, n2);
    std::cout << n1 << n2 << std::endl;

    n1 = "yankee"; 
    n2 = "tango";
    swap (n1, n2);
    std::cout << n1 << n2 << std::endl;

    n1 = "bye"; 
    n2 = "good";
    swap (n1, n2);
    std::cout << n1 << n2 << std::endl;

}