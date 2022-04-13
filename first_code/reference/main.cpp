#include <iostream>
#include <string>

int main(){
    std::string personOne = "Mg Tun";
    std::string &personTwo = personOne;

    std::cout << personTwo << std::endl;
    
    personOne = "Mg Change";

    std::cout << personTwo << std::endl;

    personTwo = "Mg Change 2";

    std::cout << personOne << std::endl;

    // showing memory address

    std::cout << &personOne << std::endl;
    
    return 0;
}