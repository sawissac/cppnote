#include <iostream>
#include <string>

int main()
{

    std::cout << "Hello World!" << std::endl;

    std::cerr << "Hello Error" << std::endl;

    std::clog << "Hello Log" << std::endl;

    // input to user

    std::string name;
    int age;

    std::cout << "Enter your name" << std::endl;
    std::cin >> name >> age;

    std::cout << "Your name is : " + name << " Age : " << age << std::endl;

    std::string name2;
    int age2;

    std::cout << "Enter your name with space" << std::endl;

    std::getline(std::cin, name2);
    std::cin >> age2;

    std::cout << "Your name is : " + name2 << " Age : " << age2 << std::endl;

    return 0;
}