#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }
};

class Student : virtual public Person {
protected:
    int rollNo;
    double cgpa;

public:
    Student(string n, int a, int roll, double c): Person(n, a) {
        rollNo = roll;
        cgpa = c;
    }
};

class Employee : virtual public Person {
protected:
    int employeeID;
    double salary;

public:
    Employee(string n, int a, int id, double s): Person(n, a) {
        employeeID = id;
        salary = s;
    }
};

class TeachingAssistant : public Student, public Employee {
public:
    TeachingAssistant(string n, int a, int roll, double c,
                      int id, double s): Person(n, a), Student(n, a, roll, c),Employee(n, a, id, s) {
    }

    void display() {
        cout << "Name        : " << name << endl;
        cout << "Age         : " << age << endl;
        cout << "Roll No     : " << rollNo << endl;
        cout << "CGPA        : " << cgpa << endl;
        cout << "Employee ID : " << employeeID << endl;
        cout << "Salary      : " << salary << endl;
    }
};

int main() {
    TeachingAssistant ta("Rahul", 21, 101, 8.7, 5001, 30000);

    ta.display();

    return 0;
}