#include <iostream>
#include <vector>

void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout) {
    for (int i = 0; i < vin1.size(); i++) {
        vout.push_back(vin1[i]);
    }
    for (int j = 0; j < vin2.size(); j++) {
        vout.push_back(vin2[j]);
    }
}

int main () {
    std::vector<int> v1, v2, vtot;

    v1 = {1, 2, 3, 4};
    v2 = {1, 2, 3, 4};
    append_vectors (v1, v2, vtot);
    for (int i = 0; i < vtot.size(); i++) {
        std::cout << vtot[i] << " ";
    }
    std::cout << std::endl;

    vtot.clear();
    v1 = {};
    v2 = {3, 4};
    append_vectors (v1, v2, vtot);
    for (int i = 0; i < vtot.size(); i++) {
        std::cout << vtot[i] << " ";
    }
    std::cout << std::endl;

    vtot.clear();
    v1 = {};
    v2 = {};
    append_vectors (v1, v2, vtot);
    for (int i = 0; i < vtot.size(); i++) {
        std::cout << vtot[i] << " ";
    }
    std::cout << std::endl;
}