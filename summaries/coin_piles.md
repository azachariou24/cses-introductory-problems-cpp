# Coin Piles

## Problem

Two coin piles contain `a` and `b` coins, respectively.

In one move, you may remove:

- Two coins from one pile, and
- One coin from the other pile.

Determine whether it is possible to empty both piles.

---

## Problem Type

- Mathematical Observation
- Number Theory

---

## Core Idea

Each move removes exactly `3` coins in total. Therefore, the total number of coins must be divisible by `3`. In addition, neither pile can contain more than twice as many coins as the other; otherwise, the larger pile cannot be reduced before the smaller one becomes empty.

---

## Algorithm Template

```text
Read the number of test cases

For each test case

    Read a and b

    If (a + b) is not divisible by 3

        Print "NO"

    Else if max(a, b) > 2 × min(a, b)

        Print "NO"

    Else

        Print "YES"
```

---

## Key Idea

Technique:
- Mathematical Observation
- Necessary and Sufficient Conditions

Mathematical / Algorithmic Insight:
- Every move removes exactly `3` coins, so `(a + b)` must be divisible by `3`.
- The larger pile can never contain more than twice the number of coins in the smaller pile.
- Both conditions are necessary and sufficient for a valid sequence of moves to exist.

---

## Common Mistakes

- Checking only whether `(a + b)` is divisible by `3` while ignoring the relationship between the two piles.
- Assuming that every divisible total has a solution.
- Trying to simulate the moves instead of using the mathematical conditions directly.

---

## Time Complexity

**O(1)**

**Justification:**

Each test case requires only a constant number of arithmetic operations and comparisons.

---

## Memory Complexity

**O(1)**

**Justification:**

Only a constant number of variables is used regardless of the input size.

---

## Reference Implementation

See [`coin_piles.cpp`](../src/coin_piles.cpp).

---