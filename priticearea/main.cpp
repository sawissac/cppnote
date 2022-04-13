#include <iostream>
#include <string>


int main(int args, char **argv){
    std::string name, age;
    std::cout << "Enter your name" << std::endl;
    std::getline(std::cin, name);
    
    std::cout << "Enter your age" << std::endl;
    std::cin >> age;
 
    std::cout << "Surprise!! " << name << " ,This is your " << age << " times living on earth." << std::endl;
    
}