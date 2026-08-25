#include <iostream>
using namespace std;

// Two integers as argument(diiferent no. of arguments)
int larger(int a, int b)
{
    return (a > b) ? a : b;
}

// Two floating-point values as argument(different type of arguments)
float larger(float a, float b)
{
    return (a > b) ? a : b;
}

// Three integers as argument(different no. of arguments)
int larger(int a, int b, int c)
{
    int max = a;

    if (b > max)
        max = b;

    if (c > max)
        max = c;

    return max;
}

int main()
{
    int a = 25, b = 40, c = 35;
    float x = 12.5, y = 18.7;

    cout << "Larger of two integers = " << larger(a, b) << endl;
    cout << "Larger of two floating-point numbers = "
         << larger(x, y) << endl;
    cout << "Largest of three integers = "
         << larger(a, b, c) << endl;

    return 0;
}