#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter no. of elements: ";
    cin >> n;

    int* arr = new int[n] ;

    for(int i = 0 ; i < n ; i++ )
    {
        cout << "Enter element : ";
        cin >> arr[i];

    }

    cout << "Array's elements are : ";

    for(int i = 0 ; i < n ; i++ )
    {
        cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;

}