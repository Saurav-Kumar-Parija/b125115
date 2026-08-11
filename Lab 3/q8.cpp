#include<iostream>
#include<string>
using namespace std;
class Student 
{
    //defining variables
    string Name;
    int Roll_Number,subjects;
    int* marks;

public:

//method to accept details
void accept()
{
    cout << "Your Name : ";
    cin.ignore();
    getline(cin,Name);

    cout << "Your Roll No. : ";
    cin >> Roll_Number;

    cout << "No. of subjects : ";
    cin >> subjects;
}

 void details()
{
    //Dynamically allocating memory for array of marks 
    marks = new int[subjects];
    int sum = 0;

    //Inputing the marks of subjects  and finding the total sum 
    for (int i = 0; i < subjects; i++)
    {
        cout <<"Enter Mark of Subject " << i+1 << " : "; 
        cin >> marks[i];
        sum += marks[i];
    }
    cout << "Total Sum = " << sum << "  Average : "<< sum/subjects << endl;
    
    //Deallocating the allocated memory
    delete[]marks;
}

};

int main()
{

    Student s;

    s.accept();
    s.details();

    return 0;

}