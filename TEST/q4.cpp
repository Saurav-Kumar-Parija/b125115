//Cinema Seat Update
#include <iostream>
using namespace std;

int main() {
    //defining variabales
    int seats[8],position, newSeatNumber;

    //taking inputs for seat numbers
    cout << "Enter 8 seat numbers:";
    for (int i = 0; i < 8; i++) 
    {
        cin >> seats[i];
    }
    //
    cout << "\nSeat numbers before update:\n";
    int *ptr = seats;
    for (int i = 0; i < 8; i++) 
    {
        cout << *ptr << " ";
        ptr++;
    }
    //seat position to update
    cout << "\nEnter position to update (0-7): ";
    cin >> position;
    //updating seat numbers
    cout << "Enter new seat number: ";
    cin >> newSeatNumber;
    *(seats + position) = newSeatNumber;
    cout << "\nSeat numbers after update:\n";
    ptr = seats;
    for (int i = 0; i < 8; i++) 
    {
        cout << *ptr << " ";
        ptr++;
    }
    return 0;
}
