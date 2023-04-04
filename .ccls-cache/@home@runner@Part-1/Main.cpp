/*
Author Name: Conner Bare
Course: COP 2334
Software: Repl.it C++ IDE
Summary: This program will accept an integer from the user, and then output the ordinal number form of all the numbers from one to the entered value, followed by Hello. 
*/
#include <iostream>
using namespace std;

int main()
{
  int userInput;

  cout << "Please enter the stopping point: ";
  cin >> userInput;
  
   for(int i = 1 ; i < userInput + 1 ; i++) {
   
   cout << i;
   
   if(i < 21 && i > 3)
      cout << "th";
   else {
      if(i % 10 == 2 || i % 10 == 0.8) {
         cout << "nd";
      }  
      else if(i % 10 == 3 || i % 10 == 0.7) {
         cout << "rd";
      }
      else if(i % 10 == 1 || i % 10 == 0.9) {
         cout << "st";
      }
      else {
         cout << "th";
      }  
   }
   
   cout << " Hello\n";
   }
   
   return 0;
} 