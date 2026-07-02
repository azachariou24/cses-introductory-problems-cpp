\# Digit Queries



\## Problem



Consider the infinite string formed by concatenating all positive integers:



`123456789101112131415...`



For each query, determine the digit located at position `k` in this infinite string.



\---



\## Problem Type



\- Mathematics

\- Number Theory



\---



\## Core Idea



Group numbers by their digit length instead of constructing the infinite string. First determine which digit-length group contains the required position, then identify the exact number and finally the exact digit within that number.



\---



\## Algorithm Template



```text

Read the number of queries



For each query



&#x20;   Read k



&#x20;   Find the digit-length group containing k



&#x20;   Determine the exact number



&#x20;   Determine the required digit inside that number



&#x20;   Print the digit

```



\---



\## Key Idea



Technique:

\- Mathematical Observation

\- Digit Grouping



Mathematical / Algorithmic Insight:

\- Numbers with `d` digits contribute:



&#x20; `9 × 10^(d − 1) × d`



&#x20; digits to the infinite string.



\- Repeatedly subtract complete digit groups until the correct group is found.

\- The target number is obtained using integer division, and the target digit is obtained using the remaining offset.



\---



\## Common Mistakes



\- Attempting to construct the infinite string explicitly, which is infeasible.

\- Forgetting that positions are \*\*1-indexed\*\*, leading to off-by-one errors.

\- Computing the target number correctly but selecting the wrong digit because of an incorrect offset.

\- Using 32-bit integers instead of `long long`, since the queried positions can be very large.



\---



\## Time Complexity



\*\*O(log₁₀ k)\*\*



\*\*Justification:\*\*



At most one iteration is performed for each possible digit length, and a 64-bit integer has at most 19 decimal digits.



\---



\## Memory Complexity



\*\*O(1)\*\*



\*\*Justification:\*\*



Only a constant number of variables is required for each query.



\---



\## Reference Implementation



See \[`digit\_queries.cpp`](../digit\_queries.cpp).



\---

