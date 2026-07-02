\# Grid Paths Description



\## Problem



Given a string of length `48` describing a path on a `7 × 7` grid, count the number of valid paths from the upper-left corner to the lower-left corner.



Each character is one of:



\- `U` (up)

\- `D` (down)

\- `L` (left)

\- `R` (right)

\- `?` (any direction)



A valid path must visit every cell exactly once.



\---



\## Problem Type



\- Backtracking

\- Grid Search



\---



\## Core Idea



Use backtracking to count all valid paths from the upper-left square to the lower-left square in a `7 × 7` grid. At each step, follow the given direction if it is fixed, or try all four directions if the character is `?`. Pruning is essential: branches that reach the target too early or split the remaining grid into disconnected regions cannot lead to valid complete paths.



\---



\## Algorithm Template



```text

Read the path description



Search(row, column, step)



&#x20;   If the target cell is reached



&#x20;       If all 48 moves have been used



&#x20;           Count one valid path



&#x20;       Return



&#x20;   If all 48 moves have been used



&#x20;       Return



&#x20;   If the current path splits the remaining grid



&#x20;       Return



&#x20;   Mark the current cell as visited



&#x20;   For every possible direction



&#x20;       If the direction matches the description



&#x20;           If the next cell is unvisited



&#x20;               Search(next row, next column, step + 1)



&#x20;   Unmark the current cell

```



\---



\## Key Idea



Technique:

\- Backtracking

\- Pruning

\- Grid Search



Mathematical / Algorithmic Insight:

\- A valid path must visit exactly 49 cells using 48 moves.

\- The endpoint must be reached only after all moves have been used.

\- If the current path creates a forced separation of the remaining unvisited cells, the branch can be discarded immediately.

\- The border can be marked as visited to simplify boundary checks.



\---



\## Common Mistakes



\- Counting paths that reach the destination before all 48 moves have been used.

\- Forgetting to unmark a cell when backtracking.

\- Omitting pruning rules, resulting in an exponential search that is too slow.

\- Not detecting situations where the current path disconnects the remaining unvisited cells.

\- Performing explicit boundary checks instead of marking the border as permanently visited.



\---



\## Time Complexity



\*\*O(4⁴⁸)\*\* in the naive case, substantially reduced by pruning.



\*\*Justification:\*\*



Without pruning, each `?` may branch into four possible moves. The pruning rules eliminate invalid branches early, making the search feasible for the fixed `7 × 7` board.



\---



\## Memory Complexity



\*\*O(1)\*\*



\*\*Justification:\*\*



The grid size is fixed at `7 × 7`, and the recursion depth is at most `48`. Therefore, the memory usage is constant with respect to the input size.



\---



\## Reference Implementation



See \[`grid\_paths\_description.cpp`](../grid\_paths\_description.cpp).



\---

