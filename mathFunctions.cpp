#include <iostream>
#include <cmath>
using namespace std;

int main() {
   double x;
   double y;
   double z;
   
   cin >> x;
   cin >> y;
   cin >> z;
   
   cout << pow(x, z) << " "; // x to the power of z
   cout << pow(x, pow(y, z)) << " "; // x to the power of (y to the power of z)
   cout << fabs(y) << " "; // the absolute value of y
   cout << sqrt(pow( (x * y), z)) << endl; // the square root of (xy to the power of z)

   // calculate the value of a, b
   double a;
   double b;
   a = sqrt(pow(y, 2) + pow(z, 2)); // the square root of (y to the power of 2 + z to the power of 2)
   b = pow(2, pow(x,y) + 1);
   cout << a << endl;
   cout << b << endl;

   return 0;
}
