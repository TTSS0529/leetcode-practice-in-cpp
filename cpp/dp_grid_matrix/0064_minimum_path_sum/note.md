# 0064 - Minimum Path Sum  

### 🧠 Idea  
We want the **minimum sum path** from the top-left to bottom-right,  
moving only **right** or **down**.  

Key observation:  
- To reach `grid[i][j]`, you can only come from **top** `(i-1,j)` or **left** `(i,j-1)`  
- So the state transition is:  
  `dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + grid[i][j]`  

This is a classic **2D Dynamic Programming** problem.  

---

### 🛠️ Key Points  
- `path[i][j]` stores the **minimum sum to reach (i,j)**  
- Initialize first row & column separately (only one way to reach them)  
- Then iterate from `(1,1)` filling the DP table using the recurrence  
- Finally, `path[m-1][n-1]` holds the minimum path sum  
- Can be optimized to **O(n) space** by rolling array if needed  

---

### ⏱️ Complexity  

- **Time:**  
  - Fill each cell once → **O(m * n)**  
- **Space:**  
  - **O(m * n)** for DP table (or **O(n)** with optimization)  

---