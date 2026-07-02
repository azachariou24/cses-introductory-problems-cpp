#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
Creating Strings

Given a string, your task is to generate all different strings
that can be created using its characters.

Print all strings in alphabetical order.

Input
The only input line has a string of length n. Each character is between a–z.
Output
First print an integer k: the number of strings.
Then print k lines: the strings in alphabetical order.
*/

string s;
string currentString = "";

int count[26] = {0};

vector<string> permutations;

// Generate all possible strings using backtracking.
void generateStrings() {

    // Base case: a complete string has been created.
    if (currentString.length() == s.length()) {

        permutations.push_back(currentString);

        return;

    }

    // Try every character from 'a' to 'z'.
    for (char c = 'a'; c <= 'z'; c++) {

        // Skip characters that are no longer available.
        if (count[c - 'a'] == 0) {

            continue;

        }

        // Choose the current character.
        currentString += c;
        count[c - 'a']--;

        // Continue building the string.
        generateStrings();

        // Undo the choice (backtracking).
        currentString.pop_back();
        count[c - 'a']++;

    }

}

int main() {

    cin >> s;

    // Count how many times each character appears.
    for (int i = 0; i < s.length(); i++) {

        count[s[i] - 'a']++;

    }

    generateStrings();

    cout << permutations.size() << '\n';

    for (int i = 0; i < permutations.size(); i++) {

        cout << permutations[i] << '\n';

    }

    return 0;
    
}