/*
Write a program whose input is a character and a string,
and whose output indicates the number of times the character appears in the string.
The output should include the input character and use the plural form, n's,
if the number of times the characters appears is not exactly 1.
Ex: If the input is:
n Monday
the output is:
1 n
Ex: If the input is:
z Today is Monday
the output is:
0 z's
Ex: If the input is:
n It's a sunny day
the output is:
2 n's
Case matters.
Ex: If the input is:
n Nobody
the output is:
0 n's
n is different than N.
*/

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    char n;
    string userString;
    int count = 0;

    cin >> n;
    getline (cin, userString);

    for (int i = 0; i < userString.size(); i++)
    {
        if (userString[i] == n)
        {
            count++;
        }
    }

    if (count == 1)
    {
        cout << count << " " << n << endl;
    }
    else
    {
        cout << count << " " << n << "'s" << endl;
    }


    return 0;
}
