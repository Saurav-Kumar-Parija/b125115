#include <iostream>
#include <string>
using namespace std;

class LibraryBook
{
    //defining variables
    int bookID;
    string bookTitle;
    string studentName;
    int daysIssued;
    int fine;

public:
    //method to get details
    void accept()
    {
        cout << "Enter Book ID: ";
        cin >> bookID;
    // as cin uses \n at last so getline maythink as input  so to cancel\n we use .ignore    
        cin.ignore();
    // we are using getline instead of cin as cin only uses 1t name no space after name
        cout << "Enter Book Title: ";
        getline(cin, bookTitle);

        cout << "Enter Student Name: ";
        getline(cin, studentName);

        cout << "Enter Number of Days Book was Issued: ";
        cin >> daysIssued;
    }
    //method to calculate fine
    void calculateFine()
    {
        if (daysIssued > 15)
            fine = (daysIssued - 15) * 2;
        else
            fine = 0;
    }
    //method to display details
    void display()
    {
        cout << "\nLibrary Transaction Details\n";
        cout << "-----------------------------\n";
        cout << "Book ID          : " << bookID << endl;
        cout << "Book Title       : " << bookTitle << endl;
        cout << "Student Name     : " << studentName << endl;
        cout << "Days Issued      : " << daysIssued << endl;
        cout << "Fine             : Rs. " << fine << endl;
    }
};

int main()
{
    LibraryBook book;

    book.accept();
    book.calculateFine();
    book.display();

    return 0;
}