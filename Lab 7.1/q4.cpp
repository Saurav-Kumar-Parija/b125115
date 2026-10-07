#include <iostream>
using namespace std;

class BankAccount {
protected:
    int accountNumber;
    double balance;

public:
    BankAccount(int acc, double bal) {
        accountNumber = acc;
        balance = bal;
    }

    void displayBasicInfo() {
        cout << "Account Number : " << accountNumber << endl;
        cout << "Balance        : " << balance << endl;
    }
};

class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    SavingsAccount(int acc, double bal, double rate): BankAccount(acc, bal) {
        interestRate = rate;
    }

    void updateBalance() {
        double interest = balance * interestRate / 100;
        balance += interest;

        cout << "\nSavings Account" << endl;
        displayBasicInfo();
        cout << "Interest Added : " << interest << endl;
        cout << "Updated Balance: " << balance << endl;
    }
};

class CurrentAccount : public BankAccount {
private:
    double minimumBalance;
    double maintenanceCharge;

public:
    CurrentAccount(int acc, double bal, double minBal, double charge): BankAccount(acc, bal) {
        minimumBalance = minBal;
        maintenanceCharge = charge;
    }

    void updateBalance() {
        if (balance < minimumBalance) {
            balance -= maintenanceCharge;
            cout << "\nMaintenance charge deducted." << endl;
        }

        cout << "\nCurrent Account" << endl;
        displayBasicInfo();
        cout << "Updated Balance: " << balance << endl;
    }
};

int main() {
    SavingsAccount savings(1001, 50000, 5);
    CurrentAccount current(1002, 8000, 10000, 500);

    savings.updateBalance();
    current.updateBalance();

    return 0;
}