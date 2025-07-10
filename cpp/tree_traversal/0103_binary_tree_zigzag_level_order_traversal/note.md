# 0103 - Binary Tree Zigzag Level Order Traversal

### 🧠 Idea  
Use **Breadth-First Search (BFS)** to traverse the tree **level by level**, but reverse the order of values on every other level to create a *zigzag* pattern.

---

### 🛠️ Key Points  
- Initialize a queue and push the root node.  
- Use a flag to track the direction: left-to-right or right-to-left.  
- For each level:
  - Traverse all nodes at the current level.
  - Store their values in a temporary list.
  - Push their children into the queue.
  - If the current direction is right-to-left, reverse the list.
- Flip the flag after each level.

---

### ⏱️ Complexity  
- **Time**: O(n), where n is the number of nodes  
- **Space**: O(n), for the queue and result storage

---

## 🆚 Summary

| Feature          | This Solution           |
|------------------|--------------------------|
| Strategy         | BFS with queue + reversal |
| Zigzag Handling  | `reverse()` on levels     |
| Handles NULL     | Yes (empty root check)    |
| Memory Usage     | O(n)                      |
| Runtime          | 100%                      |
| Space Efficiency | Acceptable                |
