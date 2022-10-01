#include <iostream>
using namespace std;

/*
Recursion
Pastry chefs are competing to win the battle of the cakes.
For each additional cake made, the number of eggs required
increases by 1 (1 egg for the first cake, 2 eggs for the second, etc.).
Take the number of cakes that must be baked as the input, 
calculate (recursively) how many eggs were used to bake them 
by the end of the battle and output the result.
Sample Input
4
Sample Output
10
Explanation
Since 4 cakes must be cooked,
starting from the first 1 + 2 + 3 + 4 =10 eggs will be used.
*/
int recSum(int n) {
    //complete the function
    if (n == 1) {
        return 1;
    } else {
        return n + recSum(n - 1);
    }

}

int main() {
    //getting input
    int n;
    cin >> n;
    
    //call the recursive function and print returned value
    cout << recSum(n);
    
    return 0;
}