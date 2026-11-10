#include <iostream>
#include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout) {
    for (int i = 0; i < vin.size(); i++) {
        if (vin[i] < t) {
            vout.push_back(vin[i]);
        }
    }
}

int main () {
    std::vector<double> v, vout;
    double t;

    v = {1, 2, 3, 4, 5, 6};
    t = 4;
    filter_v (v, t, vout);
    for (int i = 0; i < vout.size(); i++) {
        std::cout << vout[i] << " ";
    }
    std::cout << std::endl;

    vout.clear();
    v = {-1, 4, 12, -43, 232, 67};
    t = 100;
    filter_v (v, t, vout);
    for (int i = 0; i < vout.size(); i++) {
        std::cout << vout[i] << " ";
    }
    std::cout << std::endl;

    vout.clear();
    v = {-1, -23, -43, -12, -2 , -67};
    t = -12;
    filter_v (v, t, vout);
    for (int i = 0; i < vout.size(); i++) {
        std::cout << vout[i] << " ";
    }
    std::cout << std::endl;

}