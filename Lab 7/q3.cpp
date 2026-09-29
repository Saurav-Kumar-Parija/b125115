#include <iostream>
#include <string>
using namespace std;

class Student {
    //defining variables
    string name;
    int marks;
public:
    Student(string n, int m) {
        name = n;
        marks = m;
    }

    bool operator>(Student s) {
        return marks > s.marks;
    }

    string Name() 
    {
        return name;
    }

    int Marks() 
    {
        return marks;
    }
};

int main() {
    Student s1("Ram", 85);
    Student s2("Sham", 78);

    cout << s1.Name() << " Marks: " << s1.Marks() << endl;
    cout << s2.Name() << " Marks: " << s2.Marks() << endl;

    if (s1 > s2)
        cout << s1.Name() << " has higher marks." << endl;
    else
        cout << s2.Name() << " has higher marks." << endl;

    return 0;
}