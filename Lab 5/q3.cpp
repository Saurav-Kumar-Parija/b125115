#include <iostream>
using namespace std;

// Integer array (diff no. of arguments)
int total(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
        sum += arr[i];

    return sum;
}

// Floating-point array(different type of arguments)
float total(float arr[], int size)
{
    float sum = 0;

    for (int i = 0; i < size; i++)
        sum += arr[i];

    return sum;
}

// Portion of integer array(different no. of arguments)
int total(int arr[], int n, int start)
{
    int sum = 0;

    for (int i = start; i < start + n; i++)
        sum += arr[i];

    return sum;
}

int main()
{
    int a[] = {10, 20, 30, 40, 50};
    float b[] = {1.5, 2.5, 3.5, 4.5};

    cout << "Total of integer array = "
         << total(a, 5) << endl;

    cout << "Total of floating-point array = "
         << total(b, 4) << endl;

    cout << "Total of portion of integer array = "
         << total(a, 3, 1) << endl;

    return 0;
}