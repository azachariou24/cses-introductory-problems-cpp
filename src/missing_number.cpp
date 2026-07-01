#include <iostream>

using namespace std;

/*
You are given all numbers between 1,2,...,n except one. Your task is to find
the missing number.

Input
The first input line contains an integer n.
The second line contains n-1 numbers. Each number is distinct and between 1 and
n (inclusive).

Output
Print the missing number.
*/
int main() {

    int n;
    cin >> n;

    // Sum of all numbers from 1 to n.
    long long expectedSum = 1LL * n * (n + 1) / 2;
    // Sum of the numbers actually given in the input.
    long long actualSum = 0;

    // Read the n-1 values and accumulate their sum.
    for (int i = 0; i < n - 1; ++i) {

        int value;
        cin >> value;

        actualSum += value;

    }

    // The missing number is the difference between the two sums.
    cout << expectedSum - actualSum << '\n';

    return 0;
    
}
