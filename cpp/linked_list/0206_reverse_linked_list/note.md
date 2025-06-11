# LeetCode 206 - Reverse Linked List

## 📝 Problem Summary

Given the head of a singly linked list, reverse the list and return the reversed list.

---

## 🚀 Methods Overview

### 1. Tail-Cutting Method ❌

- Repeatedly find the node before the tail and move the tail to a new list.
- **Time Complexity**: O(n²)
- **Space Complexity**: O(1)
- Not recommended due to inefficiency.

---

### 2. Iterative Method (Three Pointers) ✅

- Use three pointers to reverse the list in a single pass.
- **Time Complexity**: O(n)
- **Space Complexity**: O(1)
- Recommended for clarity and performance.

---

### 3. Recursive Method ✅

- Recursively reverse the rest of the list, then adjust pointers during backtracking.
- **Time Complexity**: O(n)
- **Space Complexity**: O(n) (due to call stack)
- Elegant but can risk stack overflow on very long lists.

---

## 📊 Comparison Table

| Method          | Time   | Space  | Recommended |
|-----------------|--------|--------|-------------|
| Tail-Cutting    | O(n²)  | O(1)   | ❌          |
| Iterative       | O(n)   | O(1)   | ✅          |
| Recursive       | O(n)   | O(n)   | ✅          |

---

## 📌 Key Concepts

- Linked list manipulation
- Pointer updates
- Recursion vs Iteration

---

## ✅ Best Practice

Use the **iterative method** in interviews and production for its simplicity and efficiency.

# LeetCode 206 - 反转链表

## 📝 题目概述

给定一个单链表的头节点 `head`，请将链表反转，并返回反转后的链表。

---

## 🚀 解法概览

### 1. 剪尾拼接法 ❌

- 每次找到倒数第二个节点，将最后一个节点接到新链表。
- **时间复杂度**：O(n²)
- **空间复杂度**：O(1)
- 不推荐，效率太低。

---

### 2. 迭代三指针法 ✅

- 使用三个指针在一次遍历中完成反转。
- **时间复杂度**：O(n)
- **空间复杂度**：O(1)
- 推荐，效率高，结构清晰。

---

### 3. 递归法 ✅

- 递归反转子链表，回溯时调整指针指向。
- **时间复杂度**：O(n)
- **空间复杂度**：O(n)（递归栈空间）
- 结构优雅，但链表过长可能导致栈溢出。

---

## 📊 解法对比表

| 解法       | 时间复杂度 | 空间复杂度 | 是否推荐 |
|------------|------------|------------|----------|
| 剪尾拼接法 | O(n²)      | O(1)       | ❌       |
| 迭代法     | O(n)       | O(1)       | ✅       |
| 递归法     | O(n)       | O(n)       | ✅       |

---

## 📌 核心知识点

- 链表操作技巧
- 指针更新顺序
- 递归与迭代的比较

---

## ✅ 实战建议

在面试或项目中优先使用**迭代法**，既直观又高效。
