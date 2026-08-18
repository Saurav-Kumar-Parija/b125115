#include <iostream>
#include <string>
using namespace std;

class TrainSeat
{
    //Defining variables
    int seatNumber;
    string passengerName;
    bool bookingStatus;

public:

     //Constructor to intialize the variables
    TrainSeat(int seat, string name, bool status)
    {
        seatNumber = seat;
        passengerName = name;
        bookingStatus = status;
    }

    friend class TicketChecker;
};

class TicketChecker
{
public:

    void displaySeatDetails(TrainSeat s)
    {
        cout << "----- Train Seat Details -----" << endl;
        cout << "Seat Number: " << s.seatNumber << endl;

        if (s.bookingStatus)
        {
            cout << "Booking Status: Booked" << endl;
            cout << "Passenger Name: " << s.passengerName << endl;
        }
        else
        {
            cout << "Booking Status: Available" << endl;
        }
    }
};

int main()
{
    TrainSeat seat(25, "SKP", true);

    TicketChecker checker;
    checker.displaySeatDetails(seat);

    return 0;
}