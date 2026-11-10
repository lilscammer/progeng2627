#include <iostream>
#include <vector>

int main () {
    std::vector<double> v;
    int n, temp, compare;
    
    std::cout << "how many numbers do you want to store?" << std::endl;
    std::cin >> n;
    std::cout << "enter the numbers you want to store" << std::endl;

    for (int i = 0; i < n; i++) {
        std::cin >> temp;
        v.push_back (temp); 
    }

    std::cout << "what number do you want to compare them to?" << std::endl;
    std::cin >> compare;
    std::cout << "these are the numbers less than " << compare << std::endl;

    for (int j = 0; j < n; j++) {
        if (v[j] < compare) {
            std::cout << v[j] << std::endl;
        }
    }

    

}