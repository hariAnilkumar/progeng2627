#include <iostream>

int main(){

    int n, q;
    std::cin >> n;

    for(int c2=0 ; c2 < n ; c2++){

        for(int c1=0 ; c1 < n ; c1++){
            q = (c2+1)*(c1 + 1);
            std::cout << q << "\t";
        }
        std::cout << " " << std::endl;
    }
    
}