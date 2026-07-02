#include <iostream>
#include <vector>
#include <queue>

using namespace std;

/*
Knight Moves Grid

There is a knight on an n x n chessboard. For each square, print the minimum
number of moves the knight needs to do to reach the top-left corner.

Input
The only line has an integer n.

Output
Print the number of moves for each square.
*/
int main() {

    int n;
    cin >> n;

    vector<vector<int>> distance(n, vector<int>(n, -1));

    queue<pair<int, int>> q;

    // All distances can be found using one BFS from the top-left corner.
    distance[0][0] = 0;
    q.push({0, 0});

    int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
    int dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};

    while (!q.empty()) {

        int x = q.front().first;
        int y = q.front().second;

        q.pop();

        // Try all possible knight moves.
        for (int i = 0; i < 8; i++) {

            int nx = x + dx[i];
            int ny = y + dy[i];

            // The new position must be inside the board.
            if (nx < 0 || nx >= n || ny < 0 || ny >= n) {

                continue;

            }

            // If the square was already visited, we already know its minimum distance.
            if (distance[nx][ny] != -1) {

                continue;

            }

            distance[nx][ny] = distance[x][y] + 1;
            q.push({nx, ny});

        }

    }

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

            cout << distance[i][j] << " ";

        }

        cout << '\n';

    }

    return 0;

}