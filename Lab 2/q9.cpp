#include <iostream>
#include <string>
using namespace std;

class StudentResult
{
    //defining variables
    string studentName;
    int rollNo;
    int marks[5];
    int total;
    float percentage;
    char grade;

public:
    // Function to accept student details
    void accept()
    {
        cout << "Enter Student Name: ";
        getline(cin, studentName);

        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter marks in 5 subjects:\n";
        total = 0;
        for (int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
            total += marks[i];
        }
    }

    // Function to calculate total, percentage and grade
    void calculateResult()
    {
        percentage = (total / 500.0) * 100;

        if (percentage >= 90)
            grade = 'A';
        else if (percentage >= 80)
            grade = 'B';
        else if (percentage >= 70)
            grade = 'C';
        else if (percentage >= 60)
            grade = 'D';
        else
            grade = 'F';
    }

    // Function to display result
    void display()
    {
        cout << "\nStudent Result\n";
        cout << "---------------------------\n";
        cout << "Student Name : " << studentName << endl;
        cout << "Roll Number  : " << rollNo << endl;

        cout << "Marks: ";
        for (int i = 0; i < 5; i++)
        {
            cout << marks[i] << " ";
        }
        cout << endl;

        cout << "Total Marks  : " << total << "/500" << endl;
        cout << "Percentage   : " << percentage << "%" << endl;
        cout << "Grade        : " << grade << endl;
    }
};

int main()
{
    StudentResult s;

    s.accept();
    s.calculateResult();
    s.display();

    return 0;
}