# 0102 - Binary Tree Level Order Traversal

### 🧠 Idea  
Use **Breadth-First Search (BFS)** with a queue to traverse the tree **level by level**.

---

### 🛠️ Key Points  
- Push the root node to a queue.  
- For each level, record all node values and push their children.  
- Repeat until the queue is empty.  
- Each level is handled by looping `queue.size()` times.

---

### ⏱️ Complexity  
- **Time**: O(n), where n is the number of nodes  
- **Space**: O(n), for the queue and result storage

---

## 🆚 Summary

| Feature          | This Solution      |
|------------------|--------------------|
| Strategy         | BFS with queue     |
| Handles NULL     | Yes (base case)    |
| Memory Usage     | O(n)               |
| Runtime          | 100%               |
| Space Efficiency | Acceptable         |
