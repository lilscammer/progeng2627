#include <iostream>
int main(){
    for(int i = 0; i = 3; i++){
    // when checking the condition, it will return a 3, which is non zer
    // non zero numbers get read as true. 
    // hence i = 3 will be read as true all the time, and an infinite * will be printed

    // if you changed the code to the condition of i = 0
    // then the condition will evaluate to 0
    // and since it is 0, it returns a false. 
    // so it immediately prints x. 
        std::cout << "*" << std::endl;
    }
    std::cout << "x" << std::endl;
}