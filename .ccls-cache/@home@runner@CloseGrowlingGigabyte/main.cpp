/*
Author Name: Conner Bare
Course: COP 2334
Software: Repl.it C++ IDE
Summary: This program will accept an integer from the user, and then output the ordinal 
number form of all the numbers from one to the entered value, followed by Hello. 
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