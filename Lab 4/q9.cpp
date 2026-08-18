#include <iostream>
#include <string>
using namespace std;

class Exam
{
private:
    string studentName , subject;
    float maximumMarks , marks;

public:

     //Constructor to intialize the variables
    Exam(string name, string sub, float m, float max)
    {
        studentName = name;
        subject = sub;
        marks = m;
        maximumMarks = max;
    }

    friend class Result;
};

class Result
{
public:

    void displayResult(Exam e)
    {
        float percentage = (e.marks / e.maximumMarks) * 100;

        cout << "----- Online Exam Result -----" << endl;
        cout << "Student Name : " << e.studentName << endl;
        cout << "Subject      : " << e.subject << endl;
        cout << "Marks        : " << e.marks << endl;
        cout << "Maximum Marks: " << e.maximumMarks << endl;
        cout << "Percentage   : " << percentage << "%" << endl;

        if (percentage >= 40)
        {
            cout << "Result       : Pass" << endl;
        }
        else
        {
            cout << "Result       : Fail" << endl;
        }
    }
};

int main()
{
    Exam e("SKP", "C++", 15, 100);

    Result r;
    r.displayResult(e);

    return 0;
}