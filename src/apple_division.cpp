#include <iostream>
#include <vector>
#include <climits>
#include <cstdlib>

using namespace std;

/*
Apple Division

There are n apples with known weights. Your task is to divide the apples into
two groups so that the difference between the weights of the groups is minimal.

Input
The first input line has an integer n: the number of apples.
The next line has n integers p_1,p_2,\dots,p_n: the weight of each apple.

Output
Print one integer: the minimum difference between the weights of the groups.

Constraints:
1 <= n <= 20
1 <= p_i <= 10^9
*/

int n;
vector<long long> apples;

long long totalWeight = 0;
long long minimumDifference = LLONG_MAX;

// Try all possible ways to divide the apples into two groups.
void solve(int index, long long currentWeight) {

    // Base case: all apples have been assigned to a group.
    if (index == n) {

        long long otherWeight = totalWeight - currentWeight;

        long long difference = abs(currentWeight - otherWeight);

        if (difference < minimumDifference) {

            minimumDifference = difference;

        }

        return;

    }

    // Put the current apple in the first group.
    solve(index + 1, currentWeight + apples[index]);

    // Put the current apple in the second group.
    solve(index + 1, currentWeight);
    
}

int main() {

    cin >> n;

    apples.resize(n);

    for (int i = 0; i < n; i++) {

        cin >> apples[i];

        totalWeight += apples[i];

    }

    solve(0, 0);

    cout << minimumDifference << '\n';

    return 0;

}