# Permutations

## Problem

Construct a permutation of the integers from `1` to `n` such that the absolute difference between every pair of adjacent elements is not equal to `1`.

If no such permutation exists, print `NO SOLUTION`.

---

## Problem Type

- Constructive Algorithm

---

## Core Idea

Construct a permutation instead of searching for one. Place all even numbers first, followed by all odd numbers. This arrangement guarantees that the difference between any two adjacent elements is never equal to 1. The only exceptions are `n = 2` and `n = 3`, where no valid permutation exists.

---

## Algorithm Template

```text
Read n

If n == 1

    Print 1

Else if n == 2 or n == 3

    Print "NO SOLUTION"

Else

    Print all even numbers in increasing order

    Print all odd numbers in increasing order
```

---

## Key Idea

Technique:
- Constructive Algorithm

Mathematical / Algorithmic Insight:
- Consecutive even numbers differ by 2, and consecutive odd numbers also differ by 2.
- The transition between the last even and the first odd is also valid for all `n ≥ 4`.
- Therefore, no adjacent pair differs by exactly 1.

---

## Common Mistakes

- Attempting to generate all permutations instead of constructing one directly.
- Forgetting the special cases `n = 2` and `n = 3`, where no valid permutation exists.
- Printing odd numbers before even numbers without verifying the adjacency condition.
- Assuming that every value of `n` admits a valid permutation.

---

## Time Complexity

**O(n)**

**Justification:**

Each number from `1` to `n` is generated and printed exactly once.

---

## Memory Complexity

**O(1)**

**Justification:**

The permutation can be generated directly without requiring additional memory proportional to the input size.

---

## Reference Implementation

See [`permutations.cpp`](../src/permutations.cpp).

---