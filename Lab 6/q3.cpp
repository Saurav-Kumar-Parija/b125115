//Library Shelf
#include <iostream>
using namespace std;
int main() 
{
    //declaring array of books
    int books[6];
    //taking inputs
    cout << "Enter 6 book IDs:";
    for (int i = 0; i < 6; i++) 
    {
        cin >> books[i];
    }
    int *ptr = books;
    //displaying book ids and their addresses
    cout << "\nBook IDs and their addresses:\n";
    for (int i = 0; i < 6; i++) 
    {
        cout << "Book ID: " << *ptr << " || Address: " << ptr << endl;
        ptr++;
    }
    return 0;
}