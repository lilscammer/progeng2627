#include <iostream>
#include <string>

int main () {
    double length_in, length_out;
    std::string unit_in, unit_out;
    // dont forget, std::string is the way to declare a string variable

    const double mile_to_km = 1.609;
    // defines the variable and sets its value in the same string

    bool valid_unit = true; 

    std::cin >> length_in >> unit_in;
    // no prompt, just reaeding input, as well as units of the input
    // there will be only 1 thing to click "enter" on?
    // just that the first half of the info (integer) will be stored in length_in
    // and the second half of the info (string) will be stored in unit_in

    if (unit_in == "km") {
        unit_out = "mile";
        length_out = length_in / mile_to_km;

    }
    // the || stands for OR. 
    // ! stands for not, and && stands for and
    // these work as per DECA. they take 1/2 values and output true or false
    else if ((unit_in == "mile") || (unit_in == "miles")) {
        unit_out = "km";
        length_out = length_in * mile_to_km;
        // since we put an "else", any wrong units that are not km will get treated as miles

    }

    else {
         valid_unit = false;
    }

    if (valid_unit) {
        std::cout << length_out << " " << unit_out << std::endl;
    }
    else {
        std::cout << "error, unit not recognised" << std::endl;
    } 
    


}