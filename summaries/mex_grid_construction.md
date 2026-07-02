\# Mex Grid Construction



\## Problem



Construct an `n × n` grid such that every cell contains the smallest nonnegative integer (mex) that does not appear to its left in the same row or above it in the same column.



Print the resulting grid.



\---



\## Problem Type



\- Constructive Algorithm

\- Bit Manipulation



\---



\## Core Idea



Construct the grid directly using a mathematical pattern. The value of each cell is the bitwise XOR of its row and column indices, which guarantees that every cell contains the smallest nonnegative integer that does not appear to its left in the same row or above it in the same column.



\---



\## Algorithm Template



```text

Read n



For every row



&#x20;   For every column



&#x20;       grid\[row]\[column] = row XOR column



Print the grid

```



\---



\## Key Idea



Technique:

\- Constructive Algorithm

\- Pattern Recognition

\- Bit Manipulation



Mathematical / Algorithmic Insight:

\- Every cell is computed as:



&#x20; `grid\[i]\[j] = i XOR j`



\- The XOR pattern satisfies the mex condition for every row and column.

\- No simulation or greedy construction is required once the pattern is identified.



\---



\## Common Mistakes



\- Trying to compute the mex value independently for every cell, leading to an unnecessarily slow solution.

\- Assuming that the grid must be generated incrementally using simulation.

\- Overlooking the XOR pattern that satisfies all row and column constraints.

\- Using additional data structures to maintain previously used values, even though the construction is completely deterministic.



\---



\## Time Complexity



\*\*O(n²)\*\*



\*\*Justification:\*\*



Every cell of the `n × n` grid is computed exactly once using a constant-time XOR operation.



\---



\## Memory Complexity



\*\*O(1)\*\*



\*\*Justification:\*\*



The grid is generated and printed directly without storing additional data structures proportional to the input size.



\---



\## Reference Implementation



See \[`mex\_grid\_construction.cpp`](../mex\_grid\_construction.cpp).



\---

