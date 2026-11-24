#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <vector>

// takes the 2d coords of the number, and returns the 1d coords
int twod_to_oned(int row, int col, int rowlen){
    return row*rowlen+col;
}

// checks if a number is in a vector. returns index if yes. returns -1 if no
int mfind(int n, const std::vector<int>& v){
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == n) {
            return i;
        }
    }
    return -1;
}

// takes in vector, and checks that it has all the numbers from 1 to v.size() inside
bool check_sequence(const std::vector<int>& v){
    for (int i = 1; i <= v.size(); i++) {
        if (mfind(i, v) == -1) {
            return false;
        }
    }
    return true;
}

// takes in row index, 1d input sudoku, and outputs by reference an output vector 
void get_row(int r, const std::vector<int>& in, std::vector<int>& out){
    int length = std::sqrt(in.size()), index;
    for (int i = 0; i < length; i++) {
        index = twod_to_oned(r, i, length);
        out.push_back(in[index]);
    }
}

// takes in column index, 1d input sudoku, and outputs by reference an output vector 
void get_col(int c, const std::vector<int>& in, std::vector<int>& out){
    int length = std::sqrt(in.size()), index;
    for (int i = 0; i < length; i++) {
        index = twod_to_oned(i, c, length);
        out.push_back(in[index]);
    }
}

// takes in subsq index, 1d input sudoku, and outputs by reference an output vector
void get_subsq(int subs, const std::vector<int>& in, std::vector<int>& out){
    int length = std::sqrt(in.size()), subsq_length = std::sqrt(length);
    int row, column;

    // no. of subsquares in each row or column = subsq_length
    // divide and round down to lowest integer. then multiply to get the row
    row = (subs / subsq_length) * subsq_length;
    // find remainder to know how far "right" the subsquare is. then multiply to get column. 
    column = (subs % subsq_length) * subsq_length;

    for (int i = 0; i < subsq_length; i++) {
        for (int j = 0; j < subsq_length; j++) {
            out.push_back(in[twod_to_oned(row + j, column + i, length)]);
        }
    }
}

// check if sudoku is valid
bool valid_sudoku(const std::vector<int>& g){
    int side = std::sqrt(g.size()); 
    std::vector<int> seq;

    // check row
    for(int i = 0; i < side; i++){
        seq.clear();
        get_row(i, g, seq);

        if(!check_sequence(seq)){ 
            return false;
        }
    }

    // check column
    for(int i = 0; i < side; i++){
        seq.clear();
        get_col(i, g, seq);

        if(!check_sequence(seq)){ 
            return false;
        }
    }

    // check subsquare
   for(int i = 0; i < side; i++){
        seq.clear();
        get_subsq(i, g, seq);

        if(!check_sequence(seq)){ 
            return false;
        }
    }

    return true;
}

int main(int argc, char* argv[]){

    if(argc != 2){
        std::cout << "one argument needed" << std::endl;
        return EXIT_FAILURE;
    }

    // open file
    std::ifstream infile;
    infile.open(argv[1]);
    if(!infile.is_open()){
        std::cout << "error, can't open input file" << std::endl;
        return EXIT_FAILURE;
    }

    // store sudoku in vector s
    int tmp;
    std::vector<int> s;
    while(infile >> tmp){
        s.push_back(tmp);
    }

    // printing sudoku in square format
    int side = std::sqrt(s.size());
    for(int i = 0; i < side; i++){
        for(int j = 0; j < side; j++){
            std::cout << s[twod_to_oned(i, j, side)] << " ";
        }
        std::cout << std::endl;
    }

    // check if valid
    bool valid = valid_sudoku(s);

    if(valid){
        std::cout << " is valid" << std::endl;
    }
    else{
        std::cout << "is not valid" << std::endl; 
    }

}