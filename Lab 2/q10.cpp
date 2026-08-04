#include <iostream>
#include <string>
using namespace std;

class ElectricityBill
{
    //defining variables
    int consumerNumber;
    string consumerName;
    int units;
    float bill;

public:
    // Function to accept consumer details
    void accept()
    {
        cout << "Enter Consumer Number: ";
        cin >> consumerNumber;

        cin.ignore();

        cout << "Enter Consumer Name: ";
        getline(cin, consumerName);

        cout << "Enter Units Consumed: ";
        cin >> units;
    }

    // Function to calculate electricity bill
    void calculateBill()
    {
        if (units <= 100)
        {
            bill = units * 5;
        }
        else if (units <= 200)
        {
            bill = (100 * 5) + ((units - 100) * 7);
        }
        else
        {
            bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
        }
    }

    // Function to display bill details
    void display()
    {
        cout << "\nElectricity Bill\n";
        cout << "---------------------------\n";
        cout << "Consumer Number : " << consumerNumber << endl;
        cout << "Consumer Name   : " << consumerName << endl;
        cout << "Units Consumed  : " << units << endl;
        cout << "Total Bill      : Rs. " << bill << endl;
    }
};

int main()
{
    ElectricityBill e;

    e.accept();
    e.calculateBill();
    e.display();

    return 0;
}