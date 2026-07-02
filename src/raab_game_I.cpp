#include <iostream>
#include <vector>

using namespace std;

/*
Card Game

Consider a two player game where each player has n cards numbered 1, 2, ..., n.
On each turn both players place one of their cards on the table.

The player who placed the higher card gets one point. If the cards are equal,
neither player gets a point.

You are given n and the final scores a and b.
Your task is to give an example of how the game could have played out.

Input
The first line contains one integer t: the number of tests.
Then there are t lines, each with three integers n, a and b.

Output
For each test case print YES if there is a game with the given outcome and NO otherwise.
If the answer is YES, print an example of one possible game. 
Print two lines representing the order in which the players place their cards. 
You can give any valid example.

Constraints:
1 <= t <= 1000
1 <= n <= 100
0 <= a, b <= n
*/

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, a, b;
        cin >> n >> a >> b;

        // If there are more wins than rounds, it is impossible.
        if (a + b > n) {

            cout << "NO" << '\n';

            continue;

        }

        // If only one player wins at least once and the other never wins,
        // it is impossible because the cards are the same for both players.
        if ((a == 0 && b > 0) || (a > 0 && b == 0)) {

            cout << "NO" << '\n';

            continue;

        }

        vector<int> player1;
        vector<int> player2;

        int winningRounds = a + b;

        // These rounds create exactly b wins for player 2
        // followed by exactly a wins for player 1.
        for (int i = 1; i <= winningRounds; i++) {

            player1.push_back(i);

        }

        for (int i = a + 1; i <= winningRounds; i++) {

            player2.push_back(i);

        }

        for (int i = 1; i <= a; i++) {

            player2.push_back(i);

        }

        // The remaining cards are equal, so they create draws.
        for (int i = winningRounds + 1; i <= n; i++) {

            player1.push_back(i);
            player2.push_back(i);

        }

        cout << "YES" << '\n';

        for (int i = 0; i < n; i++) {

            cout << player1[i] << " ";

        }

        cout << '\n';

        for (int i = 0; i < n; i++) {

            cout << player2[i] << " ";

        }

        cout << '\n';

    }

    return 0;

}