#include <iostream>
using namespace std;

int main()
{
    cout << "Pointers" << endl;
    cout << "-----------------------" << endl;

    float a = 5;
    cout << &a << endl;
    float *ptr = &a;
    cout << ptr << endl;
    cout << *ptr << endl;
    *ptr = 10;
    cout << *ptr << endl;
    cout << a << endl;
    cout << "-----------------------" << endl;

    int v;
    cout << "v = " << v << endl;
    int *ptr2 = &v;
    cout << "v = " << v << endl;
    *ptr2 = 7;
    cout << "v = " << v << endl;
    cout << "ptr2 = " << ptr2 << endl;
    cout << *ptr2 << endl;
    cout << "-----------------------" << endl;

    return 0;
}