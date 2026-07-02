#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
Grid Coloring I

Each cell contains one of the characters A, B, C or D.

Change every character so that:

- The new character is different from the original one.
- No two adjacent cells have the same character.

Print any valid solution.

Input
The first line has two integers n and m: the number of rows and columns.
The next n lines each have m characters: the description of the grid.

Output
Print n lines each with m characters: the description of the final grid.
You may print any valid solution.
If no solution exists, just print IMPOSSIBLE.
*/
int main() {

    int n, m;
    cin >> n >> m;

    vector<string> grid(n);
    vector<string> answer(n, string(m, ' '));

    for (int i = 0; i < n; i++) {

        cin >> grid[i];

    }

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < m; j++) {

            // Try every possible character.
            for (char c = 'A'; c <= 'D'; c++) {

                // The new character must be different from the old one.
                if (c == grid[i][j]) {

                    continue;

                }

                // It must be different from the upper cell.
                if (i > 0 && answer[i - 1][j] == c) {

                    continue;

                }

                // It must be different from the left cell.
                if (j > 0 && answer[i][j - 1] == c) {

                    continue;

                }

                answer[i][j] = c;
                break;

            }

        }

    }

    for (int i = 0; i < n; i++) {

        cout << answer[i] << '\n';

    }

    return 0;

}