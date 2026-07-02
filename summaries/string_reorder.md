# String Reorder

## Problem

Given a string consisting of uppercase English letters, rearrange its characters so that no two adjacent characters are equal.

If multiple valid rearrangements exist, output the lexicographically smallest one. If no valid arrangement exists, print `-1`.

---

## Problem Type

- Greedy
- String Algorithms

---

## Core Idea

Construct the answer greedily from left to right. At each position, choose the lexicographically smallest valid character that is different from the previous one and still allows the remaining characters to form a valid solution.

---

## Algorithm Template

```text
Read the string

Count the frequency of every character

If no valid arrangement exists

    Print -1

For every position

    Try characters in alphabetical order

    If the character is valid

        Temporarily choose it

        If the remaining frequencies can still form a solution

            Keep the character

            Continue

        Undo the choice

Print the constructed string
```

---

## Key Idea

Technique:
- Greedy
- Feasibility Check
- Frequency Counting

Mathematical / Algorithmic Insight:
- Always select the smallest valid character to obtain the lexicographically minimal answer.
- After every choice, verify that the remaining character frequencies still satisfy the feasibility condition.
- A valid continuation exists only if the maximum remaining frequency does not exceed:

  `(remainingLength + 1) / 2`

---

## Common Mistakes

- Choosing the lexicographically smallest character without checking whether the remaining characters can still form a valid arrangement.
- Forgetting that adjacent characters must always be different.
- Ignoring the feasibility condition after each greedy choice.
- Assuming that any greedy choice leads to a valid solution without verification.

---

## Time Complexity

**O(n)**

**Justification:**

For each position, at most 26 characters are examined, and each feasibility check scans 26 frequencies. Since the alphabet size is constant, the overall complexity is linear in the length of the string.

---

## Memory Complexity

**O(1)**

**Justification:**

Only the frequency array and a constant number of auxiliary variables are maintained. The alphabet size is fixed (`A`–`Z`).

---

## Reference Implementation

See [`string_reorder.cpp`](../src/string_reorder.cpp).

---