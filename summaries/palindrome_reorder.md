# Palindrome Reorder

## Problem

Given a string, construct a palindrome using exactly the same characters.

If no such palindrome can be formed, print `NO SOLUTION`.

---

## Problem Type

- String Algorithms
- Constructive Algorithm

---

## Core Idea

A palindrome is symmetric around its center. Therefore, every character must appear an even number of times, except possibly one character that may appear an odd number of times and occupy the middle position. Construct the first half of the palindrome, place the middle character if necessary, and mirror the first half to obtain the final string.

---

## Algorithm Template

```text
Read the string

Count the frequency of every character

If more than one character has an odd frequency

    Print "NO SOLUTION"

Construct the first half

    Add frequency / 2 copies of each character

Print the first half

If an odd-frequency character exists

    Print it once

Print the reverse of the first half
```

---

## Key Idea

Technique:
- Frequency Counting
- Constructive Algorithm

Mathematical / Algorithmic Insight:
- Every character in a palindrome appears symmetrically.
- At most one character may have an odd frequency.
- The palindrome is obtained by mirroring its first half around the center.

---

## Common Mistakes

- Allowing more than one character to have an odd frequency.
- Forgetting to place the odd-frequency character in the middle.
- Printing only the first half without mirroring it.
- Sorting is not required for correctness, although ordered construction gives a cleaner output.

---

## Time Complexity

**O(n)**

**Justification:**

The string is traversed once to count frequencies, and each character is written exactly once while constructing the palindrome.

---

## Memory Complexity

**O(n)**

**Justification:**

The first half of the palindrome is stored explicitly before generating the final output.

---

## Reference Implementation

See [`palindrome_reorder.cpp`](../src/palindrome_reorder.cpp).

---