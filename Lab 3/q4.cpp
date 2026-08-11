#include<iostream>
using namespace std;

int main()
{
    int n ;
    float sum = 0.0;

    cout << "Enter no. of elements: ";
    cin >> n;

    // aAllocating memory Dynamically
    float* arr = new float[n] ;

    for(int i = 0 ; i < n ; i++ )
    {
        cout << "Enter element : ";
        cin >> arr[i];

    }
    
    //code to find total sum
    for(int i = 0 ; i < n ; i++ )
    {
        sum += arr[i];
    }

    //displaying total sum and average
    cout << "Total Sum : " << sum << " & Average : " << sum/n << endl;

    //deallocating the allocated memory
    delete[] arr;
    return 0;

}