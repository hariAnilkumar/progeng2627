#include <iostream>

int main(){
    std::cout << 5 / 2.0 << std::endl;
    //understands 2 as a double, 5 as an int so outputs the more general: double

    std::cout << 5 / 2 << std::endl;
    //understands 2 and 5 as an integer, outputs int
}