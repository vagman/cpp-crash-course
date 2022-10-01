#include <iostream>
using namespace std;
/*
        Functions with multiple parameters
        While playing a board game, you and your 
        friend roll the dice and the person who rolled the 
        higher number moves forward.
        Write a function that takes two numbers as arguments 
        and returns the higher number of the two. Print the result.
        If numbers are equal function must return that number.
        Sample Input
        1
        6
        Sample Output
        6
*/
int max(int num1, int num2) {
    //complete the function
    if (num1 > num2) {
        cout << num1;
    } else if (num2 > num1) {
        cout << num2;
    } else {
        cout << num1;
    }
}

int main() {
    //getting inputs
    int first;
    cin >> first;
    int second;
    cin >> second;
    
    //call the function and print result
    max(first, second);
    
    return 0;
}