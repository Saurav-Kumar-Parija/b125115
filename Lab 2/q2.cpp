#include <iostream>
using namespace std;
class Rectangle
{
    //defining variables
    double length,breadth;
public:
    //method to get dimensions
    void dimensions()
    {
        cout<<"Enter length: ";
        cin>>length ;
        cout<<"Enter breadth: ";
        cin>>breadth ;
    }  
    //method to find area  
    int area()
    {
        return length*breadth;
    }
    //method to find perimeter
    int perimeter()
    {
        return 2*(length+breadth);
    }
    //method to display details
    void display()
    {
        cout<<"||Rectangle's Details|| "<<endl;
    
        cout<<"Length: "<<length<<endl;
        cout<<"Breadth: "<<breadth<<endl;
        cout<<"Area: "<<area()<<endl;
        cout<<"Perimeter: "<<perimeter()<<endl;   
    }
};

int main()
{
    Rectangle r;
    r.dimensions();
    r.area();
    r.perimeter();
    r.display();

return 0;

}