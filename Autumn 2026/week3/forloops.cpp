#include <iostream>

int main(){
    int n;

    std::cin >> n;

    //  initialisation   condition    increment/update
    for(int counter = 0; counter < n; counter = counter + 1){
        std::cout << "hello" << std::endl;
    }
}