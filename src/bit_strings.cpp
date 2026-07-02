#include <iostream>

using namespace std;

/*
Bit Strings

Your task is to calculate the number of bit strings of length n.

Input
The only input line has an integer n.

Output
Print the result modulo 10^9+7.
*/
int main() {

    const long long MOD = 1000000007;

    int n;
    cin >> n;

    long long answer = 1;

    // Each position has two possible choices: 0 or 1.
    for (int i = 0; i < n; i++) {

        answer = (answer * 2) % MOD;
        
    }

    cout << answer << '\n';

    return 0;

}