#include <iostream>
#include <string>

using namespace std;

/*
Grid Paths Description

There are 88418 paths in a 7 x 7 grid from the upper-left square to the
lower-left square.

Each path corresponds to a 48-character description consisting of characters
D, U, L and R.

The description may also contain characters ?, which means any direction.

Your task is to calculate the number of paths that match the description.

Input
The only input line has a 48-character string of characters ?, D, U, L and R.

Output
Print one integer: the total number of paths.
*/

string pathDescription;

bool visited[9][9];

int answer = 0;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, -1, 1};

char directionChar[4] = {'D', 'U', 'L', 'R'};

void search(int x, int y, int step) {

    // If we reach the target before using all 48 moves, the path is invalid.
    if ((x == 7) && (y == 1)) {

        if (step == 48) {

            answer++;

        }

        return;

    }

    // If all moves are used but we are not at the target, the path is invalid.
    if (step == 48) {

        return;

    }

    // Pruning:
    // If the path splits the remaining free area into two disconnected parts,
    // then this branch can never form a valid complete path.
    if ((visited[x][y - 1] && visited[x][y + 1]) && (!visited[x - 1][y] && !visited[x + 1][y])) {

        return;

    }

    if ((!visited[x][y - 1] && !visited[x][y + 1]) && (visited[x - 1][y] && visited[x + 1][y])) {

        return;

    }

    visited[x][y] = true;

    char currentMove = pathDescription[step];

    for (int i = 0; i < 4; i++) {

        if (currentMove != '?' && currentMove != directionChar[i]) {

            continue;

        }

        int nextX = x + dx[i];
        int nextY = y + dy[i];

        if (visited[nextX][nextY]) {

            continue;

        }

        search(nextX, nextY, step + 1);

    }

    visited[x][y] = false;

}

int main() {

    cin >> pathDescription;

    // Mark the border as visited to avoid checking grid boundaries manually.
    for (int i = 0; i < 9; i++) {

        visited[0][i] = true;
        visited[8][i] = true;
        visited[i][0] = true;
        visited[i][8] = true;

    }

    search(1, 1, 0);

    cout << answer << '\n';

    return 0;

}