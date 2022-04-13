#include <iostream>
using namespace std;

int main()
{

    // init struct
    struct
    {
        int height;
        int age;
    } dog, cat; // Can do with multiple variable

    dog.age = 3;
    dog.height = 3;

    cout << "age : " << dog.age << endl;
    cout << "height : " << dog.height << endl;

    // named structure

    struct  Josh
    {
        string name;
        int age;
        int height;
    };

    Josh joshChild;

    joshChild.name = "Mg kwe";
    joshChild.age = 21;
    joshChild.height = 5;
    
    cout << "Name : " << joshChild.name << endl;
    cout << "Age : " << joshChild.age << endl;
    cout << "Height" << joshChild.height << endl;

    return 0;
}