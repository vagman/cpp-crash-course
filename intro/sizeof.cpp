#include <iostream>
using namespace std;

int main() {
    /*
    The sizeof() Operator
    You are given an array of integers which represents the ages of 
    each employee in the office (see template). You need to obtain 
    the number of employees, but there are too many to count manually.
    Write a statement that will calculate the elements count defined i
    n array and output the count.
    */
    
    int ages[] = {19, 24, 36, 45, 56, 52, 21, 27, 24, 34, 29, 60, 40, 42, 45, 47, 22, 30, 34, 20, 18, 26, 51, 43, 47, 39, 22, 34, 56, 52, 21, 27, 24, 37, 19, 24, 36, 45, 44, 49, 23, 25, 19, 40, 29, 60, 40, 42, 45, 47, 61, 30, 19, 43, 47, 39, 41, 46, 29, 24, 21, 25, 28};
                    
    cout << sizeof(ages) / 4 << endl;    
    return 0;
}