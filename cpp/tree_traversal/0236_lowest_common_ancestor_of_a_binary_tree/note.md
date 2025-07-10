# 0236 - Lowest Common Ancestor of a Binary Tree

### 🧠 Idea  
Use **post-order traversal (DFS)** to explore both subtrees.  
Return the current node only when both `p` and `q` are found in different branches, making it their lowest common ancestor.

---

### 🛠️ Key Points  
- If the current node is `nullptr`, `p`, or `q`, return it directly.  
- Recursively search left and right subtrees.  
- If both sides return non-null, current node is the LCA.  
- Otherwise, return the non-null child.

---

### ⏱️ Complexity  
- **Time**: O(n), where n is the number of nodes  
- **Space**: O(h), where h is the height of the tree (recursion stack)

---

## 🆚 Summary

| Feature          | This Solution             |
|------------------|----------------------------|
| Strategy         | Post-order DFS             |
| Handles NULL     | Yes (base case)            |
| Recursion Depth  | O(h) (worst case skewed)   |
| Runtime          | ~60% varies                |
| Time Efficiency  | Optimal (O(n))             |
| Space Efficiency | Acceptable                 |
