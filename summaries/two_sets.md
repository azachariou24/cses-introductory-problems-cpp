\# Two Sets



\## Problem



Divide the numbers from `1` to `n` into two sets such that the sums of the two sets are equal.



If no such partition exists, print `NO`. Otherwise, print `YES` followed by the two sets.



\---



\## Problem Type



\- Constructive Algorithm

\- Mathematics



\---



\## Core Idea



A partition into two sets with equal sum exists only if the total sum of the numbers from `1` to `n` is even. When this condition is satisfied, a valid partition can be constructed directly using a deterministic pattern based on the value of `n mod 4`.



\---



\## Algorithm Template



```text

Read n



Compute the total sum



If the total sum is odd



&#x20;   Print "NO"



Else



&#x20;   Print "YES"



&#x20;   If n mod 4 == 0



&#x20;       Construct the partition using the 4-number pattern



&#x20;   Else



&#x20;       Construct the partition using the 4-number pattern

&#x20;       after assigning the first three numbers



&#x20;   Print both sets

```



\---



\## Key Idea



Technique:

\- Constructive Algorithm

\- Mathematical Observation



Mathematical / Algorithmic Insight:

\- The sum of the first `n` positive integers is:



&#x20; `n × (n + 1) / 2`



\- A valid partition exists if and only if this sum is even.

\- The construction follows a repeating pattern of four consecutive numbers, ensuring that both sets always have the same total sum.



\---



\## Common Mistakes



\- Forgetting to check whether the total sum is even before attempting a construction.

\- Trying to find the partition using backtracking instead of using the mathematical construction.

\- Handling only the case `n mod 4 == 0` and forgetting the case `n mod 4 == 3`.

\- Assigning numbers incorrectly, resulting in unequal set sums.



\---



\## Time Complexity



\*\*O(n)\*\*



\*\*Justification:\*\*



Each number from `1` to `n` is assigned to exactly one of the two sets.



\---



\## Memory Complexity



\*\*O(n)\*\*



\*\*Justification:\*\*



All elements of both sets are stored before being printed.



\---



\## Reference Implementation



See \[`two\_sets.cpp`](../two\_sets.cpp).



\---

