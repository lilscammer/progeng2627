#include <iostream>
#include <string>

int main () {
    std::string s;
    std::cin >> s;

    // note that the type that s[i] generates is of type char, not string
    // char has '' instead of a string that has ""
    // we can convert a character back to a string by creating
    // string, and doing s.push_back(c) 
    for (int i = 0; i < s.size(); i++) {
        std::cout << s[i] << std::endl;
    }
}