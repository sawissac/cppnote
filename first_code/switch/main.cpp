#include <iostream>
using namespace std;

int main()
{
    int type{0};
    cin >> type;

    switch (type)
    {
    case 0:
        cout << "Surprise!!" << endl;
        break;

    default:
        cout << "Nothing!" << endl;
        break;
    }
    return 0;
}