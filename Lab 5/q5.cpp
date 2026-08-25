#include <iostream>
using namespace std;

// Adds value to integer
void modify(int &x, int value)
{
    x = x + value;
}

// Adds value to floating-point number
void modify(float &x, float value)
{
    x = x + value;
}

// Modifies integer using pointer
void modify(int *x, int value)
{
    *x = *x + value;
}

int main()
{
    int a = 20;
    float b = 10.5;
    int c = 30;

    cout << "Integer before modification = " << a << endl;
    modify(a, 5);
    cout << "Integer after modification = " << a << endl;

    cout << "\nFloat before modification = " << b << endl;
    modify(b, 2.5f);
    cout << "Float after modification = " << b << endl;

    cout << "\nInteger using pointer before modification = "
         << c << endl;
    modify(&c, 10);
    cout << "Integer using pointer after modification = "
         << c << endl;

    return 0;
}