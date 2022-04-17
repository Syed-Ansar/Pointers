#include <iostream>
using namespace std;

int main()
{
    int luckyNums[5];
    // int luckyNums[5] = {2, 4, 6, 8, 9};
    // cout << luckyNums << endl;
    // cout << &luckyNums[0] << endl;
    // cout << luckyNums[2] << endl;
    // cout << *(luckyNums + 2) << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Number :";
        cin >> luckyNums[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "Number " << i << " : ";
        cout << *(luckyNums + i) << endl;
    }

    return 0;
}