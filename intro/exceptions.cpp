#include <iostream>
using namespace std;
/*
Exceptions
You are making a program to manage user names.
A valid username needs to be minimum 4, maximum 20 characters long.
Create a program to take a string as input, check its length and 
output "Valid" if the name is valid, or "Invalid", if it is not.
You can check the length of the input string using the size() 
function and throw an exception, if it is not valid.
*/
int main() {
   string name;
   cin >> name;
   try {
      if (name.size() < 4 or name.size() > 20) {
         throw 9;
      
      }
      cout << "Valid";
   }
   catch(int x) {
      cout << "Invalid";
   }
   
   return 0;
}