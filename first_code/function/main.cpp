#include <iostream>

int addNumber(int firstNumber, int secondNumber){
    int sum = firstNumber + secondNumber;
    return sum;
}

int main(int args, char **argv){
    int firstNumber = 12;
    int sencoundNumber = 9;

    int sum = firstNumber + sencoundNumber;

    sum = addNumber(firstNumber,sencoundNumber);
    sum = addNumber(34,7);

    std::cout << "The sum of the two number : " << sum << std::endl;
    std::cout << "The sum of the two number : " << addNumber(23,8) << std::endl;
    return 0;

}