# 0110 - Balanced Binary Tree  

### 🧠 Idea  
A tree is **balanced** if for every node `|leftHeight - rightHeight| ≤ 1`.  
Use **DFS + pruning**: return height if balanced, else `-1` to stop early.  

---

## ✅ Method - DFS  

- `checkDepth(node)`  
  - `null` → `0`  
  - Get `left` & `right` depths  
  - If either `-1` → return `-1`  
  - If `abs(left - right) ≥ 2` → return `-1`  
  - Else return `max(left, right) + 1`  

- `isBalanced(root)` → `checkDepth(root) != -1`  

---

### ⏱️ Complexity  
- **Time**: O(n)  
- **Space**: O(h)  

---

## 🆚 Summary  

| DFS + Pruning | Naive DFS |
|---------------|-----------|
| O(n) ✅       | O(n²) ❌ |
| Early exit ✅ | No pruning ❌ |
| Runtime 100% ✅ | Slower |
