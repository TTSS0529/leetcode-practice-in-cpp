# 0647 – Palindromic Substrings

## 🧠 Idea

The goal is to count **all palindromic substrings** in a given string.

A key observation simplifies the problem:

> **Every palindrome can be formed by expanding from its center.**

There are two types of centers to consider:

- **Single center**: `(i, i)` → odd-length palindromes  
- **Double center**: `(i, i+1)` → even-length palindromes

For each center, we expand outward as long as the characters match.  
Every successful expansion corresponds to one palindromic substring.

This reduces the problem to an efficient **O(n²)** solution.

---

## 🛠️ Key Points

- A palindrome is defined by **symmetry around a center**.
- There are `2n - 1` centers in total (n odd + n–1 even).
- Expanding each center is at most `O(n)`, leading to an overall `O(n²)` time complexity.
- The algorithm requires **no extra space** beyond a few variables.

---

## 💡 Intuition

Visualize the string as characters laid out horizontally.  
A palindrome looks like a mirror around some center.

For each possible center:

1. Check if the boundary characters match.
2. Count the current palindrome.
3. Expand outward.

---

## ⏱️ Complexity

- **Time:** `O(n²)`  
  Each center expands outward, potentially scanning the whole string.
- **Space:** `O(1)`  
  Only constant extra memory is used.
