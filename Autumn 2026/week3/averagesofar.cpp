#include <iostream>
int main(){

    double n, acc=0, counter=1, sum=0;

    std::cin >> n;


    while(n != 0){
        sum = sum + n;
        acc = (sum)/counter;
        std::cout << acc << std::endl;
        std::cout << "" << std::endl;
        std::cin >> n;
        counter = counter + 1;
    }

}
