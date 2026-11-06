#include <iostream>
#include <vector>

int main(){

    std::vector<double> v;

    v.push_back(30.0);
    v.push_back(1.12);
    v.push_back(3.36);

    v[2]=15;

    std::cout << v[0]-v[1]*v[2];


}