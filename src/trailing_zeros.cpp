#include <iostream>

using namespace std;

/*
Trailing Zeros

Your task is to calculate the number of trailing zeros in the factorial n!.

For example, 20! = 2432902008176640000 and it has 4 trailing zeros.

Input
The only input line has an integer n.

Output
Print the number of trailing zeros in n!.
*/

int main() {

    long long n;
    cin >> n;

    long long count = 0;

    // A trailing zero is created by a factor of 10.
    // Since 10 = 2 * 5, we need pairs of 2 and 5.
    // In a factorial, there are always more factors of 2 than factors of 5.
    // Therefore, we only count how many factors of 5 appear in n!.
    while (n > 0) {

        n = n / 5;

        // Every multiple of 5 contributes at least one factor of 5.
        // Multiples of 25, 125, ... contribute extra factors.
        count = count + n;
    }

    cout << count << '\n';

    return 0;

}