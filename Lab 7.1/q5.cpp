#include <iostream>
using namespace std;

class Academic {
protected:
    double subject1, subject2, subject3;

public:
    Academic(double s1, double s2, double s3) {
        subject1 = s1;
        subject2 = s2;
        subject3 = s3;
    }
};

class Sports {
protected:
    double sportsMarks;

public:
    Sports(double marks) {
        sportsMarks = marks;
    }
};

class StudentResult : public Academic, public Sports {
public:
    StudentResult(double s1, double s2, double s3, double sports): Academic(s1, s2, s3), Sports(sports) {
    }

    void displayResult() {
        double academicMarks = subject1 + subject2 + subject3;
        double total = academicMarks + sportsMarks;
        double average = total / 4;

        cout << "Academic Marks : " << academicMarks << endl;
        cout << "Sports Marks   : " << sportsMarks << endl;
        cout << "Total Marks    : " << total << endl;
        cout << "Average        : " << average << endl;
    }
};

int main() {
    StudentResult student(85, 80, 90, 75);

    student.displayResult();

    return 0;
}