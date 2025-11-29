# 0024 - Swap Nodes in Pairs

## 🧠 Idea
The goal is to swap every two adjacent nodes in a linked list.  
We do not modify node values — we reorder the actual nodes by adjusting their links.

A dummy node helps simplify handling of the head and allows clean iteration through the list in pairs.

---

## 🛠️ Key Points
- Process nodes **two at a time**.
- Use a dummy node to manage the new head naturally.
- For each pair, reverse their order and attach them to the result list.
- Move forward to the next pair until the list ends.

---

## 💡 Intuition
View the linked list as small blocks
You simply flip each pair and connect them back.  
The operation is fully local and doesn't require extra memory or recursion.

---

## ⏱️ Complexity
- **Time:** `O(n)` — every node is processed once  
- **Space:** `O(1)` — done entirely in-place