#include <iostream>
#include <string>
using namespace std;

class Diary
{
    //defining variables
    string ownerName;
    int numberOfEntries;
    string lastEntry;

public:
    
    //Constructor to intialize the variables
    Diary(string name, int entries, string entry)
    {
        ownerName = name;
        numberOfEntries = entries;
        lastEntry = entry;
    }

    // Friend function declaration
    friend void displayDiary(Diary d);
};

// Friend function definition
void displayDiary(Diary d)
{
    cout << "----- Personal Diary -----" << endl;
    cout << "Owner Name      : " << d.ownerName << endl;
    cout << "Number of Entries: " << d.numberOfEntries << endl;
    cout << "Last Entry      : " << d.lastEntry << endl;
}

int main()
{
    Diary d("SKP", 25, "Today I completed my C++ laboratory work.");

    displayDiary(d);

    return 0;
}