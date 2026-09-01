//Delivery Counter
#include <iostream>
using namespace std;
int main() 
{
    //declaring variables
    int parcels, increment;
    //TAKING INPUTS
    cout << "Enter number of parcels delivered: ";
    cin >> parcels;
    //using pointer 
    int *ptr = &parcels;

    cout << "Enter number of parcels to add: ";
    cin >> increment;

    cout << "Current parcels: " << *ptr << endl;
    *ptr = *ptr + increment;

    cout << "Updated parcels: " << *ptr << endl;
    return 0;
}