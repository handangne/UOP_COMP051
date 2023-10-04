#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
   string inputString;
   bool noDuplicates;
   
   cin >> inputString;
   inputString.at(1) = tolower(inputString.at(1));
   inputString.at(0) = tolower(inputString.at(0));
   if (inputString.at(1) != inputString.at(0))
   {
      noDuplicates = true;
   }
   else if (inputString.at(1) == inputString.at(0))
   {
      noDuplicates = false;
   }

   
   if (noDuplicates) {
      cout << "String is valid" << endl;
   }
   else {
      cout << "String is not valid" << endl;
   }
   cout << inputString.at(0) << endl;
   cout << inputString.at(1) << endl;

   return 0;
}