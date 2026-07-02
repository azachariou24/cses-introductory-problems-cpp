\# Weird Algorithm



\## Problem



Given a positive integer `n`, repeatedly apply the following rules until the value becomes `1`:



\- If `n` is even, divide it by `2`.

\- Otherwise, replace it with `3n + 1`.



Print every value produced during the process.



\---



\## Problem Type



\- Simulation

\- Mathematics



\---



\## Core Idea



Simulate the Collatz process exactly as defined. At each iteration, apply the corresponding transformation based on the parity of the current value and continue until the sequence reaches `1`. Since the problem only requires simulation, no optimization is necessary.



\---



\## Algorithm Template



```text

Read n



Repeat



&#x20;   Print n



&#x20;   If n == 1



&#x20;       Stop



&#x20;   If n is even



&#x20;       n = n / 2



&#x20;   Else



&#x20;       n = 3 × n + 1

```



\---



\## Key Idea



Technique:

\- Simulation



Mathematical / Algorithmic Insight:

\- The sequence follows the Collatz process.

\- Each iteration depends only on the current value.

\- The algorithm terminates when the current value becomes `1`.



\---



\## Common Mistakes



\- Using the `int` data type instead of `long long`, since intermediate values in the Collatz sequence may exceed the 32-bit integer range.

\- Printing only the final value instead of every value in the sequence.

\- Applying the wrong transformation for even or odd numbers.

\- Forgetting to stop after printing the value `1`.



\---



\## Time Complexity



\*\*O(k)\*\*



\*\*Justification:\*\*



One constant-time operation is performed for each value generated in the sequence, where `k` is the number of terms until reaching `1`.



\---



\## Memory Complexity



\*\*O(1)\*\*



\*\*Justification:\*\*



Only the current value of `n` is maintained throughout the simulation.



\---



\## Reference Implementation



See \[`weird\_algorithm.cpp`](../weird\_algorithm.cpp).



\---

