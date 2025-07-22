# 0101 - Symmetric Tree

### 🧠 Idea  
Two common approaches to **check if a binary tree is symmetric (mirror of itself)**:  
- **DFS (Recursive)**: Recursively compare `left->left` with `right->right` and `left->right` with `right->left`.  
- **BFS (Iterative)**: Use a queue to compare nodes in pairs level by level.  

---

### 🛠️ Key Points  
- DFS recursion is concise and naturally fits the mirror comparison.  
- BFS avoids recursion stack and is safer for very deep trees.  
- Both approaches always **compare nodes in symmetric positions**.  
- If at any point one node is `null` and the other isn’t (or values differ) → **not symmetric**.  

---

### ⏱️ Complexity  
- **Time**: O(n), where n = number of nodes (visit each node once).  
- **Space**:  
  - DFS: O(h) recursion stack (h = tree height, worst case O(n) for skewed tree).  
  - BFS: O(w) queue (w = max width of the tree).  

---

## 🆚 Summary  

| Feature            | DFS (Recursive)           | BFS (Iterative)          |
|--------------------|---------------------------|--------------------------|
| Code Simplicity    | ✅ Very simple             | Slightly longer          |
| Extra Space        | O(h) recursion stack      | O(w) queue               |
| Handles Deep Tree  | ❌ Risk of stack overflow  | ✅ Safer for deep trees  |
| Typical Usage      | Small/medium trees        | Large/balanced trees     |
| LeetCode Runtime   | ~100%                     | ~100% (can fluctuate)    |
