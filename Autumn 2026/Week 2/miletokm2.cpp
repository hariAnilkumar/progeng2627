#include <iostream>
#include <string>

int main (){

    double lengthin, lengthout;
    std::string unitin, unitout;
    bool validunit = true;
    const double miletokm = 1.609;

    std::cout << "Enter" << std::endl;
    std::cin >> lengthin >> unitin;

    if(unitin == "km"){
        unitout = "miles";
        lengthout = lengthin / miletokm;
    }

    else if((unitin == "miles") || (unitin == "mile")){
        unitout = "km";
        lengthout = lengthin * miletokm;
    }

    else{
        validunit = false;
    }


    if(validunit){
        std::cout << lengthout << " " << unitout << std::endl;
    }
    else{
        std::cout << "Not a valid input" << std::endl;
    }


}