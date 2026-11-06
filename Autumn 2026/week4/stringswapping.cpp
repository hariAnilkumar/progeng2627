#include <iostream>
#include <string>

void myswap(std::string& word1 , std::string& word2){

    std::string tmp;
    tmp = word1;
    word1 = word2;
    word2 = tmp;

}

int main(){

    std::string word1 , word2;

    std::cout << "Please input word 1 and word 2" << std::endl;
    std::cin >> word1 >> word2;

    myswap(word1 , word2);

    std::cout << "Word 1 is now: " << word1 << " Word 2 is now: " << word2 << std::endl;
}