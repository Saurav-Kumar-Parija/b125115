#include <iostream>
using namespace std;

// Compares two integers
void compare(int a, int b)
{
    if (a > b)
        cout << "Larger value = " << a << endl;
    else if (b > a)
        cout << "Larger value = " << b << endl;
    else
        cout << "Both values are equal" << endl;
}

// Compares two floating-point numbers
void compare(float a, float b)
{
    if (a > b)
        cout << "Larger value = " << a << endl;
    else if (b > a)
        cout << "Larger value = " << b << endl;
    else
        cout << "Both values are equal" << endl;
}

// Compares two integer arrays
void compare(int a[], int b[], int size)
{
    bool same = true;

    for (int i = 0; i < size; i++)
    {
        if (a[i] != b[i])
        {
            same = false;
            break;
        }
    }

    if (same)
        cout << "Both arrays contain identical elements."
             << endl;
    else
        cout << "Arrays do not contain identical elements."
             << endl;
}

int main()
{
    int a = 20, b = 35;
    float x = 12.5, y = 10.5;

    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {1, 2, 3, 4};

    cout << "Two integers:" << endl;
    compare(a, b);

    cout << "\nTwo floating-point numbers:" << endl;
    compare(x, y);

    cout << "\nTwo integer arrays:" << endl;
    compare(arr1, arr2, 4);

    return 0;
}