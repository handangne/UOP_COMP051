#include <iostream>
using namespace std;

int main() {
   int numIn;
   int value;
   bool allAllowed;
   int no = 0;/* Additional variable declarations go here */
   
   cin >> numIn;
   for (int i = 0; i < numIn; i++)
   {
      cin >> value;
      if (value >= -1000 && value <= -100) // -1000 <= x <= -100 -> not allowed
      {
         no++;
      }
   }
   if (no != 0)
   {
    allAllowed = false;
   }
   else
   {
    allAllowed = true;
   }

   /* Your code goes here */

   if (allAllowed) {
      cout << "Only allowed value(s)" << endl;
   }
   else {
      cout << "Unallowed value(s)" << endl;   
   }

   return 0;
}