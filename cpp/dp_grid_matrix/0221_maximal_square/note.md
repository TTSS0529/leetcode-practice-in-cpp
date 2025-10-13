# 0221 - Maximal Square

## 🧠 Idea

We are asked to find the **largest square containing only 1’s** in a binary matrix and return its area.

**Key insights:**  
- Define `dp[i][j]` as the **side length of the largest square ending at `(i,j)`**.  
- If a cell contains '1', its square size depends on the **top, left, and top-left neighbors**.  
- Keep track of the **maximum square side** while iterating through the matrix.

---

## 🔁 Step-by-step

1. Initialize a DP matrix of the same size as the input matrix, with all zeros.  
2. Fill the first row and first column based on whether the cells contain '1'.  
3. For the remaining cells, if a cell contains '1', update its DP value based on neighbors.  
4. Continuously update the maximum square side found.  
5. The **final area** is the square of the maximum side length.

---

## 🛠️ Key Points

- **DP definition:** store the maximal square side ending at each cell.  
- **State transition:** depends on **top, left, top-left neighbors**.  
- **Initialization:** handle first row and first column separately.  
- **Result:** compute area as max side squared.

---

## ⏱️ Complexity

- **Time:** `O(m*n)` — iterate over each cell once.  
- **Space:** `O(m*n)` for the DP matrix.  
- Can be optimized to **O(n)** using a single row DP.
