#include <iostream>

using namespace std;

int main(){
    string name = "Saw Issac";
    int name_length = name.length();
    int name_size = name.size();
    // length function and size function are the same.

    string surprise = "Surprise!! ";
    surprise.append(name);
    // Concutination String

    cout << name_length << " : " << name_size << endl;
    cout << surprise << endl;
    surprise[0] = 'N';
    cout << surprise[0] << endl;
    cout << surprise << endl;
    
    return 0;
}
