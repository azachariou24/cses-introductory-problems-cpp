# Number Spiral

## Problem

Given the coordinates `(row, column)` in an infinite number spiral, determine the value stored at that position.

---

## Problem Type

- Mathematics
- Pattern Recognition

---

## Core Idea

Observe that the numbers are arranged in square layers. Each layer is determined by `max(row, column)`, and its largest value is located at one of the corners. The required value is then computed directly using a mathematical formula based on the layer and its parity.

---

## Algorithm Template

```text
Read the number of test cases

For each test case

    Read row and column

    layer = max(row, column)

    If layer is even

        Compute the answer using the even-layer formula

    Else

        Compute the answer using the odd-layer formula

    Print the answer
```

---

## Key Idea

Technique:
- Mathematical Observation
- Pattern Recognition

Mathematical / Algorithmic Insight:
- Every square layer ends at `layer²`.
- The direction of the spiral alternates depending on whether the layer is even or odd.
- The answer is obtained by subtracting the appropriate offset from the corresponding corner value.

---

## Common Mistakes

- Attempting to construct the spiral explicitly instead of deriving a direct formula.
- Applying the formula for even layers to odd layers (or vice versa).
- Confusing the row and column coordinates when computing the offset.
- Using 32-bit integers, since the values in the spiral may exceed the integer range.

---

## Time Complexity

**O(1)**

**Justification:**

Each query is answered using a constant number of arithmetic operations.

---

## Memory Complexity

**O(1)**

**Justification:**

Only a constant number of variables is required for each test case.

---

## Reference Implementation

See [`number_spiral.cpp`](../src/number_spiral.cpp).

---