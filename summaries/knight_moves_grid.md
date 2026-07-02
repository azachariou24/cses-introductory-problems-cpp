# Knight Moves

## Problem

Given an `n × n` chessboard, compute the minimum number of knight moves required to reach every square starting from the top-left corner.

Print the resulting distance grid.

---

## Problem Type

- Graph Algorithms
- Breadth-First Search (BFS)

---

## Core Idea

Model the chessboard as an unweighted graph where each square is a vertex and each valid knight move is an edge. Perform a single Breadth-First Search (BFS) starting from the top-left corner to compute the minimum number of moves required to reach every square.

---

## Algorithm Template

```text
Read n

Initialize all distances as unvisited

Start BFS from the top-left corner

While the queue is not empty

    Remove the front square

    Try all eight knight moves

    If the new square is inside the board
    and has not been visited

        Update its distance

        Push it into the queue

Print the distance grid
```

---

## Key Idea

Technique:
- Breadth-First Search (BFS)
- Graph Traversal

Mathematical / Algorithmic Insight:
- Each square represents a vertex, and each knight move represents an edge.
- Every move has equal cost, making BFS the optimal algorithm for computing shortest paths.
- A single BFS computes the minimum distance from the source to every square simultaneously.

---

## Common Mistakes

- Using Depth-First Search (DFS), which does not guarantee shortest paths in an unweighted graph.
- Forgetting to mark a square as visited when it is first discovered, causing duplicate processing.
- Not checking whether a knight move remains inside the boundaries of the board.
- Running a separate BFS for every square instead of a single BFS from the source.

---

## Time Complexity

**O(n²)**

**Justification:**

Each square is visited at most once, and at most eight transitions are examined for every square.

---

## Memory Complexity

**O(n²)**

**Justification:**

The distance matrix and the BFS queue store at most one entry for each square on the board.

---

## Reference Implementation

See [`knight_moves_grid.cpp`](../src/knight_moves_grid.cpp).

---