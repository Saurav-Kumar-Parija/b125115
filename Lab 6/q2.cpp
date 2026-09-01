//Digital Wallet Balance
#include <iostream>
using namespace std;

int main()
{
    //declaring variables
    float balance, increment,deductAmount;

    cout << "Enter current balance: ";
    cin >> balance;

    float *ptr = &balance;
    //displaying current balance
    cout << "\nCurrent Balance: " << *ptr << endl;
    //increment amount to add to the balance
    cout << "Enter amount to add: ";
    cin >> increment;
    // increasing current balance using pointers
    *ptr = *ptr + increment;
    cout << "Balance after adding: " << *ptr << endl;
    //deducing amount of money from the balance
    cout << "Enter amount to deduct: ";
    cin >> deductAmount;
    *ptr = *ptr-deductAmount;
    //displaying final balance
    cout << "Final Balance: " << *ptr << endl;
    return 0;
}