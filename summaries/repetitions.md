# Repetitions

## Problem

Given a DNA sequence, determine the length of the longest contiguous substring consisting of the same character.

---

## Problem Type

- String Algorithms
- Linear Traversal

---

## Core Idea

Traverse the DNA sequence once while maintaining the length of the current consecutive repetition. Whenever the current character differs from the previous one, start a new repetition. The maximum repetition length encountered during the traversal is the answer.

---

## Algorithm Template

```text
Read the DNA sequence

Initialize

    currentLength = 1
    maximumLength = 1

For each character starting from the second one

    If the current character is equal to the previous one

        Increase currentLength

    Else

        Reset currentLength to 1

    Update maximumLength

Print maximumLength
```

---

## Key Idea

Technique:
- Linear Traversal
- Two-Pointer / Consecutive Segment Tracking

Mathematical / Algorithmic Insight:
- Every maximal repetition forms a contiguous segment of identical characters.
- Each segment is processed exactly once while scanning the string from left to right.

---

## Common Mistakes

- Forgetting to update the maximum length after extending the current segment.
- Resetting the current repetition length incorrectly when the character changes.
- Comparing every character with all previous characters instead of only the immediately preceding one.
- Forgetting to handle the case where the entire string consists of the same character.

---

## Time Complexity

**O(n)**

**Justification:**

The sequence is traversed exactly once, and each character is processed in constant time.

---

## Memory Complexity

**O(1)**

**Justification:**

Only a constant number of variables is maintained independently of the input size.

---

## Reference Implementation

See [`repetitions.cpp`](../src/repetitions.cpp).

---