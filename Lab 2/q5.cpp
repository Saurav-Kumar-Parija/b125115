#include <iostream>
using namespace std;
class Employee
{
    //defining variables
    double HRA,DA,Gross_Salary;
    string name;
    int ID;
    double Salary;

public:
    //method to get details
    void details()
    {
        cout<<"Enter Details of The Employee"<<endl;
        cout<<"Enter Employee's name: ";
        getline(cin,name);

        cout<<"Enter Employee ID: ";
        cin>>ID;

        cout<<"Enter Employee's salary: ";
        cin>>Salary;
    }
    //method to display details
    void display()
    {
        HRA=Salary/5;
        DA=Salary/10;
        Gross_Salary=Salary+HRA+DA;

        cout<<"||Details of The Employee||"<<endl;
        cout<<"Employee's name: "<<name<<endl;
        cout<<"Employee ID: "<<ID<<endl;
        cout<<"Employee's salary: "<<Salary<<endl;
        cout<<"Employee's HRA: "<<HRA<<endl;
        cout<<"Employee's DA: "<<DA<<endl;
        cout<<"Employee's Gross Salary: "<<Gross_Salary<<endl;
    }
};

int main()
{
    Employee e;
    e.details();
    e.display();

return 0;    

}