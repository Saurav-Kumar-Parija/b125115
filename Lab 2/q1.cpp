#include <iostream>
#include <string>
using namespace std;
class Student
{
    //defining variables
    int roll_number;
    string name;
    float marks;

public:
    //method to get details
    void details()
    {
        cout<<"Enter Details of The Student"<<endl;
         // we are using getline instead of cin as cin only uses 1t name no space after name
        cout<<"Enter Student's name: ";
        getline(cin,name);

        cout<<"Enter Student's roll no.: ";
        cin>>roll_number;
        
        cout<<"Enter Student's mark: ";
        cin>>marks;
    }
    //method to display details
    void display()
    {
        cout<<"||Student's Details|| "<<endl;
        cout<<"Student's name: "<<name<<endl;
        cout<<"Student's roll no.: "<<roll_number<<endl;
        cout<<"Student's mark: "<<marks<<endl;  
    } 

};
int main()
{
    class Student s1;
    s1.details();
    s1.display();
return 0;
}    


