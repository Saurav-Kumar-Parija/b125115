//Student ID Search
#include <iostream>
using namespace std;

int main() {
    //defining no. of students(n)
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    // Dynamically taking studentId's as input 
    int *studentIDs = new int[n];
    int *ptr = studentIDs;

    //Taking inputs of student ids
    cout << "Enter student IDs:\n";
    for (int i = 0; i < n; i++) 
    {
        cin >> *ptr;
        ptr++;
    }
    //
    int searchID;
    //To search a particular student id
    cout << "\nEnter student ID to search: ";
    cin >> searchID;
    ptr = studentIDs;

    int position = 1;
    bool found = false;

    while (ptr < studentIDs + n) 
    {

        if (*ptr == searchID) 
        {
            found = true;
            break;
        }
        ptr++;
        position++;
    }

    if (found) 
    {
        cout << "Student ID found at position: "
             << position << endl;
    }
    else 
    {
        cout << "Student ID not found." << endl;
    }
    //
    delete[] studentIDs;
    return 0;
}
