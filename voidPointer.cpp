#include <iostream>
using namespace std;

void Pointers(int *numberPtr)
{
    cout << "-----------------------" << endl;
    cout << numberPtr << endl;
    cout << *numberPtr << endl;
}
void PrintLetter(char *CharPtr)
{
    cout << "-----------------------" << endl;
    cout << CharPtr << endl;
    cout << *CharPtr << endl;
}
void print(void *ptr, char type)
{
    switch (type)
    {
    case 'i':
        cout << *((int *)ptr) << endl;
        break;
    case 'c':
        cout << *((char *)ptr) << endl;
        break;
    case 'd':
        cout << *((double *)ptr) << endl;
        break;
    }
}

int main()
{

    cout << "Void Pointers" << endl;
    cout << "-----------------------" << endl;
    int number = 5;
    double doublenum = 8.90979989;
    char letter = 'a';
    // Pointers(&number);
    // PrintLetter(&letter);

    print(&number, 'i');
    print(&letter, 'c');
    print(&doublenum, 'd');

    return 0;
}