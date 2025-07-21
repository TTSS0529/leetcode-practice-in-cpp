# 0079 - Word Search

### 🧠 Idea  
Perform **DFS + Backtracking** on the 2D grid to search for the target word.  
At each step:  
- If the current cell matches `word[s]`, recursively explore 4 directions.  
- Mark the cell as visited (temporarily modifying the board), and restore it after backtracking.  

To **optimize** performance and avoid unnecessary DFS:  
1. **Character frequency pruning**  
   - Count board letters. If any letter in `word` appears more times than available, return `false` immediately.  
2. **Early termination**  
   - If `word.size() > m * n`, directly return `false`.  
3. Only start DFS from cells matching `word[0]`.

This reduces the DFS branching factor significantly for large boards.

---

### 🛠️ Key Points  
- DFS + backtracking on a grid, restoring the board after exploring.  
- **Pruning step** before DFS:  
  - Length check `len > m*n → false`.  
  - Frequency check `if (--count[c] < 0) → false`.  
- Avoids launching DFS from impossible starting points.  
- Uses `board[i][j] = '\0'` as an in-place visited marker to save extra memory.

---

### ⏱️ Complexity  
- **Time**: Worst case `O(m * n * 4^L)`  
  - `m, n` = grid size, `L` = word length  
  - But pruning reduces DFS calls drastically.  
- **Space**: O(L) recursion depth (no extra visited matrix).  

---

## 🆚 Summary  

| Feature                  | Value                          |
|--------------------------|--------------------------------|
| Search Strategy          | DFS + Backtracking             |
| Pruning                  | ✅ Length & char frequency      |
| Visited Handling         | In-place board modification    |
| Extra Memory             | ❌ No extra `visited[][]` needed |
| DFS Early Termination    | ✅ Yes                         |
| LeetCode Runtime         | **30% → 98% after pruning**    |

---