#include <iostream>

int smallest_factor(int n){

    int smallestfactor;

    for(int f=2; f<n; f++){
        if (n%f == 0){
            smallestfactor = f;
            return smallestfactor;
        }
    }

    return n;
    //if no smallest factor found n is returned. first return is executed and no return executed after that
}

int main(){

    int w;

    std::cout << "Enter number above 1" << std::endl;
    std::cin >> w;

    std::cout <<"Smallest factor is " << smallest_factor(w) << std::endl;

}