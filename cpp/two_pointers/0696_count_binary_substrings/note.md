# 0696 – Count Binary Substrings

## 🧠 Idea

The goal is to count all substrings where:

> **0s and 1s appear in two consecutive groups of equal length.**

A key insight:

> **Every valid substring comes from two adjacent groups of identical characters.**  
> For example, in `000111`, the groups have lengths 3 and 3, so the pair contributes 3 valid substrings.

Thus, the problem reduces to tracking the sizes of consecutive character runs.

---

## 🛠️ Key Points

- A binary string can be viewed as alternating groups:  
  `000111001` → `[3, 3, 2, 1]`
- Each adjacent pair contributes  
  **`min(previous_group, current_group)`**  
  valid substrings.
- You don't need to store all groups—just compare the length of the current run with the previous one.
- Works in a single pass with constant space.

---

## 💡 Intuition

Whenever the character changes, a new block begins.  
Every time the current block does not exceed the previous one in length, a valid balanced substring can be formed.

Balanced means:  
- same number of `0`s and `1`s  
- the two groups must be adjacent

---

## ⏱️ Complexity

- **Time:** `O(n)`  
  Only one scan of the string is needed.
- **Space:** `O(1)`  
  A few integer counters are sufficient.
