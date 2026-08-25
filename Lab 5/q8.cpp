#include <iostream>
using namespace std;

// Counts digits in an integer
int count(int n)
{
    if (n == 0)
        return 1;

    int digits = 0;

    if (n < 0)
        n = -n;

    while (n > 0)
    {
        digits++;
        n /= 10;
    }

    return digits;
}

// Counts the number of elements in integer array
int count(int arr[], int size)
{
    return size;
}

// Counts the occurrences of a character
int count(char arr[], int size, char key)
{
    int occurrences = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            occurrences++;
    }

    return occurrences;
}

int main()
{
    int number = 123456;

    int arr[] = {10, 20, 30, 40, 50};

    char letters[] = {'a', 'b', 'a', 'c', 'a', 'd'};

    cout << "Number of digits = "
         << count(number) << endl;

    cout << "Number of elements in integer array = "
         << count(arr, 5) << endl;

    cout << "Occurrences of 'a' = "
         << count(letters, 6, 'a') << endl;

    return 0;
}