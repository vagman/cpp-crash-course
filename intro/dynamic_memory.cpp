#include <iostream>
using namespace std;

int main() {
    /*
    Dynamic Memory
    The code provided calculates the largest element of the array nums and outputs it.
    Complete the code to declare the nums array and take the array elements as input.
    The array can be of any variable size, so the first input should be the size of the array, followed by its elements.
    Sample Input
    4
    12
    7
    9
    34
    Sample Output
    34
    Explanation
    The first input number (4) represents the size of the array, the next 4 numbers are the elements. The maximum value is 34.
    */
    int n;
    cin >> n; //size of the array
    int number = 0;
    int max = number;
    for(int i = 0; i < n; i++) {
        cin >> number;
        if(number > max)
            max = number;
    }
    cout << max << endl;

    return 0;
}