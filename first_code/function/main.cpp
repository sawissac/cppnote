#include <iostream>

int addNumber(int firstNumber, int secondNumber){
    int sum = firstNumber + secondNumber;
    return sum;
}

void shoutName(std::string name = "Issac"){
    std::cout << "I " << name << " shouted something." << std::endl;
}

void nameSwitcher(std::string &firstName, std::string &secondName){
    std::string temp = firstName;
    firstName = secondName;
    secondName = temp; 
}

void arrShouter(std::string myArray[], int size){
    for (int i = 0; i < size; i++)
    {
        std::cout << myArray[i] << " is shouted." << std::endl;
    }
}

void arrShouter(int myArray[], int size){
    for (int i = 0; i < size; i++)
    {
        std::cout << myArray[i] << " is shouted." << std::endl;
    }
}
int factorial(int num){
    if(num > 0){
        return num + factorial(num - 1);
    }else{
        return 0;
    }
}

int main(int args, char **argv){
    int firstNumber = 12;
    int sencoundNumber = 9;

    int sum = firstNumber + sencoundNumber;

    sum = addNumber(firstNumber,sencoundNumber);
    sum = addNumber(34,7);

    std::cout << "The sum of the two number : " << sum << std::endl;
    std::cout << "The sum of the two number : " << addNumber(23,8) << std::endl;

    std::string firstName = "Saw Issac";
    std::string secondName = "Naw Issac";

    nameSwitcher(firstName,secondName);

    std::cout << "first name " << firstName << std::endl;
    std::cout << "second name " << secondName << std::endl;

    std::string  character[] = {"a", "b"};
    arrShouter(character,2);

    std::cout << "factorial of 10 : " << factorial(10) << std::endl;
    return 0;

}