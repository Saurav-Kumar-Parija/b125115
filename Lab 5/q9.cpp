#include <iostream>
using namespace std;

// Maximum between two integers
int maximum(int a, int b)
{
    return (a > b) ? a : b;
}

// Maximum between two values using pointers
int maximum(int *a, int *b)
{
    return (*a > *b) ? *a : *b;
}

// Maximum in an integer array using pointer
int maximum(int *arr, int size)
{
    int maxValue = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > maxValue)
            maxValue = arr[i];
    }

    return maxValue;
}

int main()
{
    int a = 25, b = 40;

    int x = 70, y = 55;

    int arr[] = {10, 80, 30, 95, 50};

    cout << "Maximum between two integers = "
         << maximum(a, b) << endl;

    cout << "Maximum between two values using pointers = "
         << maximum(&x, &y) << endl;

    cout << "Maximum value in array = "
         << maximum(arr, 5) << endl;

    return 0;
}