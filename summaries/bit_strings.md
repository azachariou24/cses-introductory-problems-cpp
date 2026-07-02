# Bit Strings

## Problem

Given an integer `n`, determine the number of bit strings of length `n`.

Since the answer can be very large, print the result modulo `10⁹ + 7`.

---

## Problem Type

- Combinatorics
- Modular Arithmetic

---

## Core Idea

Each position in a bit string can independently contain either `0` or `1`. Since every position has two possible choices, the total number of bit strings is `2ⁿ`. The result is computed modulo `10⁹ + 7`.

---

## Algorithm Template

```text
Read n

Initialize answer = 1

Repeat n times

    answer = (answer × 2) mod MOD

Print answer
```

---

## Key Idea

Technique:
- Combinatorics
- Modular Arithmetic

Mathematical / Algorithmic Insight:
- Each position contributes exactly two independent choices.
- By the Multiplication Principle:

  `Total = 2 × 2 × ... × 2 = 2ⁿ`

- Since the result can be very large, every multiplication is performed modulo `10⁹ + 7`.

---

## Common Mistakes

- Forgetting to apply the modulo after each multiplication.
- Using the `pow()` function from the standard library, which performs floating-point arithmetic and may produce incorrect results for large exponents.
- Computing `2ⁿ` directly before taking the modulo, which may cause integer overflow.

---

## Time Complexity

**O(n)**

**Justification:**

The algorithm performs one multiplication for each of the `n` positions.

---

## Memory Complexity

**O(1)**

**Justification:**

Only a constant number of variables is maintained throughout the computation.

---

## Reference Implementation

See [`bit_strings.cpp`](../src/bit_strings.cpp).

---