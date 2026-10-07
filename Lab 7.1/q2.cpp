#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int rollNo;

public:
    Student(string n, int r) {
        name = n;
        rollNo = r;
    }

    virtual void calculateResult() {
        cout << "Calculating result..." << endl;
    }
};

class RegularStudent : public Student {
private:
    int marks1, marks2, marks3;

public:
    RegularStudent(string n, int r, int m1, int m2, int m3): Student(n, r) {
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
    }

    void calculateResult() override {
        int total = marks1 + marks2 + marks3;

        cout << "\nRegular Student" << endl;
        cout << "Name       : " << name << endl;
        cout << "Roll No    : " << rollNo << endl;
        cout << "Total Marks: " << total << endl;
    }
};

class ScholarshipStudent : public Student {
private:
    int marks1, marks2, marks3;

public:
    ScholarshipStudent(string n, int r, int m1, int m2, int m3): Student(n, r) {
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
    }

    void calculateResult() override {
        int total = marks1 + marks2 + marks3;
        total += 5;

        cout << "\nScholarship Student" << endl;
        cout << "Name       : " << name << endl;
        cout << "Roll No    : " << rollNo << endl;
        cout << "Total Marks: " << total << endl;
    }
};

int main() {
    RegularStudent r("Amit", 101, 80, 75, 85);
    ScholarshipStudent s("Riya", 102, 80, 75, 85);

    r.calculateResult();
    s.calculateResult();

    return 0;
}