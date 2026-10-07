#include <iostream>
using namespace std;

class InternalExam {
public:
    void display() {
        cout << "Internal Exam Result" << endl;
    }
};

class ExternalExam {
public:
    void display() {
        cout << "External Exam Result" << endl;
    }
};

class FinalResult : public InternalExam, public ExternalExam {
public:
    void showResult() {
        cout << "Calling InternalExam display():" << endl;
        InternalExam::display();

        cout << "Calling ExternalExam display():" << endl;
        ExternalExam::display();
    }
};

int main() {
    FinalResult result;

    result.showResult();

    return 0;
}