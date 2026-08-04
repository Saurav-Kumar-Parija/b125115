#include <iostream>
using namespace std;
class Calculator
{
    //defining variables
    int x,y;
public:
    //method to get details
    void details(){
        cout<<"Enter 1st number: ";
        cin>>x ;
        cout<<"Enter 2nd number: ";
        cin>>y ;
}   
    //method to add  
    int add()
    {
        return x+y;
    }
    //method to subtract
    int diff()
    {
        return x-y;
    }
    //method to multiply
    int multiply()
    {
        return x*y;
    }
    //method to divide
    void div()
    {
        if(y!=0)
        cout<<(double)x/y<<endl;

        else 
        cout<<"Division by 0 is not possible"<<endl;
    }
};
int main()
{
Calculator c;

c.details();

int add=c.add();
int diff=c.diff();
int multiply=c.multiply();

cout<<"Addition: "<<add<<endl;
cout<<"Subtraction: "<<diff<<endl;
cout<<"Multiplication: "<<multiply<<endl;
cout<<"Division: ";

c.div();

return 0;

}