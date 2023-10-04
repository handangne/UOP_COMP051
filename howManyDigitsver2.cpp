#include <iostream>
using namespace std;

int main ()
{
    int number;
    cin >> number;
    
    int count = 0;
    int tmp = number;
    
    if (number > 0)
    {
        while (tmp > 0)
        {
            tmp = tmp / 10;
            count++;
        }
    }
    else if (number == 0)
    {
        count = 1;
    }
    
    if (count != 1)
    {
        cout << count << " digits" << endl;
    }
    else
    {
        cout << count << " digit" << endl;
    }
    
    return 0;
}