# 0328 - Odd Even Linked List

## 🧠 Idea
Given a singly linked list, the task is to reorder it so that all **odd-indexed nodes** come first, followed by all **even-indexed nodes**, while preserving the relative order within each group.

Important:  
**"Odd" and "Even" refer to node positions (1-based), not node values.**

---

## 🛠️ Key Points
- Maintain two pointers:
  - `odd` → tail of the odd-indexed list  
  - `even` → tail of the even-indexed list  
- Store `even_head` so the even list can be appended after the odd list at the end.
- Traverse by "skipping" nodes:
  - `odd->next = even->next`  
  - `even->next = odd->next->next`  
- After forming both lists, link them:  
  `odd->next = even_head`.

---

## 💡 Intuition
Think of the list as being split into two separate chains:
- one containing nodes at **odd positions**,  
- the other containing nodes at **even positions**.

As you traverse, you build these two chains in place.  
Once the traversal is done, attach the even chain after the odd chain.  
No new nodes or extra memory are needed — only pointer rewiring.

---

## ⏱️ Complexity
- **Time:** `O(n)` — single pass through the list  
- **Space:** `O(1)` — constant extra space, in-place reordering  
