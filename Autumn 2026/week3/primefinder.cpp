#include <iostream>

int main(){
    int n;
    
    std::cout << "Enter integer above 1" << std::endl;
    std::cin >> n;

    bool factor_found = false;

    for(int f=2; f<n && factor_found == false; f++){
        if(n%f==0){
            factor_found = true;
        }
    }

    if (factor_found){
        std::cout << "Not a prime";
    }
    else{
        std::cout << "Is a prime";
    }

}