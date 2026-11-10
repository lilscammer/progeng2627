#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>

void frequency (const std::vector<std::string>& text_vector, const std::vector<std::string>& words_vector, std::vector<int>& occurances_vector) {
    for (int i = 0; i < words_vector.size(); i++) {
        int counter = 0;
        for (int j = 0; j < text_vector.size(); j++) {
            if (words_vector[i] == text_vector[j]) {
                counter++;
            }
        }
        occurances_vector.push_back(counter);
    }
}

int main () {
    std::ifstream text, words;
    std::ofstream occurances;
    std::vector<std::string> text_vector, words_vector;
    std::vector<int> occurances_vector;
    std::string temp;

    text.open("text.txt");
    if (!text.is_open()) {
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    while (text >> temp) {
        text_vector.push_back(temp);
    }
    text.close();

    words.open("words.txt");
    if (!words.is_open()) {
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    while (words >> temp) {
        words_vector.push_back(temp);
    }
    words.close();

    frequency(text_vector, words_vector, occurances_vector);

    occurances.open("Occurances.txt");

    for (int i = 0; i < words_vector.size(); i++) {
        occurances << words_vector[i] << ": " << occurances_vector[i] << std::endl;
    }

    occurances.close();
}

