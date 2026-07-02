# Grid Coloring I

## Problem

Given a grid of characters, construct a new grid such that:

- Every cell contains a character different from the original one.
- Adjacent cells (sharing a side) contain different characters.

Print any valid constructed grid.

---

## Problem Type

- Greedy
- Constructive Algorithm

---

## Core Idea

Construct the grid greedily from left to right and top to bottom. For each cell, choose the lexicographically smallest valid character that differs from the original character and from its already assigned adjacent cells.

---

## Algorithm Template

```text
Read the grid

For every row

    For every column

        Try characters A, B, C and D

        If the character is different from

            the original character

            the upper neighbor

            the left neighbor

        Place the character

Print the constructed grid
```

---

## Key Idea

Technique:
- Greedy
- Constructive Algorithm

Mathematical / Algorithmic Insight:
- At most three characters are forbidden for each cell:
  - The original character
  - The upper neighbor
  - The left neighbor
- Since there are four possible characters, at least one valid choice always exists.
- Checking only the upper and left neighbors is sufficient because the grid is constructed row by row.

---

## Common Mistakes

- Checking all four neighbors instead of only the already processed ones (upper and left).
- Forgetting that the chosen character must also differ from the original character.
- Assuming backtracking is necessary, even though a greedy construction always succeeds.
- Using fewer than four available characters, which may prevent a valid assignment.

---

## Time Complexity

**O(n · m)**

**Justification:**

Each cell is processed once, and at most four characters are tested for every cell.

---

## Memory Complexity

**O(n · m)**

**Justification:**

An auxiliary grid of the same dimensions is maintained to store the constructed solution.

---

## Reference Implementation

See [`grid_coloring_I.cpp`](../src/grid_coloring_I.cpp).

---