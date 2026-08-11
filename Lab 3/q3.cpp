#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;

    cout << "Enter no. of elements: ";
    cin >> n;

    //Dynamically allocated an array of integers
    int* arr = new int[n] ;

    for(int i = 0 ; i < n ; i++ )
    {
        cout << "Enter element : ";
        cin >> arr[i];

    }

    //initializing integer large with the smallest value for int
    int large = INT_MIN ;

    // code to find the Largest number
    for(int i = 0 ; i < n ; i++ )
    {
        large = max(large , arr[i]);
    }

    //Deallocating the allocated memory
    delete[] arr;
    // Displaying  the Largest Element
    cout << "The Largest Element is : " << large ;
    return 0;


}