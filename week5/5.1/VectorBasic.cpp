#include <iostream>
#include <vector>

// instead of doing v[1]
// I can also do v.at(1) to get the number at 1. 
// it will help to check if index 1 exists in the first place
// if it exists, then it will be that number. if it doesn't then error
// BUT THIS HAS AN ADDITIONAL COST



int main () {
    int n;
    std::vector<int> v;

    v.push_back (5);
    v.push_back (4);
    v.push_back (3);
    v.push_back (2);

    n = (v[0] * (v[1] + v[2]));

    std::cout << n << std::endl;

    std::vector<int> test;

    test.push_back (10);
    test.push_back (20);

    std::cout << test.at (0) << std::endl;
    std::cout << test.at (1) << std::endl;

    test.at (1) = 15;
    
    std::cout << test.at (1) << std::endl;
    std::cout << test.at (2) << std::endl;

}