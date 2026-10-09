#include <iostream>
using namespace std;

class Counter {
    //defining variables
    int value;
public:
    Counter(int v ) 
    {
        value = v;
    }

    Counter operator++() {
        ++value;
        return *this;
    }

    Counter operator++(int) 
    {
        Counter temp = *this;
        value++;
        return temp;
    }

    void display() 
    {
        cout << value << endl;
    }
};

int main() 
{
    Counter c(6);

    cout << "Initial value: ";
    c.display();

    cout << "Prefix increment:" << endl;

    Counter c1 = ++c;

    cout << "Returned value: ";
    c1.display();

    cout << "Current value: ";
    c.display();

    cout << "Postfix increment:" << endl;

    Counter c2 = c++;

    cout << "Returned value: ";
    c2.display();

    cout << "Current value: ";
    c.display();

    return 0;
}
