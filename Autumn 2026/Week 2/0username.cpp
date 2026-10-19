#include <iostream>
#include <string>
//includes string and input and output stream

int main(){
    std::string user_name;
    //declaration of a variable user_name of type string

    std::cout << "What is your username?" << std::endl;
    //output
    std::cin >> user_name;
    //input

    std::cout << "Hello " << " " << user_name << "how are you?" << std::endl;
    //2 spaces after hello and the new speech
}