#include<iostream>
using namespace std;

int main()
{
    // Dynamically allocated memory
    int* integer = new int ;
    
    cout << "Enter an integer : ";
    cin >> *integer;

    cout << "Given integer is : " << *integer << endl;
    // Releasing the allocated memory
    delete integer;
    return 0;


}