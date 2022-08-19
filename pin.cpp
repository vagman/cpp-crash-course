#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    /*
    The rand() function
    You must set a PIN for your suitcase that contains 4 
    digits in the range of 0 to N.
    Write a program to take the N number as input, generate 4 
    random numbers from the range and print them sequentially, 
    without spaces.
    Sample Input
    9
    Sample Output
    2818
    Use rand() function to generate the numbers from required range.
    srand(0) is used to match the output, so don't change it.
    */
    srand(0);
    int range;
    cin >> range;
    //your code goes here
    int pin[4];
    for (int i = 0; i <= 3; i++) {
        pin[i] = 1 + (rand() % range);
        cout << pin[i];
    }
    
    return 0;
}