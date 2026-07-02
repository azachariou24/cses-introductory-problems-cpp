#include <iostream>

using namespace std;

/*
Coin Piles

You have two coin piles containing a and b coins. On each move, you can either
remove one coin from the left pile and two coins from the right pile, or two
coins from the left pile and one coin from the right pile.

Your task is to efficiently find out if you can empty both the piles.

Input
The first input line has an integer t: the number of tests.
After this, there are t lines, each of which has two integers a and b: the numbers of coins in the piles.

Output
For each test, print "YES" if you can empty the piles and "NO" otherwise.
*/
int main() {

    int t;
    cin >> t;

    while (t--) {

        long long a, b;
        cin >> a >> b;

        // Each move removes exactly 3 coins in total.
        // Therefore, the total number of coins must be divisible by 3.
        bool totalDivisibleByThree = ((a + b) % 3 == 0);

        // The larger pile cannot have more than twice the coins of the smaller pile.
        // Otherwise, the smaller pile will become empty before the larger one.
        bool pilesAreBalanced = (a <= 2 * b && b <= 2 * a);

        if (totalDivisibleByThree && pilesAreBalanced) {

            cout << "YES" << '\n';

        } else {

            cout << "NO" << '\n';

        }
    }

    return 0;
    
}