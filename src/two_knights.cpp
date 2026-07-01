#include <iostream>

using namespace std;

/*
Two Knights

For each k from 1 to n, count the number of ways to place two knights on a
k x k chessboard so that they do not attack each other.

Input
The only input line contains an integer n.

Output
Print n integers: the results.
*/
int main() {

    int n;
    cin >> n;

    for (long long k = 1; k <= n; ++k) {

        // Total ways to choose any two squares on a k x k board.
        long long totalPairs = (k * k) * (k * k - 1) / 2;

        // Number of attacking knight pairs.
        // Every attacking pair fits inside a 2 x 3 rectangle, and there are
        // (k - 1) * (k - 2) such rectangles on a k x k board.
        // Inside each rectangle there are 4 attacking placements.
        long long attackingPairs = 4 * (k - 1) * (k - 2);

        cout << totalPairs - attackingPairs << '\n';

    }

    return 0;
    
}
