# UOP_COMP051
## 1.1 Programming (General)
A computer program consists of instructions executing one at a time. Basic instruction types are:
- Input: A program gets data, perhaps from a file, keyboard, touchscreen, network, etc.
- Process: A program performs computations on that data, such as adding two values like x + y.
- Output: A program puts that data somewhere, such as to a file, screen, network, etc.

Programs use variables to refer to data, like x, y, and z below. The name is due to a variable's value varying as a program assigns a variable like x with new values.

```C
#include <iostream>
using namespace std;

int main() { // A program begins executing statements in main(). 
  int wage; // 'int wage' declares an integer variable. 'wage = 20' assigns wage with 20.

  wage = 20;

  cout << "Salary is "; // The cout statement outputs 'Salary is ' to the screen at the cursor's present location.
  cout << wage * 40 * 52; // outputs the result of wage * 40 * 52, so 20 * 40 * 52 or 41600.
  cout << endl; // 'endl' moves the output cursor to the next line on the screen.

  return 0; // The 'return 0' statement ends the program.
}
```

## 1.2 Programming Basics
### Basic input
The following statement gets an input value and puts that value into variable x: cin >> x; cin is short for characters in.

```C
#include <iostream>
using namespace std;
 
int main() {
   int wage;
   
   cin >> wage; // gets an input value from the keyboard (or file, etc.) and puts that value into the wage variable.
 
   cout << "Salary is ";
   cout << wage * 40 * 52;
   cout << endl;
 
   return 0;
}
```
### Basic ouput
The cout construct supports output; cout is short for characters out.
Outputting text is achieved via: cout << "desired text";.
Text in double quotes " " is known as a string literal.
Multiple cout statements continue printing on the same output line.
The statement cout << endl; starts a new output line, called a newline.

```C
#include <iostream>
using namespace std;
 
int main() {
   cout << "This is the first paragraph.";
   cout << endl;
   cout << "The cursor has been moved to the next line."
   cout << endl;
   cout << endl;
   cout << "This is the second paragraph.";

   return 0;
}
/*
This is the first paragraph.
The cursor has been moved to the next line.

This is the second paragraph
*/
```

Outputting a variable's value is achieved via: cout << x;. Note that no quotes surround x.
```C
#include <iostream>
using namespace std;

int main() {
   int wage;
   
   wage = 20;

   cout << "Wage is: ";
   cout << wage; 
   cout << endl;
   cout << "Goodbye.";
   cout << endl;

   return 0;
}
/*
Wage is: 20
Goodbye.
*/
```
Programmers commonly use a single output statement for each line of output by combining the outputting of text, variable values, and a new line. The programmer simply separates the items with << symbols. Such combining can improve program readability because the program's code corresponds more closely to the program's output.
```C
#include <iostream>
using namespace std;

int main() {
   int wage;

   wage = 20;

   cout << "Wage is: " << wage << endl; 
   cout << "Goodbye." << endl;

   return 0;
}
```
## 1.3 Comments and Whitespace
### Comments 
A comment is text a programmer adds to code, to be read by humans to better understand the code but ignored by the compiler. Two common kinds of comments exist:
- A single-line comment starts with // and includes all the following text on that line. Single-line comments commonly appear after a statement on the same line.
- A multi-line comment starts with /* and ends with */, where all text between /* and */ is part of the comment. A multi-line comment is also known as a block comment.

```C
#include <iostream>
using namespace std;
/*
 This program calculates the amount of pasta to cook, given the
 number of people eating.
*/
int main ()
{
   int numPeople;         // Number of people that will be eating
   int totalOuncesPasta;  // Total ounces of pasta to serve numPeople
   
   // Get number of people
   cout << "Enter number of people: " << endl;
   cin  >> numPeople;
   
   // Calculate and print total ounces of pasta
   totalOuncesPasta = numPeople * 3;  // Typical ounces per person
   cout << "Cook " << totalOuncesPasta << " ounces of pasta." << endl;
   
   return 0;
}
```
### Whitespace
Whitespace refers to blank spaces (space and tab characters) between items within a statement and blank lines between statements (called newlines). A compiler ignores most whitespace (Not all spaces are ignored by the compiler. Ex: The spaces in a string literal like "Enter age: " will be printed if the string is output).

- Use blank lines to separate conceptually distinct statements.
- Indent lines the same amount.
- Align items to reduce visual clutter.
- Use a single space before and after any operators like =, +, *, or << to make statements more readable.

```C
//good use of whitespace
#include <iostream>
using namespace std;

int main() {
   int myFirstVar;    // Aligned comments yield less
   int yetAnotherVar; // visual clutter 
   int thirdVar; 
  
   // Above blank line separates variable declarations from the rest
   cout << "Enter a number: ";
   cin  >> myFirstVar;
  
   // Above blank line separates user input statements from the rest   
   yetAnotherVar = myFirstVar;        // Aligned = operators
   thirdVar      = yetAnotherVar + 1; 
   // Also notice the single-space on left and right of + and =
   // (except when aligning the second = with the first =)

   cout << "Final value is " << thirdVar << endl; // Single-space on each side of <<
  
   return 0; // The above blank line separates the return from the rest
}
```
The compiler converts a high-level program into an executable program using machine code (0s and 1s).
Comments do not generate machine code.
The compiler recognizes end of statement by semicolon ";".

## 1.4 Errors and Warning
### Syntax error
People make mistakes. Programmers thus make mistakes—lots of them. One kind of mistake, known as a syntax error, is to violate a programming language's rules on how symbols can be combined to create a program. An example is forgetting to end a statement with a semicolon.





