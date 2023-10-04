/*
Given string strVal on one line and string string2 on a second line,
output the index where string2 starts within strVal
End with a new line
*/

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    // Declare value
    string strVal;
    string string2;
    int index;

    // Get input
    getline (cin, strVal);
    cin >> string2;

    index = strVal.find(string2);

    cout << index << endl;

    return 0;

}