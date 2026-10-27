#include <iostream>

int main(){

    int n, g, q = 1;
    std::cin >> n;

    for(int i=0 ; i<n ; i++){
        g = n - i;
        q = g * q;
    }

    std::cout << q;

}