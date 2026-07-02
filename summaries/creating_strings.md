\# Creating Strings



\## Problem



Given a string, generate all distinct permutations of its characters in lexicographical order.



Print the total number of distinct permutations followed by every generated string.



\---



\## Problem Type



\- Backtracking

\- Combinatorics



\---



\## Core Idea



Generate all distinct permutations of the given string using backtracking. At each step, choose one of the remaining available characters, extend the current string, and continue recursively. Character frequencies are used to avoid generating duplicate permutations.



\---



\## Algorithm Template



```text

Read the string



Count the frequency of every character



Generate(currentString)



&#x20;   If currentString is complete



&#x20;       Store it



&#x20;       Return



&#x20;   For every character in alphabetical order



&#x20;       If the character is available



&#x20;           Choose the character



&#x20;           Generate(currentString)



&#x20;           Undo the choice



Print the number of generated strings



Print every generated string

```



\---



\## Key Idea



Technique:

\- Backtracking

\- Frequency Counting



Mathematical / Algorithmic Insight:

\- Each recursive call fixes one position of the permutation.

\- A character can only be chosen while its remaining frequency is positive.

\- Tracking frequencies instead of indices guarantees that every distinct permutation is generated exactly once.



\---



\## Common Mistakes



\- Generating all `n!` permutations first and then removing duplicates.

\- Tracking character indices instead of frequencies, which may produce duplicate permutations.

\- Forgetting to restore the frequency after returning from a recursive call (backtracking step).

\- Generating permutations in arbitrary order instead of lexicographical order.



\---



\## Time Complexity



\*\*O(n · k)\*\*



\*\*Justification:\*\*



There are `k` distinct permutations, each of length `n`. Constructing and storing every permutation requires linear time in its length.



\---



\## Memory Complexity



\*\*O(n + n · k)\*\*



\*\*Justification:\*\*



The recursion stack and the current string require `O(n)` memory. Storing all `k` generated permutations of length `n` requires `O(n · k)` memory.



\---



\## Reference Implementation



See \[`creating\_strings.cpp`](../creating\_strings.cpp).



\---

