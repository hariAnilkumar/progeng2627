#include <iostream>
#include <vector>

 int main(){

    int n, w, s;
    std::vector<int> v;

    std::cout << "Enter n" << std::endl;
    std::cin >> n;

    for(int i=0; i<n; i++){
        
        std::cout << "please enter a number" << std::endl;
        std::cin >> w;
        v.push_back(w);
    }

    std::cout << "please enter s" << std::endl;
    std::cin >> s;

    std::vector<int> x;

    for(int f=0; f<n; f++){
        if(v.at(f)==s){
            x.push_back(f);
        }

    }

    std::cout << "There are " << x.size() << " occurrences of " << s << std::endl;
    std::cout << "At indexes ";
    for(int j=0; j< x.size(); j++){
        std::cout << x[j] << ", ";
    }

 }