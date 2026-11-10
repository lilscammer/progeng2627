#include <iostream>
#include <vector>

int search_vector (int n, const std::vector<int>& vin) {
    for (int i = 0; i < vin.size(); i++) {
        if (vin[i] == n) {
            return i;
        }
    }
    return -1;
}

int main () {
    std::vector<int> v;
    int n, expected_result;
    
    v = {2, 3, 4, 5, 1};
    n = 3; 
    expected_result = 1;
    std::cout << (search_vector(n, v) - expected_result) << std::endl;

    v = {1, 2, 3, 4, 5, 1};
    n = 3;
    expected_result = 2;
    std::cout << (search_vector(n, v) - expected_result) << std::endl;

    v = {1, 2, 3, 0, 4, 5};
    n = 6;
    expected_result = -1;
    std::cout << (search_vector(n, v) - expected_result) << std::endl;

    v = {1, 2, -2, -3, 4, 5};
    n = -3;
    expected_result = 3;
    std::cout << (search_vector(n, v) - expected_result) << std::endl;

    v = {1, 2, -2, -2, 3, 4, 5};
    n = -2;
    expected_result = 2;
    std::cout << (search_vector(n, v) - expected_result) << std::endl;

}