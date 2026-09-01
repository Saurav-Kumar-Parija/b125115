//Parking Slot Machine
#include <iostream>
using namespace std;

int main() {
    //defining no. of parking slots (n)
    int n;
    cout << "Enter number of parking slots: ";
    cin >> n;
    //Dynamically allocating memory for n parking slot statuses
    int *slots = new int[n];
    //parking status (using 0 for availability and 1 for preoccupied)
    cout << "\nEnter parking status:\n";
    cout << "0 = Available\n";
    cout << "1 = Occupied\n";

    int *ptr = slots;
    for (int i = 0; i < n; i++) 
    {
        cout << "Slot " << i + 1 << ": ";
        cin >> *ptr;
        ptr++;
    }

    int available = 0;
    int occupied = 0;
    ptr = slots;
    //counts availaable and occupied slots using a pointer
    for (int i = 0; i < n; i++) {
        if (*ptr == 0)
            available++;
        else if (*ptr == 1)
            occupied++;

        ptr++;
    }
    //displaying available slots and occupied slots
    cout << "\nAvailable slots: " << available << endl;
    cout << "Occupied slots: " << occupied << endl;
    //releasing the dynamically allocated memory
    delete[] slots;

    return 0;
}