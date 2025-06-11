# 🧠 LeetCode 86 - Partition List

## Problem Summary  
Given a linked list and a value `x`, partition it so that all nodes less than `x` come before nodes greater than or equal to `x`.  
The relative order of the nodes in each partition should be preserved.

## 🚀 Approach  
This solution uses a single-pass, in-place manipulation of the original linked list to maintain `O(1)` space complexity.

### ✅ Key Idea:
- Use a dummy node to simplify edge handling.
- Maintain two pointers:
  - `tail`: the last node of the `< x` partition.
  - `prev`: the previous node before `head` during traversal.
- If `head->val < x`, remove `head` from its current position and insert it after `tail`.

# 🧠 LeetCode 86 - 分隔链表（Partition List）

## 题目简述  
给定一个链表和一个整数 `x`，请将链表中的所有小于 `x` 的节点放在大于等于 `x` 的节点前面，  
并且要保持每个分区中节点的原始相对顺序。

## 🚀 解法概述  
本解法使用单次遍历、**原地修改链表**，空间复杂度为 `O(1)`。

### ✅ 核心思路：
- 使用一个 dummy 节点简化操作。
- 使用两个指针：
  - `tail`：指向当前 `< x` 分区的最后一个节点。
  - `prev`：指向当前遍历节点的前一个节点。
- 如果当前节点 `< x`，则将其**从当前位置移除并插入到 `tail` 后面**。