#include <iostream>

using namespace std;

/*
Consider an algorithm that takes as input a positive integer n. If n is even,
the algorithm divides it by two, and if n is odd, the algorithm multiplies it
by three and adds one. The algorithm repeats this, until n is one.

Your task is to simulate the execution of the algorithm for a given value of n.

Input
The only input line contains an integer n.

Output
Print a line that contains all values of n during the algorithm.
*/
int main() {

    long long n;
    cin >> n;

    // Keep printing the current value until we reach 1.
    while (true) {

        cout << n;

        if (n == 1) {
            break;
        }

        cout << ' ';

        // Even numbers are divided by 2.
        if (n % 2 == 0) {
            n /= 2;
        } else {
            // Odd numbers are transformed with 3n + 1.
            n = n * 3 + 1;
        }
    }

    cout << '\n';

    return 0;
    
}