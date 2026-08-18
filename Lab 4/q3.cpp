#include <iostream>
#include <string>
using namespace std;

class ParkingSlot
{
    //defining variables
    int slotNumber;
    string vehicleNumber;
    bool occupancyStatus;

public:

    //Constructor to intialize the variables
    ParkingSlot(int slot, string vehicle, bool status)
    {
        slotNumber = slot;
        vehicleNumber = vehicle;
        occupancyStatus = status;
    }

    friend void checkSlot(ParkingSlot p);
};

void checkSlot(ParkingSlot p)
{
    cout << "----- Parking Slot Details -----" << endl;
    cout << "Slot Number: " << p.slotNumber << endl;

    if (p.occupancyStatus)
    {
        cout << "Status: Occupied" << endl;
        cout << "Vehicle Number: " << p.vehicleNumber << endl;
    }
    else
    {
        cout << "Status: Available" << endl;
    }
}

int main()
{
    ParkingSlot p(12, "OD02AB1234", true);

    checkSlot(p);

    return 0;
}