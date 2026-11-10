#include <iostream>
#include <string>
#include <vector>
#include <utility> // for std::pair

std::string char_to_string(char c){
    std::string s;
    s.push_back(c);
    return s;
}

bool is_palindrome (std::string s) {
    int i = 0;
    int j = s.size() - 1 - i;
    while (i < (s.size()/2)) {
        
        
        // to skip over spaces
        if (s[i] == ' ') {
            i++;
        }
        if (s[j] == ' '){
            j--;
        }

        if (s[i] != s[j]) {
            return false;
        }

        j--;
        i++;
    }
    return true;
}

int main () {

    // a vector, which contains 5 pairs. 
    
    std::vector<std::pair<std::string, bool>> test_cases = 
    {
        {"a man a plan a canal panama", true}, 
        {"a man plan a canal panama", false},
        {"a toyota", true},
        {"never odd or even", true},
        {"never even or odd", false}
    };

    // each variable of type std::pair has two fields called first and second
    for (int i = 0; i < test_cases.size(); i++) {
        bool test = is_palindrome(test_cases[i].first);
        if (test == test_cases[i].second) {
            std::cout << "passed" << std::endl;
        }
        else {
            std::cout << "FAILED" << std::endl;
            std::cout << test_cases[i].first << std::endl;
            std::cout << "expected: " << test_cases[i].second << std::endl;
            std::cout << "got: " << test << std::endl;
        }
    }
}
