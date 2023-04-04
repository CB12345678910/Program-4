/*
Author Name: Conner Bare
Course: COP 2334
Software: Repl.it C++ IDE
Summary: This program will accept an value, output a few calculations using this value, and then ask for a new value. This will repeat until -1 is entered. 
Interesting Quirks: Inputting zero glitches out the x / x calculation, due to the inability to divide by zero. Entering a letter causes a repeating output glitch.
*/
#include <iostream>
using namespace std;

int main()
{
  int counter = 0;
  double userInput;
  double calcOne;
  double calcTwo;
  double calcThree;
  double calcFour;

  cout << "Please enter as number: ";
  cin >> userInput;
  
   while(userInput != -1)  {
    calcOne = userInput * userInput;
    calcTwo = userInput / userInput;
    calcThree = (userInput + 3) / 5;
    calcFour = calcThree + ((userInput + 7) / 2);

    cout << "x = " << userInput << endl;
    cout << "x * x = " << calcOne << endl;
    cout << "x / x = " << calcTwo << endl; 
    cout << "(x + 3) / 5 = " << calcThree << endl;
    cout << "((x + 3) / 5) + ((x+7) / 2) = " << calcFour << endl;
    
    counter = counter + 1;

     cout << "Please enter another number: ";
     cin >> userInput;
    
   }

   cout << endl << "Count: " << counter;
   
   return 0;
} 