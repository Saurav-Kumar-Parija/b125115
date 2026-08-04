#include <iostream>
#include<string>
using namespace std;

class BankAccount
{
    //defining variables
    int account_number;
    string name;
    double balance;

public:
    //method to get details
    void details()
    {
        cout<<"Enter Details of The Account"<<endl;
         // we are using getline instead of cin as cin only uses 1t name no space after name
        cout<<"Enter Account Holder's name: ";
        getline(cin,name);

        cout<<"Enter Account Number: ";
        cin>>account_number;

        cout<<"Enter Balance: ";
        cin>>balance;
    }
    //method to deposite money
    void deposite()
    {
        double extra;
        cout<<"Enter Amount to be deposited: ";
        cin>>extra;

        balance+=extra
        ;
        cout<<"Amount of "<<extra<<" has been deposited"<<endl;
        cout<<"New Balance: "<<balance<<endl;
    }
    //method to withdraw money
    void withdraw()
    {
        double extra;
        cout<<"Enter Amount to be withdrawn: ";
        cin>>extra;

        if(extra>balance)
            cout<<"Insufficient Balance "<<endl;

        else
        {
        balance-=extra;    
        cout<<"Amount of "<<extra<<" has been withdrawn"<<endl;
        cout<<"New Balance: "<<balance<<endl;
        }    
    }
    //method to display details
    void display()
    {
        cout<<" ||Details of The Account|| "<<endl;
        cout<<"Account Holder's name: "<<name<<endl;
        cout<<"Account Number: "<<account_number<<endl;
        cout<<"Account Balance: "<<balance<<endl;
    }
};

int main()
{
    BankAccount b;
    b.details();
    b.deposite();
    b.withdraw();
    b.display();

return 0;

}
