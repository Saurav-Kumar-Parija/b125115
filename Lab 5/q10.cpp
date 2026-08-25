#include <iostream>
using namespace std;

// Two integers
int process(int a, int b)
{
    return a + b;
}

// Integer and floating-point value
float process(int a, float b)
{
    return a + b;
}

// Two floating-point values
float process(float a, float b)
{
    return a + b;
}

// Integer array and its size
int process(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
        sum += arr[i];

    return sum;
}

// Two integer pointers
int process(int *a, int *b)
{
    return *a + *b;
}

int main()
{
    int a = 10, b = 20;

    int x = 30;
    float y = 12.5;

    float p = 5.5, q = 4.5;

    int arr[] = {10, 20, 30, 40};

    int m = 50, n = 60;

    cout << "Two integers: "
         << process(a, b) << endl;

    cout << "Integer + floating-point: "
         << process(x, y) << endl;

    cout << "Two floating-point values: "
         << process(p, q) << endl;

    cout << "Sum of integer array: "
         << process(arr, 4) << endl;

    cout << "Two integer pointers: "
         << process(&m, &n) << endl;

    return 0;
}