#include <iostream>
#include <string>
using namespace std;

class SmartDevice
{
    //Defining variables
    string deviceName , deviceType;
    bool powerStatus;

public:

    //Constructor to intialize the variables
    SmartDevice(string name, string type, bool status)
    {
        deviceName = name;
        deviceType = type;
        powerStatus = status;
    }

    friend class HomeController;
};

class HomeController
{
public:

    void displayDeviceInfo(SmartDevice d)
    {
        cout << "----- Smart Home Device -----" << endl;
        cout << "Device Name: " << d.deviceName << endl;
        cout << "Device Type: " << d.deviceType << endl;
    }

    void turnOn(SmartDevice &d)
    {
        d.powerStatus = true;
        cout << "Device turned ON." << endl;
    }

    void turnOff(SmartDevice &d)
    {
        d.powerStatus = false;
        cout << "Device turned OFF." << endl;
    }

    void displayPowerStatus(SmartDevice d)
    {
        if (d.powerStatus)
        {
            cout << "Current Power Status: ON" << endl;
        }
        else
        {
            cout << "Current Power Status: OFF" << endl;
        }
    }
};

int main()
{
    SmartDevice device("Living Room Light", "LED Light", false);

    HomeController controller;

    controller.displayDeviceInfo(device);

    controller.displayPowerStatus(device);

    controller.turnOn(device);
    controller.displayPowerStatus(device);

    controller.turnOff(device);
    controller.displayPowerStatus(device);

    return 0;
}