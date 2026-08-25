#include <iostream>
using namespace std;

// Search integer in an integer array
int search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return i;
    }

    return -1;
}

// Search character in a character array
int search(char arr[], int size, char key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return i;
    }

    return -1;
}

// Search integer within a specified range
int search(int arr[], int start, int end, int key)
{
    for (int i = start; i <= end; i++)
    {
        if (arr[i] == key)
            return i;
    }

    return -1;
}

int main()
{
    int a[] = {10, 20, 30, 40, 50};
    char b[] = {'A', 'B', 'C', 'D', 'E'};

    int pos1 = search(a, 5, 30);

    if (pos1 != -1)
        cout << "30 found at position " << pos1 + 1 << endl;
    else
        cout << "30 not found" << endl;

    int pos2 = search(b, 5, 'D');

    if (pos2 != -1)
        cout << "'D' found at position " << pos2 + 1 << endl;
    else
        cout << "'D' not found" << endl;

    int pos3 = search(a, 1, 3, 40);

    if (pos3 != -1)
        cout << "40 found in specified range at position "
             << pos3 + 1 << endl;
    else
        cout << "40 not found in specified range" << endl;

    return 0;
}