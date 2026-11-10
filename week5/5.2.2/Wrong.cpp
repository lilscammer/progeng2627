#include <iostream>
#include <vector>

void from_1_to_n (int n, std::vector<int>& vout) {
    for (int i = 0; i < n; i++) {
        vout.push_back (i + 1);
    }
}

int main () {
    std::vector<int> v;

    for (int n = 3; n < 7; n++) {
        
        v.clear();
        from_1_to_n(n, v);

        std::cout << "printing vector: " << std::endl;
        for (int i = 0; i < v.size(); i++) {
            std::cout << v[i] << " ";
        }
        std::cout << std::endl;
    }
}

// I think it will print 1 2 3
// then 1 2 3 1 2 3 4
// then 1 2 3 1 2 3 4 1 2 3 4 5 and so on, cus the v is never cleared