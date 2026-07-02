\# Missing Number



\## Problem



Given the integers from `1` to `n`, where exactly one number is missing, determine the missing number.



\---



\## Problem Type



\- Mathematics

\- Arithmetic



\---



\## Core Idea



The numbers from `1` to `n` form a known arithmetic sequence whose total sum can be computed directly. By subtracting the sum of the given numbers from the expected total, the missing value is obtained without searching or sorting.



\---



\## Algorithm Template



```text

Read n



Compute the expected sum of numbers from 1 to n



Initialize the actual sum to 0



For each of the n - 1 numbers



&#x20;   Add the number to the actual sum



Print



&#x20;   expected sum − actual sum

```



\---



\## Key Idea



Technique:

\- Mathematical Observation

\- Arithmetic Formula



Mathematical / Algorithmic Insight:

\- The sum of the first `n` positive integers is:



&#x20; `n × (n + 1) / 2`



\- Since exactly one number is missing, the difference between the expected sum and the actual sum is the missing value.



\---



\## Common Mistakes



\- Using a 32-bit integer, which may overflow when computing the expected sum for large values of `n`.

\- Sorting the numbers before searching for the missing value, leading to an unnecessary `O(n log n)` solution.

\- Forgetting that exactly one number is missing from the sequence.

\- Computing the expected sum incorrectly by omitting either `n` or `n + 1` in the arithmetic formula.



\---



\## Time Complexity



\*\*O(n)\*\*



\*\*Justification:\*\*



The input is traversed exactly once to compute the sum of the given numbers.



\---



\## Memory Complexity



\*\*O(1)\*\*



\*\*Justification:\*\*



Only a constant number of variables is used regardless of the input size.



\---



\## Reference Implementation



See \[`missing\_number.cpp`](../missing\_number.cpp).



\---

