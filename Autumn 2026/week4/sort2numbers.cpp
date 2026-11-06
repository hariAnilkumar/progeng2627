#include <iostream>

void sort_two_numbers(double& s1, double& s2){

    double temp;

    if(s1 > s2){
        temp = s1;
        s1 = s2;
        s2 = temp;
    }    
}

int main(){

    double n1, n2;

    std::cout << "Enter 2 numbers" << std::endl;
    std::cin >> n1 >> n2;
    
    sort_two_numbers(n1, n2);
    std::cout << n1 << ", " << n2;

}