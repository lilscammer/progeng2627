#include <iostream>

int main () {
    double Amount, FX_Rate;
    std::cout << "How much money do you have?" << std::endl;
    std::cin >> Amount;

    std::cout << "What is the current exchange rate?" << std::endl;
    std::cin >> FX_Rate;

    std::cout << "£" << Amount << "will get you " << "€" << Amount * FX_Rate << std::endl;
    
}