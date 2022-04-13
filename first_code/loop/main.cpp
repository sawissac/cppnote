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

    return 0;
}