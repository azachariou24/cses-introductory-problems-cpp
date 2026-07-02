\# Increasing Array



\## Problem



Given an array of integers, determine the minimum number of increment operations required to make the array non-decreasing.



In one operation, you may increase any element by one.



\---



\## Problem Type



\- Greedy

\- Array Processing



\---



\## Core Idea



Traverse the array from left to right while maintaining the maximum value encountered so far. If the current element is smaller than this value, it must be increased to match it. The required increase is added to the total number of moves.



\---



\## Algorithm Template



```text

Read n and the array



Initialize



&#x20;   currentMaximum = first element

&#x20;   moves = 0



For every remaining element



&#x20;   If current element < currentMaximum



&#x20;       moves += currentMaximum - current element



&#x20;   Else



&#x20;       currentMaximum = current element



Print moves

```



\---



\## Key Idea



Technique:

\- Greedy

\- Linear Traversal



Mathematical / Algorithmic Insight:

\- Each element must be at least as large as its predecessor.

\- The optimal strategy is to increase an element only when necessary and by the minimum amount required.

\- Once an element is adjusted, it becomes the new lower bound for the remaining elements.



\---



\## Common Mistakes



\- Increasing previous elements instead of the current one.

\- Updating the current maximum after increasing an element to an incorrect value.

\- Simulating one increment at a time instead of adding the required difference directly.

\- Using a 32-bit integer for the answer, since the total number of moves may exceed the integer range.



\---



\## Time Complexity



\*\*O(n)\*\*



\*\*Justification:\*\*



The array is traversed exactly once, and each element is processed in constant time.



\---



\## Memory Complexity



\*\*O(1)\*\*



\*\*Justification:\*\*



Only a constant number of variables is maintained independently of the input size.



\---



\## Reference Implementation



See \[`increasing\_array.cpp`](../increasing\_array.cpp).



\---

