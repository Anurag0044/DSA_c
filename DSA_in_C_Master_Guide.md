# Master Guide: DSA in C — Complete Beginner to Advanced

*For: Anurag Banerjee — BCA (AI & DL), 2nd year. Written for someone starting from zero.*

---

## How to Use This Guide

- Don't skip ahead. Each section builds on the last — especially **Pointers**, which is the single most important topic for DSA in C.
- For every topic: **read the concept → write the code yourself (don't copy-paste) → solve the practice questions**.
- Aim for **1-2 hours daily**, 5-6 days a week. Consistency beats long weekend cram sessions.
- Use **[GeeksforGeeks](https://geeksforgeeks.org)** for concept explanations and **[LeetCode](https://leetcode.com)** (select "C" as language) for practice — both are free.

---

## PHASE 0: C Language Fundamentals (Week 1) — Don't Skip This

Before "DSA" even starts, you must be solid on:

- Variables, data types (`int`, `float`, `char`), operators
- `if-else`, `switch`, loops (`for`, `while`, `do-while`)
- Functions — how to declare, define, call, pass arguments
- **Arrays** — 1D and 2D basics
- **Pointers** — this is THE most important concept. Spend extra time here.

### Understanding Pointers (in simple terms)
A pointer is just a variable that stores a **memory address** instead of a value.
```c
int x = 10;
int *p = &x;   // p stores the ADDRESS of x
printf("%d", *p);  // *p means "go to that address and get the value" → prints 10
```
Why this matters for DSA: Linked Lists, Trees, and Graphs are built entirely using pointers (nodes pointing to other nodes). If pointers feel shaky, redo this section before moving on — everything later depends on it.

**Practice (Phase 0 — do all of these before moving to Phase 1):**
1. Write a program to swap two numbers using pointers
2. Write a program to find the sum of array elements using pointers
3. Print a string using a character pointer
4. Write a function that takes a pointer and modifies the original variable's value
5. Create a 2D array and print it using pointer notation

---

## PHASE 1: Arrays & Strings — Deep Dive (Weeks 2-3)

### Concepts to Learn
- Array traversal, insertion, deletion at a given position
- Multi-dimensional arrays
- String functions: `strlen`, `strcpy`, `strcmp`, `strcat` (know how they work internally too, not just how to call them)
- Time Complexity basics: understand **Big-O** intuitively (O(1), O(n), O(n²)) — you don't need deep math, just "how does runtime grow as input grows"

### Practice Questions (Beginner → Intermediate)
1. Find the largest and smallest element in an array
2. Reverse an array in place
3. Check if an array is sorted
4. Find the second largest element
5. Remove duplicates from a sorted array
6. Rotate an array by k positions
7. Find the missing number in an array of 1 to n
8. Check if a string is a palindrome
9. Reverse a string without using a library function
10. Count vowels and consonants in a string
11. Check if two strings are anagrams
12. Find the first non-repeating character in a string

### Practice Questions (Advanced — attempt after the above feel easy)
13. Find the maximum subarray sum (**Kadane's Algorithm** — very important, appears frequently in interviews)
14. Move all zeroes in an array to the end without changing order of other elements
15. Find all pairs in an array that sum to a target value (Two Sum)
16. Merge two sorted arrays without extra space
17. Trapping Rainwater problem (hard — attempt only once comfortable with arrays)

---

## PHASE 2: Recursion (Week 4) — Master This Before Trees

Recursion is a function calling itself. It's confusing at first — that's normal. The trick is to trust that the smaller sub-problem gets solved correctly (don't try to mentally trace every single call at first).

### Concepts
- Base case and recursive case
- How the call stack works (draw it out on paper if it helps)
- Recursion vs iteration — when to use which

### Practice Questions
1. Factorial of a number using recursion
2. Fibonacci series using recursion
3. Sum of digits of a number using recursion
4. Power of a number (x^n) using recursion
5. Check if a string is a palindrome using recursion
6. Print all subsets of a string (basic backtracking intro)
7. Tower of Hanoi (classic — teaches recursive thinking deeply)
8. Generate all permutations of a string (attempt after Tower of Hanoi)

---

## PHASE 3: Linked Lists (Weeks 5-6)

This is where pointers become essential. A linked list is a chain of nodes, where each node has data + a pointer to the next node.

```c
struct Node {
    int data;
    struct Node* next;
};
```

### Concepts
- Singly Linked List: create, insert (beginning/end/middle), delete, traverse
- Doubly Linked List
- Circular Linked List
- **Fast & Slow pointer technique** (two pointers moving at different speeds — used to detect cycles, find the middle element, etc. Reused constantly in later topics.)

### Practice Questions
1. Create a singly linked list and print all elements
2. Insert a node at the beginning, end, and a given position
3. Delete a node from a given position
4. Find the length of a linked list
5. Reverse a linked list (iterative)
6. Reverse a linked list (recursive — harder, attempt after iterative version)
7. Find the middle of a linked list using fast & slow pointers
8. Detect a cycle in a linked list (Floyd's Cycle Detection)
9. Merge two sorted linked lists
10. Remove the Nth node from the end of a linked list
11. Check if a linked list is a palindrome

---

## PHASE 4: Stacks & Queues (Week 7)

### Concepts
- **Stack** = LIFO (Last In First Out) — think of a stack of plates
- **Queue** = FIFO (First In First Out) — think of a line at a ticket counter
- Implement both using **arrays** first, then using **linked lists** (helps you understand trade-offs)

### Practice Questions
1. Implement a stack using an array (push, pop, peek, isEmpty)
2. Implement a stack using a linked list
3. Implement a queue using an array
4. Implement a queue using a linked list
5. Check for balanced parentheses using a stack (very common interview question)
6. Reverse a string using a stack
7. Implement a Min Stack (returns minimum element in O(1))
8. Evaluate a postfix expression using a stack
9. Implement a queue using two stacks
10. Next Greater Element problem (uses a stack)

---

## PHASE 5: Trees (Weeks 8-10)

A tree is a hierarchical structure — think of a family tree, or folders/subfolders on your computer.

```c
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
```

### Concepts
- Binary Tree vs Binary Search Tree (BST) — in a BST, left child < parent < right child, always
- Tree Traversals: **Inorder, Preorder, Postorder** (all use recursion), and **Level-order** (uses a queue, not recursion)
- Height and depth of a tree

### Practice Questions
1. Create a binary tree and perform Inorder, Preorder, Postorder traversal
2. Perform Level-order traversal (using a queue)
3. Find the height of a binary tree
4. Count the total number of nodes in a tree
5. Insert a value into a BST
6. Search for a value in a BST
7. Delete a node from a BST (tricky — has 3 cases: leaf node, one child, two children)
8. Check if a binary tree is a valid BST
9. Find the minimum and maximum value in a BST
10. Find the Lowest Common Ancestor (LCA) of two nodes in a BST
11. Check if two trees are identical
12. Find the diameter of a binary tree (advanced)

---

## PHASE 6: Graphs (Weeks 11-13)

A graph is a set of nodes (vertices) connected by edges — think of a map of cities connected by roads, or a social network of friends.

### Concepts
- Representations: **Adjacency Matrix** vs **Adjacency List** (list is more common in practice, more memory-efficient for sparse graphs)
- **BFS (Breadth-First Search)** — explores level by level, uses a queue
- **DFS (Depth-First Search)** — explores as deep as possible first, uses recursion or a stack
- These two algorithms are the foundation for almost everything else in graphs — master them deeply before moving on

### Practice Questions
1. Represent a graph using an adjacency list
2. Implement BFS traversal
3. Implement DFS traversal (recursive)
4. Count the number of connected components in a graph
5. Detect a cycle in an undirected graph
6. Detect a cycle in a directed graph
7. Find the shortest path in an unweighted graph (using BFS)
8. Number of Islands problem (2D grid, uses DFS/BFS — classic problem)
9. Topological Sort (for directed acyclic graphs)
10. Dijkstra's Algorithm — shortest path in a weighted graph (advanced, but very useful — connects well to pathfinding concepts in AI)

---

## PHASE 7: Sorting & Searching (Week 14) — Can Be Done in Parallel with Earlier Phases

### Sorting Algorithms to Implement Yourself
1. Bubble Sort
2. Selection Sort
3. Insertion Sort
4. Merge Sort (important — uses recursion, "divide and conquer")
5. Quick Sort (important — frequently asked in interviews)

### Searching
6. Linear Search
7. Binary Search (only works on sorted data — extremely important, appears everywhere)
8. Binary Search on a rotated sorted array (slightly advanced variant)

**Why implement these yourself instead of using a library function?** Interviewers commonly ask you to explain or write sorting algorithms from scratch — understanding *how* they work (not just that `qsort()` exists) is the actual skill being tested.

---

## PHASE 8: Dynamic Programming (Weeks 15-18) — The Hardest Topic, Go Slow

DP is about breaking a problem into overlapping subproblems and storing results so you don't recompute them. Most students find this the hardest topic — that's completely normal, don't rush it.

### Concepts
- **Memoization** (top-down: recursion + storing results in an array)
- **Tabulation** (bottom-up: building up the answer iteratively using a table/array)

### Practice Questions (strictly in this order — each builds intuition for the next)
1. Fibonacci using memoization (compare speed to plain recursion — you'll see why DP matters)
2. Climbing Stairs problem
3. House Robber problem
4. Longest Common Subsequence (LCS)
5. 0/1 Knapsack problem
6. Coin Change problem
7. Longest Increasing Subsequence
8. Edit Distance (hard — attempt only after all above)

---

## PHASE 9: Advanced Topics (Week 19+, Ongoing)

Only move here once Phases 1-8 feel solid:
- **Greedy Algorithms**: Activity Selection, Fractional Knapsack, Job Sequencing
- **Tries** (prefix trees — used in autocomplete features)
- **Bit Manipulation** basics (AND, OR, XOR tricks — some companies love asking these)
- **Union-Find (Disjoint Set)** — used in network connectivity problems

---

## Projects to Build (Do These Alongside, Not After)

Building something real cements the concepts far better than isolated practice questions alone:

1. **Student Record Management System** (Arrays/Linked List + File handling in C) — classic, practical, resume-friendly for a BCA project
2. **Simple Calculator with Expression Evaluation** (Stacks) — shows real stack application
3. **Library Book Tracker** (Linked List + Search) — practical use of insert/delete/search
4. **Maze Solver** (Graphs — BFS/DFS) — visually satisfying, shows graph algorithm understanding
5. **Simple Contact Book with Search** (BST or Linked List) — practical, demonstrates tree/list use together

---

## Realistic 6-Month Timeline

| Month | Focus |
|---|---|
| **Month 1** | Phase 0 (C fundamentals + pointers) + Phase 1 (Arrays/Strings) |
| **Month 2** | Phase 2 (Recursion) + Phase 3 (Linked Lists) |
| **Month 3** | Phase 4 (Stacks/Queues) + Phase 5 (Trees) |
| **Month 4** | Phase 6 (Graphs) + Phase 7 (Sorting/Searching, done in parallel) |
| **Month 5** | Phase 8 (Dynamic Programming) — go slow, this is the hardest phase |
| **Month 6** | Phase 9 (Advanced topics) + polish projects + start solving mixed problems on LeetCode/GFG daily |

---

## Daily Practice Habit

- **Minimum 2 problems/day**, every day — consistency matters far more than occasional long sessions
- Once you finish a phase, **don't abandon it** — revisit 1-2 old problems from earlier phases weekly so concepts stay fresh
- After Month 3, start mixing in **previously solved problem types** randomly (not just the current phase) — this mimics how real interviews and exams jump between topics

---

## A Note on Difficulty

Everyone gets stuck on **Linked Lists (pointers)**, **Trees (recursion get complex)**, and **Dynamic Programming (hardest for almost everyone)**. If you're struggling on these, you are not behind — these are universally the hardest parts of DSA for every beginner. Slow down, don't skip ahead, and revisit the concept explanation before jumping to harder practice questions.
