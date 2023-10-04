/*
Given a string representing a 10-digit phone number, output the area code, prefix, 
and line number using the format (800) 555-1212.
Ex: If the input is:
8005551212
the output is:
(800) 555-1212
*/


#include <iostream>
#include <string>
using namespace std;

int main()
{
    string phoneNumber;
    cin >> phoneNumber;

    string subPhoneNumber1;
    subPhoneNumber1 = phoneNumber.substr(0, 3);
    subPhoneNumber1 = "(" + subPhoneNumber1 + ")";

    string subPhoneNumber2;
    subPhoneNumber2 = phoneNumber.substr(3, 3);
    subPhoneNumber2 = " " + subPhoneNumber2 + "-";

    string subPhoneNumber3;
    subPhoneNumber3 = phoneNumber.substr(6, 4);
    
    cout << subPhoneNumber1 << subPhoneNumber2 << subPhoneNumber3 << endl;

    return 0;


}
