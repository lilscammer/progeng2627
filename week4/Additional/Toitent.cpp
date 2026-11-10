#include <iostream>

int gcd (int a, int b) {

    // always makes a the larger number
    if (b > a) {
        int temp;
        temp = a;
        a = b;
        b = temp;
    }

    int remainder = 1, quotient;

    while (remainder != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    return a;
}

int euler_toitent (int n) {
    int counter = 0;

    for (int i = 1; i < n + 1; i++) {
        if (gcd (n, i) == 1) {
            counter++;
        }
    }

    return counter;
}

int toitent_sum (int n, int& depth) {
    int sum = 0;
    depth = 0;
    while (n != 1){
        n = euler_toitent (n);
        sum = sum + n;
        depth++;
    }

    return sum;
}

// screw this code. I dont want to debug this. 
int  local_toitent_depth_peak (int a, int b, int& depth_1, int& depth_2, int& depth_3) {
    int peak_str, strongest_peak, strongest_peak_str;
    
    toitent_sum (a - 1, depth_1);
    toitent_sum (a, depth_2);
    toitent_sum (a + 1, depth_3);
    strongest_peak = -1;
    strongest_peak_str = (2 * depth_2 - depth_1 - depth_3) / 2;

    for (int n = a; n < b + 1; n++) {
        toitent_sum (n - 1, depth_1);
        toitent_sum (n, depth_2);
        toitent_sum (n + 1, depth_3);

        if ((depth_2 > depth_1) && (depth_2 > depth_3)) {
            peak_str = (2 * depth_2 - depth_1 - depth_2) / 2;
            
            if (peak_str > strongest_peak_str) {
                strongest_peak = n;
                strongest_peak_str = peak_str;
            }
        }
    } 

    if (strongest_peak == -1) {
        depth_1 = 0;
        depth_2 = 0;
        depth_3 = 0;
    }
    else {
        toitent_sum (strongest_peak - 1, depth_1);
        toitent_sum (strongest_peak, depth_2);
        toitent_sum (strongest_peak + 1, depth_3);

    }
        
    return strongest_peak;

}

int main () {
    int a, b, depth_1 = 0, depth_2 = 0, depth_3 = 0, output;

    std::cin >> a >> b;

    output = local_toitent_depth_peak(a, b, depth_1, depth_2, depth_3);

    std::cout << output << std::endl;
    std::cout << depth_1 << std::endl;
    std::cout << depth_2 << std::endl;
    std::cout << depth_3 << std::endl;

}