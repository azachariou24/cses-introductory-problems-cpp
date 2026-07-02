\# Raab Game I



\## Problem



Given the desired final scores of two players after playing `n` rounds, determine whether such a game is possible.



If it is possible, construct two permutations representing the order of cards for both players that produce the required scores.



\---



\## Problem Type



\- Constructive Algorithm



\---



\## Core Idea



Determine whether the required scores are feasible, then construct a valid game directly. First assign the rounds where one player wins, and finally assign the remaining rounds as draws. Since any valid construction is accepted, no search is required.



\---



\## Algorithm Template



```text

Read the number of test cases



For each test case



&#x20;   Read n, a and b



&#x20;   If the required scores are impossible



&#x20;       Print "NO"



&#x20;       Continue



&#x20;   Print "YES"



&#x20;   Construct the winning rounds



&#x20;   Construct the drawing rounds



&#x20;   Print both players' card orders

```



\---



\## Key Idea



Technique:

\- Constructive Algorithm



Mathematical / Algorithmic Insight:

\- A valid game exists only if the requested scores satisfy the feasibility conditions.

\- Winning rounds are constructed first by cyclically shifting the players' cards.

\- The remaining cards are paired identically to produce draws.



\---



\## Common Mistakes



\- Constructing the card orders before verifying that the requested scores are feasible.

\- Forgetting that every card must appear exactly once in each player's permutation.

\- Producing duplicate card values or omitting cards during construction.

\- Attempting exhaustive search instead of constructing a valid solution directly.



\---



\## Time Complexity



\*\*O(n)\*\*



\*\*Justification:\*\*



Each card is assigned exactly once while constructing the two permutations.



\---



\## Memory Complexity



\*\*O(n)\*\*



\*\*Justification:\*\*



Two arrays of length `n` are stored to represent the order of cards for both players.



\---



\## Reference Implementation



See \[`raab\_game\_I.cpp`](../raab\_game\_I.cpp).



\---

