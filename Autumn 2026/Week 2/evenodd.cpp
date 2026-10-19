#include <iostream>

int main(){
    int n,rem;

    std::cout << "Please enter integer";
    std::cin >> n;

    rem = n % 2;
    if(rem==0){std::cout << "The number is even";}
    else{
        std::cout << "The number is odd";
    }
    //it helps to seperate the curly brackets
    //can also do if(rem==0) and if(rem==1)
    //one equal is assinging a value and two equals is a check
}