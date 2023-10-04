#include <iostream>
using namespace std;

int main() {
   int numInput;
   int value;
   int tmp = 0;
   bool noCopies;
   
   cin >> numInput;
   for (int i = 0; i < numInput; i++)
   {
      cin >> value;
      if (value != 1)
      {
         tmp++;
      }
   }
   if (tmp == numInput)
   {
      noCopies = true;
   }
   else
   {
      noCopies = false;
   }


   if (noCopies) {
      cout << "No copies of 1" << endl;
   }
   else {
      cout << "Found one or more 1s" << endl;
   }

   return 0;
}