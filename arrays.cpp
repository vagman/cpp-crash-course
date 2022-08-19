#include <iostream>
using namespace std;

int main() {
    /*
    You are given an array of doubles of items in a store 
    that have different prices (see template).
    Write a program that takes the "percent off" discount 
    as input and outputs discounted item prices on one line in 
    the same sequence you are given, separated by a space (" ").
    Sample Input
    25
    Sample Output
    375 9.3 70.5 33.75 2.25 60.75 750.675 63.75 67.5 0.75 26.25
    */
    double items[] = {500, 12.4, 94, 45, 3, 81, 1000.9, 85, 90, 1, 35};
    
    //your code goes here
    int discount;
    cin >> discount;
    
    for (int i = 0; i <= 10; i++) {
        items[i] = items[i] - items[i] * discount * 0.01;
        cout << items[i];
    }
    
    return 0;
}