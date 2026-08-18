#include <iostream>
#include <string>
using namespace std;

class Mobile
{
    //defining variables
    string brand , model;
    float batteryPercentage;

public:

    //Constructor to intialize the variables
    Mobile(string b, string m, float battery)
    {
        brand = b;
        model = m;
        batteryPercentage = battery;
    }

    // Friend function declaration
    friend void checkBattery(Mobile m);
};

// Friend function definition
void checkBattery(Mobile m)
{
    cout << "----- Mobile Details -----" << endl;
    cout << "Brand             : " << m.brand << endl;
    cout << "Model             : " << m.model << endl;
    cout << "Battery Percentage: " << m.batteryPercentage << "%" << endl;

    if (m.batteryPercentage < 20)
    {
        cout << "Battery Status    : Battery Low" << endl;
    }
    else
    {
        cout << "Battery Status    : Battery Normal" << endl;
    }
}

int main()
{
    Mobile phone("Samsung", "Galaxy A36", 76);

    checkBattery(phone);

    return 0;
}