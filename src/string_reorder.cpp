#include <iostream>
#include <string>

using namespace std;

/*
String Reorder

Your task is to reorder the characters of a string so that no two adjacent
characters are the same.

What is the lexicographically minimal such string?

Input
The only line has a string of length n consisting of characters A–Z.
Output
Print the lexicographically minimal reordered string where no two adjacent characters are the same. 
If it is not possible to create such a string, print -1.
*/

bool canFinish(int count[], int remainingLength) {

    int maxFrequency = 0;

    for (int i = 0; i < 26; i++) {

        maxFrequency = max(maxFrequency, count[i]);

    }

    return (maxFrequency <= (remainingLength + 1) / 2);

}

int main() {

    string s;
    cin >> s;

    int count[26] = {0};

    for (int i = 0; i < s.length(); i++) {

        count[s[i] - 'A']++;

    }

    int n = s.length();

    if (!canFinish(count, n)) {

        cout << -1 << '\n';
        return 0;

    }

    string answer = "";
    char previousCharacter = '#';

    for (int position = 0; position < n; position++) {

        for (char c = 'A'; c <= 'Z'; c++) {

            int index = c - 'A';

            if (count[index] == 0) {

                continue;

            }

            if (c == previousCharacter) {

                continue;

            }

            // Try placing this character.
            count[index]--;

            int remainingLength = n - position - 1;

            // Keep this character only if the rest of the string can still be completed.
            if (canFinish(count, remainingLength)) {

                answer += c;
                previousCharacter = c;

                break;

            }

            // Undo the choice and try the next character.
            count[index]++;

        }

    }

    cout << answer << '\n';

    return 0;

}