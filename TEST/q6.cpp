//Grocery Price Scanner
#include <iostream>
using namespace std;
//function to find highest price among products
void findHighestPrice(float *price, int n) 
{
    float highest = *price;

    for (int i = 0; i < n; i++) 
    {
        if (*price > highest) 
        {
            highest = *price;
        }
        price++;
    }
    cout << "Highest Price: " << highest << endl;
}

int main() 
{
    float prices[7];
    cout << "Enter prices of 7 products:\n";
    for (int i = 0; i < 7; i++) 
    {
        cin >> prices[i];
    }
    findHighestPrice(prices, 7);
    return 0;
}
