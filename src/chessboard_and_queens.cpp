#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
Chessboard and Queens

Your task is to place eight queens on a chessboard so that no two queens are
attacking each other.

Each square is either free or reserved, and you can only place queens on the
free squares.

The reserved squares do not prevent queens from attacking each other.

How many possible ways are there to place the queens?

Input
The input has eight lines, and each of them has eight characters. Each square is either free (.) or reserved (*).

Output
Print one integer: the number of ways you can place the queens.

Constraints:
The board has 8 rows and 8 columns.
*/

vector<string> board(8);

bool columnUsed[8] = {false};
bool diagonal1Used[15] = {false};
bool diagonal2Used[15] = {false};

int ways = 0;

// Try to place one queen in each row.
void solve(int row) {

    // Base case: queens have been placed in all 8 rows.
    if (row == 8) {

        ways++;

        return;

    }

    // Try every column in the current row.
    for (int column = 0; column < 8; column++) {

        // A queen cannot be placed on a reserved square.
        if (board[row][column] == '*') {

            continue;

        }

        // Check if another queen already attacks this column.
        if (columnUsed[column]) {

            continue;

        }

        // Check if another queen already attacks this diagonal.
        if (diagonal1Used[row + column]) {

            continue;

        }

        // Check if another queen already attacks the other diagonal.
        if (diagonal2Used[row - column + 7]) {

            continue;

        }

        // Place the queen.
        columnUsed[column] = true;
        diagonal1Used[row + column] = true;
        diagonal2Used[row - column + 7] = true;

        solve(row + 1);

        // Remove the queen and try another position.
        columnUsed[column] = false;
        diagonal1Used[row + column] = false;
        diagonal2Used[row - column + 7] = false;

    }

}

int main() {

    for (int i = 0; i < 8; i++) {

        cin >> board[i];

    }

    solve(0);

    cout << ways << '\n';

    return 0;
    
}