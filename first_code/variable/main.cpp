#include <iostream>
#include <iomanip>

int main(){
    // Brace initialization
    //Vriable may contin andom garbage value . Warning 
    int elephant_count;
    int lion_count{}; //Initializes to zero
    int dog_count{10};
    int cat_count{15};

    int domesticated_animals {dog_count + cat_count};

    std::cout << "elephant count : " << elephant_count << std::endl;
    std::cout << "lion count : " << lion_count << std::endl;

    // `unctional initialization 
    int rabbit_count(10);
    int fish_count(2.4);

    std::cout << "rabbit count : " << rabbit_count << std::endl;
    std::cout << "fish count : " << fish_count << std::endl;

    // assigment initialization

    int bird_count = 2.5;

    std::cout << "bird count" << bird_count << std::endl;

    // finding the size of the variable 

    std::cout << "size of int : " << sizeof(int) << std::endl;
    std::cout << "bird count : " << sizeof(bird_count) << std::endl;

    // signed and unsigned number 
    signed int value1 {12}; // 4bytes
    signed int value2 {-12};

    unsigned int value3{12}; // negative value is not accept

    // short and long types 
    short v1{1}; // 2bytes
    long v2{1}; // 4bytes or 8bytes
    long long v3{1};// 8bypes

    // float, double and long double
    float vf{1}; // 4byte 4precision 
    double vd{1.3}; // 8byte 15pre
    long double vld{1.2}; // 12bype >double-pre
   
    double vd2{1.123456f};
    std::cout << std::setprecision(5); // control precision
    std::cout << vd2 << std::endl;
    

    //infinity & NaN
    float inf = 5/0; // Infinity
    float nanf = 0/0;// NaN


    return 0; 
}