#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>

void translating (std::vector<std::string>& text_vector, const std::vector<std::string>& dictionary_vector) {
    std::string temp;
    for (int i = 0; i < dictionary_vector.size(); i = i + 2) {
        for (int j = 0; j < text_vector.size(); j++) {
            if (dictionary_vector[i] == text_vector[j]) {
                text_vector[j] = dictionary_vector[i + 1];
            }
        }
    }
}

int main () {
    std::ifstream text, dictionary;
    std::ofstream translation;
    std::vector<std::string> text_vector, dictionary_vector;
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

    dictionary.open("dictionary.txt");
    if (!dictionary.is_open()) {
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    while (dictionary >> temp) {
        dictionary_vector.push_back(temp);
    }
    dictionary.close();

    translating (text_vector, dictionary_vector);

    translation.open("translation.txt");
    for (int i = 0; i < text_vector.size(); i++) {
        translation << text_vector[i] << " ";
    }
    translation.close();
}