#include <iostream>

void myswap (double& A, double& B) {
    double temp;
    temp = A;
    A = B; 
    B = temp;
}

void sort (double& s1, double& s2) {
    if (s1 > s2) {
        myswap (s1, s2);
    }
}

int main () {
    double n1, n2;
    std::cout << "please enter two numbers:" << std::endl;
    std::cin >> n1 >> n2;
    sort (n1, n2);
    std::cout << n1 << " " << n2 << std::endl; 
}