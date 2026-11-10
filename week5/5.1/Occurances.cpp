#include <iostream>
#include <vector>

int main () {
    std::vector <double> v, index;
    int n, temp, s, counter = 0;

    std::cout << "how many numbers do you want to store?" << std::endl;
    std::cin >> n;
    std::cout << "enter the numbers you want to store" << std::endl;

    for (int i = 0; i < n; i++) {
        std::cin >> temp;
        v.push_back (temp);
    }

    std::cout << "enter the number you want to find" << std::endl;
    std::cin >> s;

    for (int j = 0; j < n; j++) {
        if (v[j] == s) {
            counter ++;
            index.push_back (j);
        }
    }

    if (counter == 0) {
        std::cout << "there are no occurances of " << s << std::endl;
    }
    else {
        std::cout << "there are " << counter << " occurances of " << s << " at indices:" << std::endl;
        for (int k = 0; k < index.size(); k++) {
            std::cout << index[k] << std::endl;
        }
    }
}