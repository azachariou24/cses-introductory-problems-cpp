#include <iostream>
#include <string>

using namespace std;

/*
Repetitions

You are given a DNA sequence: a string consisting of characters A, C, G, and T.
Your task is to find the longest repetition in the sequence. This is a maximum-
length substring containing only one type of character.

Input
The only input line contains a string of n characters.

Output
Print one integer: the length of the longest repetition.
*/
int main() {

    string dna;
    cin >> dna;

    // currentLength stores the length of the repetition we are currently in.
    // bestLength stores the longest repetition seen so far.
    int currentLength = 1;
    int bestLength = 1;

    for (int i = 1; i < (int)dna.size(); ++i) {

        // If the current character matches the previous one, the repetition continues.
        if (dna[i] == dna[i - 1]) {
            ++currentLength;
        } else {
            // Otherwise, a new repetition starts.
            currentLength = 1;
        }

        // Update the best answer whenever we find a longer repetition.
        if (currentLength > bestLength) {
            bestLength = currentLength;
        }
    }

    cout << bestLength << '\n';

    return 0;
    
}
