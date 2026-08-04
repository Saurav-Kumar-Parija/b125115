#include <iostream>
#include <string>
using namespace std;

class Product
{
    //defining variables
    int productID;
    string productName;
    int quantity;
    float price;

public:
    //method to get details
    void accept()
    {
        cout << "Enter Product ID: ";
        cin >> productID;
    // as cin uses \n at last so getline maythink as input  so to cancel\n we use .ignore
        cin.ignore();

        cout << "Enter Product Name: ";
    // we are using getline instead of cin as cin only uses 1t name no space after name
        getline(cin, productName);

        cout << "Enter Quantity Available: ";
        cin >> quantity;

        cout << "Enter Price per Unit: ";
        cin >> price;
    }
    //method to display details
    void display()
    {
        cout << "\nProduct Details\n";
        cout << "--------------------------\n";
        cout << "Product ID      : " << productID << endl;
        cout << "Product Name    : " << productName << endl;
        cout << "Quantity        : " << quantity << endl;
        cout << "Price per Unit  : " << price << endl;
    }
    //method to sell units
    void sell(int units)
    {
        if (units <= quantity)
        {
            quantity -= units;
            cout << units << " unit(s) sold successfully.\n";
        }
        else
        {
            cout << "Error: Not enough stock available!\n";
        }
    }
    //method to show value of total inventory
    void inventoryValue()
    {
        float value = quantity * price;
        cout << "Total Inventory Value = " << value << endl;
    }
};

int main()
{
    Product p;
    int units;

    p.accept();

    p.display();

    cout << "\nEnter number of units to sell: ";
    cin >> units;

    p.sell(units);

    p.display();

    p.inventoryValue();

    return 0;
}