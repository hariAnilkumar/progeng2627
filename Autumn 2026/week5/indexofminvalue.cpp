#include <iostream>
#include <vector>


int min_vector_element(const std::vector<double>& vin){

    double min = vin[0];

    for(int i=1 ; i<vin.size() ; i++)

    if(vin[i]<min){
        min = vin[i];
    }
    if(vin.size() == 0){
        min = -1;
    }

    return min;
}

int main(){

    std::vector<double> v = {1, -1, 2, -56.6, 20};
    double a = min_vector_element(v);
    std::cout << a << std::endl;
}