#include <iostream>
#include <string>
using namespace std;

class Employee
{
    //defining variables
    int ID ;
    float Salary;
    string Name;

public:

//method to accept details
 void accept()
 {
    cout << "Enter your name : ";
    cin.ignore();
    getline(cin,Name);

    cout << "Enter your ID : ";
    cin >> ID ;

    cout << "Enter your Salary : ";
    cin >> Salary ;

 }

 //method to display details
 void display()
 {
    cout << "|| Employee's Details ||" << endl;
    cout << "Employee's name : " << Name << endl ;

    cout << "Employee's ID : " << ID << endl ;

    cout << "Employee's Salary : " << Salary << endl;
 }
};

int main()
{
    int n;
    cout << "Enter Number of Employees : ";
    cin >> n;

    //Allocating memory for n objects
    Employee* e = new Employee[n];

    for(int i =0; i < n; i++)
    {
        cout << "\nEnter Details of Employee " << i+1 << ":" << endl;
        e[i].accept();
    }
    for(int i =0; i < n; i++)
    {  
        cout << "\nDetails of Employee " << i+1 << endl;
        e[i].display();
    }

    //Deallocating the allocated memory
    delete e;
    return 0;
} 
