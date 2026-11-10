#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <string>

bool search_vector (std::string s, const std::vector<std::string>& vin) {
    for (int j = vin.size() - 1; j >= 0; j--) {
        if (s == vin[j]) {
            return true;
        }
    }
    return false;
}

void union_vector (const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout) {
    // adds everything in vin1
    for (int i = vin1.size() - 1; i >= 0; i--) {
        vout.push_back(vin1[i]);
    }
    // adds everything in vin2, that isn't in vin1
    for (int i = vin2.size() - 1; i >= 0; i--) {
        if (!search_vector (vin2[i], vin1)) {
            vout.push_back(vin2[i]);
        }
    }
}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout) {
    for (int i = vin1.size() - 1; i >= 0; i--) {
        if (search_vector (vin1[i], vin2)) {
            vout.push_back(vin1[i]);
        }
    }
}

int main () {
    std::ifstream fruitlist_1, fruitlist_2;
    std::ofstream intersection, union_;
    std::vector<std::string> fruit_vector_1, fruit_vector_2, union_v, intersection_v, search_v;
    std::string temp, list_1_name, list_2_name;

    std::cout << "what is the name of your first list of fruit?" << std::endl;
    std::cin >> list_1_name;
    std::cout << "what is the name of your second list of fruit?" << std::endl;
    std::cin >> list_2_name;

    fruitlist_1.open(list_1_name);
    if (!fruitlist_1.is_open()) {
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    while (fruitlist_1 >> temp) {
        fruit_vector_1.push_back(temp);
    }
    fruitlist_1.close();

    fruitlist_2.open(list_2_name);
    if (!fruitlist_2.is_open()) {
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    while (fruitlist_2 >> temp) {
        fruit_vector_2.push_back(temp);
    }
    fruitlist_2.close();

    union_vector (fruit_vector_1, fruit_vector_2, union_v);
    intersection_vector (fruit_vector_1, fruit_vector_2, intersection_v);

    union_.open("union.txt");
    if (!union_.is_open()) {
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    for (int i = 0; i < union_v.size(); i++) {
        union_ << union_v[i] << std::endl;
    }

    intersection.open("intersection.txt");
    if (!intersection.is_open()) {
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    for (int i = 0; i < intersection_v.size(); i++) {
        intersection << intersection_v[i] << std::endl;
    }

    return 0;

}