#include <iostream>

using namespace std;

/*
Number Spiral

A number spiral is an infinite grid whose upper-left square has number 1.
For each test case, find the number in row y and column x.

Input
The first input line contains an integer t: the number of tests.
After this, there are t lines, each containing integers y and x.

Output
For each test, print the number in row y and column x.
*/
long long solve(long long y, long long x) {

    // The spiral is determined by the larger coordinate.
    long long layer = max(y, x);
    long long layerSquare = layer * layer;

    if (layer % 2 == 0) {

        // Even layers grow downward along the left side.
        if (y == layer) {
            return layerSquare - x + 1;
        }

        return (layer - 1) * (layer - 1) + y;
        
    } else {

        // Odd layers grow rightward along the top side.
        if (x == layer) {
            return layerSquare - y + 1;
        }

        return (layer - 1) * (layer - 1) + x;
        
    }

}

int main() {

    int t;
    cin >> t;

    while (t--) {

        long long y, x;
        cin >> y >> x;

        cout << solve(y, x) << '\n';

    }

    return 0;

}
