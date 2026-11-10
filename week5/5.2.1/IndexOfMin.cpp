#include <iostream>
#include <vector>

int min_vector_element (const std::vector<double>& vin) {
    int index = 0, smallest = vin[0];

    for (int i = 1; i < vin.size(); i++) {
        if (vin[i] < smallest) {
            index = i;
            smallest = vin[i];
        }
    }

    return index;
}

int main () {
    std::vector<double> v;
    double expected_result;

    v = {2, 3, 4, 5, 1};
    expected_result = 4;
    std::cout << (std::abs(min_vector_element(v)) - expected_result) << std::endl;

    v = {1, 2, 3, 4, 5, 1};
    expected_result = 0;
    std::cout << (std::abs(min_vector_element(v)) - expected_result) << std::endl;

    v = {1, 2, 3, 0, 4, 5};
    expected_result = 3;
    std::cout << (std::abs(min_vector_element(v)) - expected_result) << std::endl;

    v = {1, 2, -2, -3, 4, 5};
    expected_result = 3;
    std::cout << (std::abs(min_vector_element(v)) - expected_result) << std::endl;

    v = {1, 2, -2, -2, 3, 4, 5};
    expected_result = 2;
    std::cout << (std::abs(min_vector_element(v)) - expected_result) << std::endl;

}