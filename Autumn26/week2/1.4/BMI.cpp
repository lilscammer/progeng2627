#include <iostream>

int main () {
    double Weight, Height, BMI;
    std::cout << "How tall are you (in metres)?" << std::endl;
    std::cin >> Height;

    std::cout << "What is your weight (in kg)?" << std::endl;
    std::cin >> Weight;

    BMI = Weight / (Height * Height);

    std::cout << "Your BMI is " << BMI << std::endl;
    
}