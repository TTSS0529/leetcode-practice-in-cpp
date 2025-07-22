# 0226 - Invert Binary Tree

### 🧠 Idea  
Two common approaches to **invert (mirror) a binary tree**:  
- **DFS (Recursive)**: Swap left & right children recursively.  
- **BFS (Iterative)**: Perform a level-order traversal and swap children for each node.  

---

### 🛠️ Key Points  
- DFS recursion is concise and naturally fits tree structure.  
- BFS avoids recursion stack, which is safer for very deep trees.  
- Both approaches visit each node exactly once, swapping its children.  
- In-place inversion → no extra tree structure needed.  

---

### ⏱️ Complexity  
- **Time**: O(n), where n = number of nodes (visit each once)  
- **Space**:  
  - DFS: O(h) recursion stack (h = tree height, worst case O(n) for skewed tree)  
  - BFS: O(w) queue (w = max width of tree)  

---

## 🆚 Summary  

| Feature            | DFS (Recursive)         | BFS (Iterative)          |
|--------------------|-------------------------|--------------------------|
| Code Simplicity    | ✅ Very simple           | Slightly longer          |
| Extra Space        | O(h) recursion stack    | O(w) queue               |
| Handles Deep Tree  | ❌ Risk of stack overflow| ✅ Safer for deep trees  |
| Typical Usage      | Small/medium trees      | Large/balanced trees     |
| LeetCode Runtime   | ~100%                   | ~100%                    |
