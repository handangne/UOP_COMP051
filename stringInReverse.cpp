/*
Write a program that takes in a line of text as input, and outputs that line of text in reverse.
The program repeats, ending when the user enters "Done", "done", or "d" for the line of text.

Ex: If the input is:
Hello there
Hey
done
then the output is:
ereht olleH
yeH
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string userString;
    
    getline (cin, userString);

    string tmp;

    while (userString != "done" && userString != "Done" && userString != "d")
    {
        int length = userString.size();
        for (int i = length - 1 ; i >= 0; --i)
        {
            tmp = tmp + userString[i];
        }
        tmp = tmp + '\n' ;
        getline (cin, userString);
    }
    cout << tmp;
    

    return 0;
}