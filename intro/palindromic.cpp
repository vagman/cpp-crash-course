#include <iostream>
using namespace std;
/*
Palindrome Numbers
A palindromic number is a number (such as 626) that remains
the same when its digits are reversed.
Write a function that returns true if a given number is a palindrome,
and false, if it is not.
Complete the given function, so that the code in main works and results
in the expected output.
Sample Input:
13431
Sample Output:
13431 is a palindrome
To check if a number is palindrome, you need to reverse it and compare with the original one.
*/
bool isPalindrome(int x) {
    //complete the function
    int number, digit, reversed_number = 0;
    number = x;
    do {
        
        digit = x % 10;
        reversed_number = (reversed_number * 10) + digit;
        x = x / 10;

    } while (x != 0);

    if (number == reversed_number) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int n;
    cin >>n;
    
    if(isPalindrome(n)) {
        cout << n <<" is a palindrome";
    }
    else {
        cout << n <<" is NOT a palindrome";
    }
    return 0;
}