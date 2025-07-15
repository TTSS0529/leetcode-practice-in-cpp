# 0113 - Path Sum II

### 🧠 Idea  
Use **DFS with backtracking** to explore all root-to-leaf paths.  
At each node:  
- Add its value to a temporary path.  
- Subtract its value from the target sum.  
- If it’s a leaf and the remaining sum is 0 → push the current path to the result.  
- After exploring left & right, **backtrack** by removing the last element.

---

### 🛠️ Key Points  
- Base case: if `root == nullptr`, simply return.  
- Only when `!root->left && !root->right` (leaf node) and sum == 0, record the path.  
- **Backtracking** is crucial to avoid modifying `_tmp` for sibling paths.  
- Avoid passing path by value each time (use shared `_tmp` + pop_back).  

---

### ⏱️ Complexity  
- **Time**: O(n), visiting every node once  
  - Each node is added & removed from `_tmp` once.  
- **Space**: O(h) for recursion stack + O(h) for `_tmp` (h = height of tree)  
  - Worst case O(n) for skewed tree.

---

## 🆚 Summary

| Feature          | This Solution                     |
|------------------|-----------------------------------|
| Strategy         | DFS + Backtracking                |
| Handles NULL     | Yes (early return)                |
| Records Path     | Only when hitting valid leaf node |
| Recursion Depth  | O(h) (tree height)                |
| Time Efficiency  | Optimal (O(n))                    |
| Space Efficiency | Acceptable (O(h))                 |

