# 0542 - 01 Matrix  

## 🧠 Idea  

We are asked to return the distance of each cell to the nearest **0** in a binary matrix.  

**Key insights:**  
- Each `0` cell has distance `0`.  
- Each `1` cell’s distance depends on the **nearest `0`** around it.  
- This is a **multi-source shortest path problem** (all `0`s as sources).  
- Can be solved by:  
  - **Dynamic Programming (DP)** with 2 passes.  
  - Or **BFS** starting from all `0`s.  

This solution uses **DP (two-pass scan)**.  

---  

## 🔁 Step-by-step  

1. Initialize `dp[m][n]` with large values (`INT_MAX - 1`).  
   - If `mat[i][j] == 0`, set `dp[i][j] = 0`.  
2. **First pass (top-left → bottom-right):**  
   - For each cell `(i, j)` that is `1`:  
     - Check top `(i-1, j)` and left `(i, j-1)` neighbors:  
     ```cpp
     if (i > 0) dp[i][j] = min(dp[i][j], dp[i-1][j] + 1);
     if (j > 0) dp[i][j] = min(dp[i][j], dp[i][j-1] + 1);
     ```  
3. **Second pass (bottom-right → top-left):**  
   - For each cell `(i, j)` that is `1`:  
     - Check bottom `(i+1, j)` and right `(i, j+1)` neighbors:  
     ```cpp
     if (i < m-1) dp[i][j] = min(dp[i][j], dp[i+1][j] + 1);
     if (j < n-1) dp[i][j] = min(dp[i][j], dp[i][j+1] + 1);
     ```  
4. After both passes, `dp[i][j]` holds the shortest distance to a `0`.  

---  

## 🛠️ Key Points  

- **Why 2 passes?**  
  - First pass ensures we check **top/left** neighbors.  
  - Second pass ensures we check **bottom/right** neighbors.  
  - Together, they cover all 4 directions.  
- **Alternative BFS solution:**  
  - Push all `0`s into queue initially.  
  - Expand outward to compute distances in `O(m*n)`.  

---  

## ⏱️ Complexity  

- **Time:** `O(m * n)` — each cell visited twice.  
- **Space:** `O(m * n)` for the `dp` array.  
  - Can be optimized to **in-place update** if allowed.  
