#include <iostream>
#include <vector>

using namespace std;

/*
Permutations

A permutation of integers 1, 2, ..., n is called beautiful if there are no
adjacent elements whose difference is 1.

Input
The only input line contains an integer n.

Output
Print a beautiful permutation of integers 1, 2, ..., n. If there are several
solutions, you may print any of them. If there are no solutions, print
"NO SOLUTION".
*/
int main() {

    int n;
    cin >> n;

    // For n = 1, the permutation is trivially beautiful.
    if (n == 1) {
        cout << 1 << '\n';
        return 0;
    }

    // For n = 2 and n = 3, no beautiful permutation exists.
    if (n == 2 || n == 3) {
        cout << "NO SOLUTION" << '\n';
        return 0;
    }

    vector<int> answer;

    // Put all even numbers first.
    for (int i = 2; i <= n; i += 2) {
        answer.push_back(i);
    }

    // Then put all odd numbers.
    for (int i = 1; i <= n; i += 2) {
        answer.push_back(i);
    }

    for (int i = 0; i < (int)answer.size(); ++i) {

        if (i > 0) {
            cout << ' ';
        }

        cout << answer[i];

    }

    cout << '\n';

    return 0;
    
}
