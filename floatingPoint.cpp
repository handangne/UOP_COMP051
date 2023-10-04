#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   int num1;
   int num2;
   int num3;
   int num4;

   cin >> num1;
   cin >> num2;
   cin >> num3;
   cin >> num4;
   
   int product = num1 * num2 * num3 * num4;
   int average = (num1 + num2 + num3 + num4) / 4;
   
   double doubleNum1 = (double)num1;
   double doubleNum2 = (double)num2;
   double doubleNum3 = (double)num3;
   double doubleNum4 = (double)num4;
      
   double doubleProduct = doubleNum1 * doubleNum2 * doubleNum3 * doubleNum4;
   double doubleAverage = (doubleNum1 + doubleNum2 + doubleNum3 + doubleNum4) / 4;
   
   cout << product << " " << average << endl;
   cout << fixed << setprecision(3);
   cout << doubleProduct << " " << doubleAverage << endl;
   return 0;
}
