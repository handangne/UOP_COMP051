/*
Given a stringVal on one line, integer posStart on a second line, and integer selectionLen on a third line, 
replace selectionLen characters with "(deleted)", starting at index posStart
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declare value
    string stringVal;
    int posStart;
    int selectionLen;

    // Get input 
    getline (cin, stringVal);
    cin >> posStart;
    cin >> selectionLen;

    // replace selectionLen characters with "(deleted)", starting at index posStart
    stringVal.replace(posStart, selectionLen, "(deleted)");

    cout << stringVal << endl;

    return 0;
}