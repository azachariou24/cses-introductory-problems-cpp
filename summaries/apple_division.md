\# Apple Division



\## Problem



Given the weights of `n` apples, divide them into two groups such that the absolute difference between the total weights of the two groups is minimized.



Print the minimum possible difference.



\---



\## Problem Type



\- Backtracking

\- Exhaustive Search



\---



\## Core Idea



Explore every possible partition of the apples into two groups using backtracking. For each complete partition, compute the weight difference between the two groups and keep the minimum value found.



\---



\## Algorithm Template



```text

Read the apple weights



Compute the total weight



Search(index, currentWeight)



&#x20;   If all apples have been assigned



&#x20;       Compute the weight of the second group



&#x20;       Update the minimum difference



&#x20;       Return



&#x20;   Put the current apple in the first group



&#x20;   Search(next index)



&#x20;   Put the current apple in the second group



&#x20;   Search(next index)

```



\---



\## Key Idea



Technique:

\- Backtracking

\- Exhaustive Search



Mathematical / Algorithmic Insight:

\- Each apple has exactly two possible choices:

&#x20; - First group

&#x20; - Second group

\- This forms a binary decision tree with `2ⁿ` possible partitions.

\- Since `n ≤ 20`, exploring all partitions is computationally feasible.



\---



\## Common Mistakes



\- Trying to greedily balance the two groups instead of exploring all possible partitions.

\- Recomputing the total weight of both groups at every recursive call instead of maintaining the current weight incrementally.

\- Forgetting that every apple must belong to exactly one of the two groups.

\- Assuming the problem requires constructing the groups instead of only computing the minimum difference.



\---



\## Time Complexity



\*\*O(2ⁿ)\*\*



\*\*Justification:\*\*



Each apple creates two recursive branches, resulting in `2ⁿ` possible partitions. The work performed at each leaf is constant.



\---



\## Memory Complexity



\*\*O(n)\*\*



\*\*Justification:\*\*



The maximum recursion depth is `n`, so the call stack requires linear memory.



\---



\## Reference Implementation



See \[`apple\_division.cpp`](../apple\_division.cpp).



\---

