#include <iostream>

using namespace std;

/*
Mex Grid Construction

Your task is to construct an n x n grid where each square has the smallest
nonnegative integer that does not appear to the left on the same row or above
on the same column.

Input
The only line has an integer n.

Output
Print the grid according to the example.
*/
int main() {

    int n;
    cin >> n;

    // The value of each cell is equal to the bitwise XOR of its row and column.
    // This satisfies the mex rule for every position in the grid.
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

            cout << (i ^ j);

            if (j + 1 < n) {

                cout << " ";

            }

        }

        cout << '\n';
    }

    return 0;

}