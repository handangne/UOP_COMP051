/*
A cashier distributes change using the maximum number of five dollar bills, followed by one dollar bills.
For example, 19 yields 3 fives and 4 ones.
Write a single statement that assigns the number of 1 dollar bills to variable numOnes, given amountToChange.
Hint: Use the % operator.
*/

#include <iostream>
using namespace std;

int main ()
{
    int amountToChange;
    int numFives, numOnes;

    cout << "Enter the amount of money: ";
    cin >> amountToChange; // get value from user

    numFives = amountToChange / 5;
    numOnes = amountToChange % 5;

    cout << amountToChange << " yields " << numFives << " fives and " << numOnes << " ones.";
    
    return 0;
}