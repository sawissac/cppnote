#include <iostream>
using namespace std;

int main()
{
    int enums[4] = {1, 2, 3, 4};
    cout << sizeof(enums) << endl;

    cout << sizeof(enums) / sizeof(int);

    // multi array

    int enums2[2][2] = {
        {1, 2}, {1, 2}
    };

    return 0;
}