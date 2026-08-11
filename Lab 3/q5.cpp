#include <iostream>
#include <string>
using namespace std;

class Student
{
    //defining variables
    int Roll_Number , Marks;
    string Name;

public:

// method to accept details
 void accept()
 {
    cout << "Enter your name : ";
    getline(cin,Name);

    cout << "Enter your roll no. : ";
    cin >> Roll_Number ;

    cout << "Enter your mark : ";
    cin >> Marks ;

 }
 // method to display details
 void display()
 {
    cout << "\n|| Student's Details ||" << endl;
    cout << "Student's name : " << Name << endl ;

    cout << "Student's roll no. : " << Roll_Number << endl ;

    cout << "Student's mark : " << Marks << endl;
 }
};

int main()
{   
    // Creating object Dynamically
    Student* s = new Student();

    s->accept();
    s->display();

    //Releasing Dynamically allocated object
    delete s;
    return 0;
} 
