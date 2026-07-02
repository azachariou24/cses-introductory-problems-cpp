#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
Gray Code

A Gray code is a list of all 2^n bit strings of length n, where any two
successive strings differ in exactly one bit (i.e., their Hamming distance is one).

Your task is to create a Gray code for a given length n.

You can print any valid solution.

Input
The only input line has an integer n.

Output
Print 2^n lines that describe the Gray code. You can print any valid solution.
*/
int main() {

    int n;
    cin >> n;

    vector<string> grayCode;

    grayCode.push_back("");

    // Build the Gray code step by step.
    // For each new bit, we first add 0 to the existing strings
    // and then add 1 to the same strings in reverse order.
    for (int i = 1; i <= n; i++) {

        vector<string> nextGrayCode;

        // First half: add 0 in front of each previous string.
        for (int j = 0; j < grayCode.size(); j++) {

            nextGrayCode.push_back("0" + grayCode[j]);

        }

        // Second half: add 1 in front of each previous string in reverse order.
        // The reverse order guarantees that the middle two strings differ in only one bit.
        for (int j = grayCode.size() - 1; j >= 0; j--) {

            nextGrayCode.push_back("1" + grayCode[j]);

        }

        grayCode = nextGrayCode;

    }

    for (int i = 0; i < grayCode.size(); i++) {

        cout << grayCode[i] << '\n';

    }

    return 0;

}