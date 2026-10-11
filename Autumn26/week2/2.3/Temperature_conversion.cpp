#include <iostream>
#include <string>

int main(){
    double tempIN, tempOUT;
    std::string unit_in, unit_out;

    std::cin >> tempIN >> unit_in;

    if ((unit_in == "C") || (unit_in == "c")) {
        tempOUT = (tempIN*9/5) + 32;
        unit_out = "F";
    }
    else if ((unit_in == "F") || (unit_in == "f")) {
        tempOUT = (tempIN - 32)*5/9;
        unit_out = "C";
    }
    else {
        std::cout << "Error, unit not recognised" << std::endl;
    }

    std::cout << tempOUT << " " << unit_out;
}






