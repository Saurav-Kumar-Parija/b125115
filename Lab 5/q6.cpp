#include <iostream>
using namespace std;

// Displays integer
void display(int x)
{
    cout << "Integer: " << x << endl;
}

// Displays floating-point number
void display(float x)
{
    cout << "Float: " << x << endl;
}

// Displays character
void display(char x)
{
    cout << "Character: " << x << endl;
}

// Displays integer array
void display(int arr[], int size)
{
    cout << "Integer array: ";

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

// Displays character array
void display(char arr[], int size)
{
    cout << "Character array: ";

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main()
{
    int x = 25;
    float y = 15.5;
    char ch = 'A';

    int a[] = {10, 20, 30, 40};
    char b[] = {'C', '+', '+', '!'};

    display(x);
    display(y);
    display(ch);
    display(a, 4);
    display(b, 4);

    return 0;
}