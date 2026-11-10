#include <iostream>

void myswap (double& A, double& B) {
    double temp;
    temp = A;
    A = B; 
    B = temp;
}

void sort (double& s1, double& s2, double& s3) {
    if (s1 > s2) {
        myswap (s1, s2);
    }
    if (s2 > s3) {
        myswap (s2, s3);
    }
    if (s1 > s2) {
        myswap (s1, s2);
    }
}

int main () {
    double n1, n2, n3;
    std::cout << "please enter three numbers:" << std::endl;
    std::cin >> n1 >> n2 >> n3;
    sort (n1, n2, n3);
    std::cout << n1 << " " << n2 << " " << n3 << std::endl; 
}