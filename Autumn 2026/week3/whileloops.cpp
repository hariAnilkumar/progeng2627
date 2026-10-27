#include <iostream>
int main(){

    double x , acc=1;
    int n , counter=0;

    std::cout << "For x^n, input n" << std::endl;
    std::cin >> n;
    std::cout << "Input x" << std::endl;
    std::cin >> x;

    while(counter<n){
        acc = acc * x;
        counter = counter+1;
    }

    std::cout << acc << std::endl;

    
}