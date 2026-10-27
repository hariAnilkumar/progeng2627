#include <iostream>

int main(){

    int n, curmax, curmin;

    std::cout << "Enter number:" << std::endl;
    std::cin >> n;

    curmax = n;
    curmin = n;

    std::cout << "Current minimum: " << curmin << std::endl;
    std::cout << "Current maximum: " << curmax << std::endl;

    while(n != 0){
        std::cout << "Enter number:" << std::endl;
        std::cin >> n;

        if(n > curmax){
            curmax = n;
        }
        if(n < curmin){
            curmin = n;
        }

        std::cout << "Current minimum: " << curmin << std::endl;
        std::cout << "Current maximum: " << curmax << std::endl;
    }

    std::cout << "Current minimum: " << curmin << std::endl;
    std::cout << "Current maximum: " << curmax << std::endl;

}