#include <iostream>
#include <vector>

using namespace std;

/*
Tower of Hanoi

The Tower of Hanoi game consists of three stacks (left, middle and right) and
n round disks of different sizes. Initially, the left stack has all the disks,
in increasing order of size from top to bottom.

The goal is to move all the disks to the right stack using the middle stack.

On each move you can move the uppermost disk from a stack to another stack.
It is not allowed to place a larger disk on a smaller disk.

Your task is to find a solution that minimizes the number of moves.

Input
The only input line has an integer n: the number of disks.

Output
First print an integer k: the minimum number of moves.
After this, print k lines that describe the moves. 
Each line has two integers a and b: you move a disk from stack a to stack b.
*/

vector<pair<int, int>> moves;

// Move n disks from 'from' to 'to' using 'aux' as the auxiliary stack.
void towerOfHanoi(int n, int from, int aux, int to) {

    // Base case: only one disk remains.
    if (n == 1) {

        moves.push_back({from, to});

        return;

    }

    // Move the top n - 1 disks to the auxiliary stack.
    towerOfHanoi(n - 1, from, to, aux);

    // Move the largest disk to the destination stack.
    moves.push_back({from, to});

    // Move the n - 1 disks from the auxiliary stack to the destination stack.
    towerOfHanoi(n - 1, aux, from, to);

}

int main() {

    int n;
    cin >> n;

    towerOfHanoi(n, 1, 2, 3);

    cout << moves.size() << '\n';

    for (int i = 0; i < moves.size(); i++) {

        cout << moves[i].first << " " << moves[i].second << '\n';

    }

    return 0;

}