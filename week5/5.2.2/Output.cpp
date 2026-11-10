#include <iostream>
#include <vector>

std::vector<int> from_1_to_n (int n) {
    std::vector<int> vout;

    for (int i = 0; i < n; i++) {
        vout.push_back (i + 1);
    }

    return vout;

}

int main () {
    std::vector<int> v;
    int n;
    std::cin >> n;

    v = from_1_to_n(n);

    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << std::endl;
    }
}