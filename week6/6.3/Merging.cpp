#include <iostream>
#include <vector>

void merge_vectors_int(const std::vector<int>& v1, const std::vector<int>& v2, std::vector<int>& merged) {
    // compares v2 to an element in v1, starting from the lowest value in v1
    // we see which is smaller, and slot the v2 element in if it is smaller.
    // then we continue with the next value of v2, and instead of restarting 
    // we continue down the list of v1.  
    
    int index_v1 = 0, index_v2 = 0;
    // I do this n + m - 1 times, so I stop before the last evaluation
    // if I don't, the last evaluation will just give me a repeat of the value before
    // cus they will remain at the same indexes, so Im doing the same comparison again 
    for (int i = 0; i < (v1.size() + v2.size() - 1); i++) {
        if (v2[index_v2] < v1[index_v1]) {
            merged.push_back(v2[index_v2]);
            index_v2++;
        }
        else {
            merged.push_back(v1[index_v1]);
            index_v1++;
        }

        if (index_v1 == v1.size()) {
            index_v1--;
            index_v2++;
        }
        if (index_v2 == v2.size()) {
            index_v2--;
            index_v1++;
        }
    }

// this makes sure that we output the final digit that is larger
// making up for the n + m - 1
    if (v2[v2.size() - 1] > v1[v1.size() - 1]) {
        merged.push_back(v2[v2.size() - 1]);
    }
    else {
        merged.push_back(v1[v1.size() - 1]);
    }
}

int main () {
    std::vector<int> v1, v2, vout, expected_output;
    int temp;

    v1 = {1, 3, 5, 6};
    v2 = {4, 6, 10};
    expected_output = {1, 3, 4, 5, 6, 6, 10};
    merge_vectors_int(v1, v2, vout);
    for (int i = 0; i < vout.size(); i++) {
        temp = vout[i];
        std::cout << temp << " ";
    }
    if(vout == expected_output){
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }

}