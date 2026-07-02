\# Chessboard and Queens



\## Problem



Given an 8 × 8 chessboard where some squares are reserved, determine the number of ways to place eight queens such that:



\- No queen attacks another queen.

\- No queen is placed on a reserved square.



\---



\## Problem Type



\- Backtracking

\- Constraint Satisfaction



\---



\## Core Idea



Place one queen in each row using backtracking. For every row, try all valid columns that are not reserved and are not attacked by previously placed queens. Continue recursively until all eight queens have been placed, counting every valid configuration.



\---



\## Algorithm Template



```text

Read the chessboard



Search(row)



&#x20;   If all rows have been processed



&#x20;       Count one valid solution



&#x20;       Return



&#x20;   For every column



&#x20;       If the square is reserved



&#x20;           Continue



&#x20;       If the column or either diagonal is occupied



&#x20;           Continue



&#x20;       Place the queen



&#x20;       Search(next row)



&#x20;       Remove the queen

```



\---



\## Key Idea



Technique:

\- Backtracking

\- Constraint Satisfaction



Mathematical / Algorithmic Insight:

\- Exactly one queen is placed in each row.

\- A valid placement must satisfy three constraints:

&#x20; - Unique column

&#x20; - Unique main diagonal

&#x20; - Unique secondary diagonal

\- Invalid partial configurations are discarded immediately, significantly reducing the search space.



\---



\## Common Mistakes



\- Forgetting to check one of the two diagonals.

\- Allowing a queen to be placed on a reserved square.

\- Forgetting to remove a queen when backtracking.

\- Trying every square on the board instead of placing exactly one queen per row.



\---



\## Time Complexity



\*\*O(8!)\*\*



\*\*Justification:\*\*



At most one queen can be placed in each row and each column. In the worst case, the search explores permutations of column placements, while pruning invalid configurations as soon as they violate a constraint.



\---



\## Memory Complexity



\*\*O(8)\*\*



\*\*Justification:\*\*



The recursion depth is at most `8`, and the auxiliary arrays for columns and diagonals have constant size.



\---



\## Reference Implementation



See \[`chessboard\_and\_queens.cpp`](../chessboard\_and\_queens.cpp).



\---

