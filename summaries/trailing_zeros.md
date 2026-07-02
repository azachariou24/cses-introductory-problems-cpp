\# Trailing Zeros



\## Problem



Given an integer `n`, determine the number of trailing zeros in `n!` (the factorial of `n`).



\---



\## Problem Type



\- Number Theory



\---



\## Core Idea



A trailing zero is produced by a factor of `10`, and each factor of `10` is formed by one factor of `2` and one factor of `5`. Since a factorial always contains more factors of `2` than factors of `5`, the number of trailing zeros is equal to the total number of factors of `5` in `n!`.



\---



\## Algorithm Template



```text

Read n



Initialize answer = 0



While n > 0



&#x20;   n = n / 5



&#x20;   answer += n



Print answer

```



\---



\## Key Idea



Technique:

\- Number Theory



Mathematical / Algorithmic Insight:

\- Every trailing zero corresponds to one factor of `10 = 2 × 5`.

\- The number of factors of `5` determines the answer.

\- Multiples of `25`, `125`, `625`, ... contribute multiple factors of `5` and must be counted repeatedly.



\---



\## Common Mistakes



\- Counting both factors of `2` and `5`, even though factors of `2` are always more abundant in a factorial.

\- Counting only multiples of `5` and forgetting that numbers like `25`, `125`, and `625` contribute more than one factor of `5`.

\- Computing the factorial explicitly, which is unnecessary and quickly becomes infeasible for large values of `n`.



\---



\## Time Complexity



\*\*O(log₅ n)\*\*



\*\*Justification:\*\*



The value of `n` is divided by `5` in every iteration until it becomes zero.



\---



\## Memory Complexity



\*\*O(1)\*\*



\*\*Justification:\*\*



Only a constant number of variables is maintained throughout the computation.



\---



\## Reference Implementation



See \[`trailing\_zeros.cpp`](../trailing\_zeros.cpp).



\---

