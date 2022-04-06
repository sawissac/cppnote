#include <iostream>

int addNumber(int first_number, int secound_number){
    int sum = first_number + secound_number;
    return sum;
}

int main(int arg, char **argv){
    int first_number {13}; // Statement
    int secound_number {7};

    std::cout << "Sum : " << addNumber(first_number,secound_number) << std::endl;
    return 0;
}