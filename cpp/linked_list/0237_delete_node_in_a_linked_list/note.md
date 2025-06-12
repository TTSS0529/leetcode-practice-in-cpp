# LeetCode 237 - Delete Node in a Linked List

## 📝 Problem Summary

Write a function to delete a node (except the tail) in a singly linked list, given only access to that node.

---

## 🚀 Methods Overview

### 🌀 Loop Copy Version(brute_force)

#### ✅ Pros:
- Works correctly
- No extra memory usage

#### ❌ Cons:
- Time complexity is `O(n)`
- Modifies multiple node values unnecessarily
- Less efficient on long lists

---

### ⚡ Simple O(1) Version(optimized)

#### ✅ Pros:
- `O(1)` time complexity
- Only modifies the target node
- Recommended by LeetCode

#### ⚠️ Caution:
- The skipped node is not freed
- May cause memory leaks if nodes were created using `new`

---
