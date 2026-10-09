#include <iostream>
using namespace std;

class Complex {
    //defining variables
    int real,imag;

public:
    Complex(int rl = 0, int im = 0) 
    {
        real = rl;
        imag = im;
    }

    Complex operator-(Complex c) 
    {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }

    void display() 
    {
        cout << real;

        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";

        cout << endl;
    }
};

int main() {
    Complex c1(8, 5);
    Complex c2(3, 2);

    Complex c3 = c1 - c2;

    cout << "C1 = ";
    c1.display();

    cout << "C2 = ";
    c2.display();

    cout << "C1 - C2 = ";
    c3.display();

    return 0;
}
