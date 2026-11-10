#include <iostream>
#include <vector>

// we either pass by copy normally (problem cus we waste time generating a new vector)
// or pass by reference (giving the full vector with editing perms)
// or pass by const reference (giving the full vector with only viewing perms)

double sum_vector (const std::vector<double>& vin) {
    double sum = 0;

    for (int i = 0; i < vin.size(); i++) {
        sum = sum + vin[i];
    }

    return sum;

}

int main () {
    std::vector<double> v;
    int n, temp; 

    std::cout << "how many numbers do you want to sum" << std::endl;
    std::cin >> n;
    std::cout << "enter the numbers" << std::endl;

    for (int i = 0; i < n; i++) {
        std::cin >> temp;
        v.push_back(temp);
    }

    std::cout << "the sum is: " << sum_vector(v) << std::endl;
}