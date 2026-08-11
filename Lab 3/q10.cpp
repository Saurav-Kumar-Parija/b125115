#include <iostream>
#include <string>
using namespace std;

class Employee
{
    int employeeID;
    string employeeName;
    double basicSalary;
    double* monthlyEarnings;
    int numberOfMonths;

public:
    // Constructor to intialize the values to the variables
    Employee()
    {
        monthlyEarnings = nullptr;
        numberOfMonths = 0;
    }

    // Function to accept employee details
    void inputDetails()
    {
        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cin.ignore();
        cout << "Enter Employee Name: ";
        getline(cin, employeeName);

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;

        cout << "Enter number of months: ";
        cin >> numberOfMonths;

        // Dynamically allocate memory for monthly earnings
        monthlyEarnings = new double[numberOfMonths];

        cout << "\nEnter monthly earnings:\n";

        for (int i = 0; i < numberOfMonths; i++)
        {
            cout << "Month " << i + 1 << ": ";
            cin >> monthlyEarnings[i];
        }
    }

    // Calculate total earnings
    double calculateTotal()
    {
        double total = 0;

        for (int i = 0; i < numberOfMonths; i++)
        {
            total += monthlyEarnings[i];
        }

        return total;
    }

    // Calculate average monthly earnings
    double calculateAverage()
    {
        return calculateTotal() / numberOfMonths;
    }

    // Find month with highest earning
    int findHighestMonth()
    {
        int highestMonth = 0;

        for (int i = 1; i < numberOfMonths; i++)
        {
            if (monthlyEarnings[i] > monthlyEarnings[highestMonth])
            {
                highestMonth = i;
            }
        }

        return highestMonth;
    }

    // Display complete analysis
    void displayAnalysis()
    {
        double total = calculateTotal();
        double average = calculateAverage();
        int highestMonth = findHighestMonth();

        cout << "\n========== Employee Analysis ==========\n";
        cout << "Employee ID       : " << employeeID << endl;
        cout << "Employee Name     : " << employeeName << endl;
        cout << "Basic Salary      : " << basicSalary << endl;
        cout << "Number of Months  : " << numberOfMonths << endl;

        cout << "\nMonthly Earnings:\n";
        for (int i = 0; i < numberOfMonths; i++)
        {
            cout << "Month " << i + 1 << " : " << monthlyEarnings[i] << endl;
        }

        cout << "\nTotal Earnings    : " << total << endl;
        cout << "Average Earnings  : " << average << endl;
        cout << "Highest Earning   : " << monthlyEarnings[highestMonth] << endl;
        cout << "Highest Earning Month : Month " << highestMonth + 1 << endl;
    }

    // Destructor to deallocate dynamically allocated memory
    ~Employee()
    {
        delete[] monthlyEarnings;
        monthlyEarnings = nullptr;
    }
};

int main()
{
    Employee emp;

    emp.inputDetails();
    emp.displayAnalysis();

    return 0;
}
