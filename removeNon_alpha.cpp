/*
Write a program that removes all non alpha characters from the given input.

Ex: If the input is:
-Hello, 1 world$!
the output is:
Helloworld
*/

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string userString;
    getline (cin, userString);

    string tmp = "";

    for (int i = 0; i < userString.size(); i++ )
    {
        if ( (userString[i] >= 'a' && userString[i] <= 'z') || (userString[i] >= 'A' && userString[i] <= 'Z') )
        {
            tmp = tmp + userString[i];
        }
    }
    cout << tmp << endl;

    return 0;
}