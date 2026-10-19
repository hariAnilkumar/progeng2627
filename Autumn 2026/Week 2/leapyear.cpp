#include <iostream>
int main(){
    int year;
    bool leap;
    std::cout << "enter year" << std::endl;
    std::cin >> year;

    if((year % 4) == 0){
        if((year % 100)==0){
            if((year % 400)==0){
                leap = true;
            }
            else{
                leap = false;
            }
        }
        else{
            leap = true;
        }
    }
    else{
        leap = false;
    }

    if(leap){
        std::cout << "Year is leap year" << std::endl;
        
    }
    else{
        std::cout << "Year is not leap year" << std::endl;
    }
}