#include <iostream>
using namespace std;

int main(){
    string name = "Mg Tun";
    string* nameAdd = &name;

    cout << "Name Address : " << nameAdd << endl;

    /**
     * Three way to write pointer
     * string* var;
     * string * var;
     * string *var;
     * 
    */
    

    //dereferencing
     cout << *nameAdd << endl;


    // Modify pointer
    *nameAdd = "Mg Change";

    cout << name << endl;

    return 0;
}