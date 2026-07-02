# Two Knights

## Problem

For every board size from `1 × 1` to `n × n`, determine the number of ways to place two knights such that they do not attack each other.

---

## Problem Type

- Mathematics
- Combinatorics

---

## Core Idea

Count all possible ways to place two knights on a `k × k` chessboard, then subtract the placements where the knights attack each other. The number of attacking pairs follows a simple geometric pattern based on the number of `2 × 3` (or `3 × 2`) rectangles on the board.

---

## Algorithm Template

```text
Read n

For k from 1 to n

    Compute the total number of pairs

    Compute the number of attacking pairs

    answer = total pairs − attacking pairs

    Print answer
```

---

## Key Idea

Technique:
- Mathematical Observation
- Combinatorial Counting

Mathematical / Algorithmic Insight:
- The total number of ways to place two knights is:

  `C(k², 2) = k² × (k² − 1) / 2`

- Two knights attack each other only inside a `2 × 3` or `3 × 2` rectangle.
- A `k × k` board contains `(k − 1)(k − 2)` such rectangles, and each contributes exactly `4` attacking placements.
- Therefore,

  `attacking pairs = 4 × (k − 1) × (k − 2)`

---

## Common Mistakes

- Attempting to simulate all possible knight placements instead of using combinatorial counting.
- Forgetting to subtract the attacking pairs from the total number of pairs.
- Counting attacking configurations incorrectly by overlooking the `2 × 3` and `3 × 2` rectangles.
- Using 32-bit integers, since the number of valid placements grows rapidly for large board sizes.

---

## Time Complexity

**O(n)**

**Justification:**

A constant number of arithmetic operations is performed for each board size from `1` to `n`.

---

## Memory Complexity

**O(1)**

**Justification:**

Only a constant number of variables is required regardless of the input size.

---

## Reference Implementation

See [`two_knights.cpp`](../src/two_knights.cpp).

---