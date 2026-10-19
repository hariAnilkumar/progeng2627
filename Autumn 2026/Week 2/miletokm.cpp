#include <iostream>
#include <string>

int main(){
    double length_in, length_out;
    std::string unit_in, unit_out;
    //define strings with std::string


    const double mile_to_km = 1.609;
    //define constants with const double

    std::cout << "Input:" << std::endl;
    std::cin >> length_in >> unit_in;

    if(unit_in == "km"){
        unit_out = "mile";
        length_out = length_in / mile_to_km;
    }


    if(unit_in == "mile"){
        unit_out = "km";
        length_out = length_in * mile_to_km;
    }
    //else can be used to do anything apart from km to mean miles

    std::cout << length_out << " " << unit_out << std::endl;



}