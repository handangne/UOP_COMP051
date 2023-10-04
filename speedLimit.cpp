/*
Write a program that is given two integers representing a speed limit and driving speed in miles per hour (mph)
and outputs the traffic ticket amount.
Driving 10 mph under the speed limit (or slower) receives a $50 ticket.
Driving 6 - 20 mph over the speed limit receives a $75 ticket.
Driving 21 - 40 mph over the speed limit receives a $150 ticket.
Driving faster than 40 mph over the speed limit receives a $300 ticket.
Otherwise, no ticket is received.
Ex: If the input is:
35 45
the output is:
75

Ex: If the input is:
35 26
the output is:
0
*/

#include <iostream>
using namespace std;

int main()
{
    // Declare value
    int speedLimit;
    int drivingSpeed;
    int ticketAmount;
    int tmp;

    // Get input
    cin >> speedLimit;
    cin >> drivingSpeed;

    tmp = speedLimit - drivingSpeed;

    if (tmp > 10)
    {
        ticketAmount = 50;
    }
    else if (tmp <= -6 && tmp >= -20)
    {
        ticketAmount = 75;
    }
    else if (tmp <= -21 && tmp >= -40)
    {
        ticketAmount = 150;
    }
    else if (tmp < -40)
    {
        ticketAmount = 300;
    }
    else 
    {
        ticketAmount = 0;
    }


    cout << ticketAmount << endl;

    return 0;

}