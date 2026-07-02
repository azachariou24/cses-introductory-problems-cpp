#include <iostream>
#include <string>

using namespace std;

/*
Digit Queries

Consider an infinite string that consists of all positive integers in increasing order:
12345678910111213141516171819202122232425...

Your task is to process q queries of the form:
what is the digit at position k in the string?

Input
The first input line has an integer q: the number of queries.
After this, there are q lines that describe the queries. 
Each line has an integer k: a 1-indexed position in the string.

Output
For each query, print the corresponding digit.
*/
int main() {

    int q;
    cin >> q;

    while (q--) {

        long long k;
        cin >> k;

        long long digits = 1;
        long long count = 9;
        long long start = 1;

        // Find the group of numbers where position k belongs.
        while (k > digits * count) {

            k = k - digits * count;
            digits++;
            count = count * 10;
            start = start * 10;

        }

        // Find the exact number that contains the k-th digit.
        long long number = start + (k - 1) / digits;

        // Find the exact digit inside that number.
        int position = (k - 1) % digits;

        string numberString = to_string(number);

        cout << numberString[position] << '\n';
    }

    return 0;

}