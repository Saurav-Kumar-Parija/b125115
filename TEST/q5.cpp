//updateVisitors
#include <iostream>
using namespace std;
//function to update no. of visitors 
void updateVisitors(int *count) 
{
    int newVisitors;
    cout << "Enter number of newly arrived visitors: ";
    cin >> newVisitors;
    *count = *count + newVisitors;
}
int main() 
{
    int visitors;
    cout << "Enter current visitor count: ";
    cin >> visitors;
    //dispalying visitor count before update and after update
    cout << "Visitor count before update: " << visitors << endl;
    updateVisitors(&visitors);
    cout << "Visitor count after update: "<< visitors << endl;
    return 0;
}
