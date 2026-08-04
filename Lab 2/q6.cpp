#include <iostream>
using namespace std;

class Distance
{
    //defining variables
    int feet, inches;

public:
    //method to get details
    void input()
    {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }
    //method to add two distances
    Distance add(Distance d)
    {
        Distance temp;
        temp.feet = feet + d.feet;
        temp.inches = inches + d.inches;

        if (temp.inches >= 12)
        {
            temp.feet += temp.inches / 12;
            temp.inches = temp.inches % 12;
        }

        return temp;
    }
    //method to display details
    void display()
    {
        cout << feet << " ft " << inches << " in";
    }
};

int main()
{
    Distance d1, d2, result;

    cout << "Enter first distance:\n";
    d1.input();

    cout << "\nEnter second distance:\n";
    d2.input();

    result = d1.add(d2);

    cout << "\nTotal Distance = ";
    result.display();

    return 0;
}