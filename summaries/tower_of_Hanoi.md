\# Tower of Hanoi



\## Problem



Given `n` disks initially stacked on the first tower, move all disks to the third tower.



The following rules must always be satisfied:



\- Only one disk may be moved at a time.

\- A larger disk may never be placed on top of a smaller disk.



Print the minimum number of moves and the complete sequence of moves.



\---



\## Problem Type



\- Recursion

\- Divide and Conquer



\---



\## Core Idea



To move the largest disk, all smaller disks must first be moved to the auxiliary stack. After moving the largest disk to its destination, the smaller disks are moved from the auxiliary stack onto it. This naturally leads to a recursive divide-and-conquer solution.



\---



\## Algorithm Template



```text

Move(n, source, auxiliary, destination)



If n == 1



&#x20;   Move the disk from source to destination



&#x20;   Return



Move(n − 1, source, destination, auxiliary)



Move the largest disk from source to destination



Move(n − 1, auxiliary, source, destination)

```



\---



\## Key Idea



Technique:

\- Recursion

\- Divide and Conquer



Mathematical / Algorithmic Insight:

\- Before moving the largest disk, the top `n − 1` disks must be moved to the auxiliary stack.

\- After moving the largest disk, the same problem of size `n − 1` is solved again.

\- The minimum number of moves satisfies the recurrence:



&#x20; `T(n) = 2T(n − 1) + 1`



\- Therefore,



&#x20; `T(n) = 2ⁿ − 1`



\---



\## Common Mistakes



\- Moving the largest disk before relocating the smaller disks.

\- Forgetting that the recursive calls use different source, auxiliary, and destination towers.

\- Printing only the minimum number of moves without outputting the actual sequence of moves.

\- Using an iterative approach that does not preserve the recursive structure of the problem.



\---



\## Time Complexity



\*\*O(2ⁿ)\*\*



\*\*Justification:\*\*



The recurrence `T(n) = 2T(n − 1) + 1` generates exactly `2ⁿ − 1` moves.



\---



\## Memory Complexity



\*\*O(n)\*\*



\*\*Justification:\*\*



The maximum recursion depth is `n`, so the call stack requires linear memory.



\---



\## Reference Implementation



See \[`tower\_of\_hanoi.cpp`](../tower\_of\_hanoi.cpp).



\---

