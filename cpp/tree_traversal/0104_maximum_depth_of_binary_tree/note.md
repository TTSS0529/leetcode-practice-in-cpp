# 0104 - Maximum Depth of Binary Tree

### 🧠 Idea  
We need to find the **maximum depth (height)** of a binary tree.  
This can be solved in two common ways:  

- **DFS (Recursive Depth Calculation)**:  
  Recursively compute the depth of left and right subtrees, then take the maximum.  

- **BFS (Level Order Traversal)**:  
  Traverse the tree level by level using a queue, counting how many levels exist.  

---

## ✅ Method 1 - DFS (Recursive)

### 🛠️ Key Points  
- Base case: If `root == nullptr`, return `0`.  
- Recursively compute `leftDepth` and `rightDepth`.  
- Return `max(leftDepth, rightDepth) + 1`.  

---

### ⏱️ Complexity  
- **Time**: O(n), where n is the number of nodes (visit each node once).  
- **Space**: O(h), where h is the height of the tree (recursion stack).  

---

## ✅ Method 2 - BFS (Level Order Traversal)

### 🛠️ Key Points  
- Use a queue for level order traversal.  
- For each level, process all nodes currently in the queue, then push their children.  
- Increment the depth counter after finishing one full level.  

---

### ⏱️ Complexity  
- **Time**: O(n), where n is the number of nodes (each node is enqueued/dequeued once).  
- **Space**: O(w), where w is the maximum width of the tree (queue usage).  

---

## 🆚 Summary

| Feature               | Method 1: DFS (Recursive)      | Method 2: BFS (Level Order)     |
|------------------------|--------------------------------|---------------------------------|
| Strategy               | Recursively compute depth     | Iteratively count tree levels  |
| Uses Extra Data Struct | No (only recursion stack)     | Yes (queue)                    |
| Space Usage            | O(h)                         | O(w)                           |
| Easy to Implement      | ✅                           | ✅                             |
| Runtime (your tests)   | 100%                          | 100%                           |

---
