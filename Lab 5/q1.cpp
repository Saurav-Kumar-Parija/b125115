#include <iostream>
using namespace std;

// Two integers as argument(diiferent no. of arguments)
int calculate(int a, int b)
{
    return a + b;
}

// Three integers as argument(different no. of arguments)
int calculate(int a, int b, int c)
{
    return a + b + c;
}

// Two floating-point values as argument(different type of arguments)
float calculate(float a, float b)
{
    return a + b;
}

int main()
{
    int a = 10, b = 20, c = 30;
    float x = 10.5, y = 20.5;

    cout << "Sum of two integers = " << calculate(a, b) << endl;
    cout << "Sum of three integers = " << calculate(a, b, c) << endl;
    cout << "Sum of two floating-point values = " << calculate(x, y) << endl;

    return 0;
}