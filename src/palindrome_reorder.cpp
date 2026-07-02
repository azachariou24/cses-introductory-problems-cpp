#include <iostream>
#include <string>

using namespace std;

/*
Palindrome Reorder

Given a string, your task is to reorder its letters in such a way that it becomes
a palindrome (i.e., it reads the same forwards and backwards).

You may print any valid solution. If there are no solutions, print "NO SOLUTION".

Input
The only input line has a string of length n consisting of characters A–Z.

Output
Print a palindrome consisting of the characters of the original string. 
You may print any valid solution. If there are no solutions, print "NO SOLUTION".
*/
int main() {

    string s;
    cin >> s;

    int count[26] = {0};

    // Count how many times each letter appears in the string.
    for (int i = 0; i < s.length(); i++) {

        count[s[i] - 'A']++;

    }

    int oddCount = 0;
    char oddCharacter = '\0';

    // In a palindrome, at most one character can appear an odd number of times.
    for (int i = 0; i < 26; i++) {

        if (count[i] % 2 != 0) {

            oddCount++;
            oddCharacter = char('A' + i);

        }

    }

    if (oddCount > 1) {

        cout << "NO SOLUTION" << '\n';

        return 0;

    }

    string firstHalf = "";

    // Put half of each character in the first half of the palindrome.
    for (int i = 0; i < 26; i++) {

        for (int j = 0; j < count[i] / 2; j++) {

            firstHalf += char('A' + i);

        }

    }

    cout << firstHalf;

    // If there is an odd character, it must appear once in the middle.
    if (oddCount == 1) {

        cout << oddCharacter;

    }

    // Print the reverse of the first half to complete the palindrome.
    for (int i = firstHalf.length() - 1; i >= 0; i--) {

        cout << firstHalf[i];

    }

    cout << '\n';

    return 0;
    
}