#include <iostream>
#include <vector>

using namespace std;

/*
Increasing Array

You are given an array of n integers. You want to modify the array so that it
is increasing, i.e., every element is at least as large as the previous one.

On each move, you may increase the value of any element by one. What is the
minimum number of moves required?

Input
The first input line contains an integer n: the size of the array.
Then, the second line contains n integers x1, x2, ..., xn: the contents of the
array.

Output
Print the minimum number of moves.
*/
int main() {

    int n;
    cin >> n;

    vector<long long> values(n);

    for (int i = 0; i < n; ++i) {
        cin >> values[i];
    }

    // Keep track of the largest value allowed so far in the array.
    long long currentMax = values[0];
    long long moves = 0;

    // If an element is smaller than the previous one, increase it until it matches.
    for (int i = 1; i < n; ++i) {

        if (values[i] < currentMax) {
            moves += currentMax - values[i];
        } else {
            currentMax = values[i];
        }
        
    }

    cout << moves << '\n';

    return 0;

}
