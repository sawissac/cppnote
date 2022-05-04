#include <iostream>
using namespace std;


int main(){

    cout << "while loop" << endl;
    int i {1};
    while (i <= 5){
        cout << i << endl;
        i++;
    }
    
    cout << "do while loop" << endl;
    int j {1};
    do{
        cout << j << endl;
        j++;
    }while(j <= 5);

    cout << "for loop" << endl;
    for(int k {1}; k <= 5; k++){
        cout << k << endl;
    }

    cout << "for loop with std::size" << endl;
    int nums [6] {1,2,3,4,5,6};
    int count { size(nums)};

    for(int k {0}; k < count; k++){
        cout << nums[k] << endl;
    }

    //another way useing counter with size_t

    size_t ii {0}; // unsigned int

    //another way to wirte std::size
    int sizeClone { sizeof(nums)/ sizeof(nums[0])};

    cout << sizeClone;

    for(size_t ss : nums){
        cout << ss << endl;
    }

    return 0;
}