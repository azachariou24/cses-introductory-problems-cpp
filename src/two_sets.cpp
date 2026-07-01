#include <iostream>
#include <vector>

using namespace std;

/*
Two Sets

Divide the numbers 1, 2, ..., n into two sets of equal sum.
Print YES and one valid partition if it is possible, otherwise print NO.
*/
int main() {

    int n;
    cin >> n;

    long long totalSum = 1LL * n * (n + 1) / 2;

    // If the total sum is odd, the numbers cannot be split into two equal sums.
    if (totalSum % 2 != 0) {

        cout << "NO\n";

        return 0;

    }

    cout << "YES\n";

    vector<int> firstSet;
    vector<int> secondSet;

    // We build one valid set using the standard pattern for n % 4.
    if (n % 4 == 0) {

        // Example pattern: 1, 4, 5, 8, 9, ...
        for (int i = 1; i <= n; i += 4) {
            firstSet.push_back(i);
            firstSet.push_back(i + 3);
        }
        for (int i = 2; i <= n; i += 4) {
            secondSet.push_back(i);
            secondSet.push_back(i + 1);
        }

    } else {

        // For n % 4 == 3, we start by placing 1 and 2 in the first set,
        // and 3 in the second set, then continue with the same 4-number blocks.
        firstSet.push_back(1);
        firstSet.push_back(2);
        secondSet.push_back(3);

        for (int i = 4; i <= n; i += 4) {
            firstSet.push_back(i);
            firstSet.push_back(i + 3);
        }
        for (int i = 5; i <= n; i += 4) {
            secondSet.push_back(i);
            secondSet.push_back(i + 1);
        }

    }

    cout << firstSet.size() << '\n';
    for (int i = 0; i < (int)firstSet.size(); ++i) {

        if (i > 0) {
            cout << ' ';
        }
        cout << firstSet[i];

    }
    cout << '\n';

    cout << secondSet.size() << '\n';
    for (int i = 0; i < (int)secondSet.size(); ++i) {

        if (i > 0) {
            cout << ' ';
        }
        cout << secondSet[i];
        
    }
    cout << '\n';

    return 0;

}
