# 0304 - Range Sum Query 2D - Immutable

## 🧠 Idea  
We are given a 2D matrix and need to efficiently calculate the **sum of elements in a given submatrix** defined by its top-left `(row1, col1)` and bottom-right `(row2, col2)` coordinates.  

---

## 🛠️ Key Points  
- Use a **2D prefix sum (integral) matrix** to answer sum queries in `O(1)` time.  
- Define `_integral[i][j]` as the sum of elements in the rectangle from `(0,0)` to `(i-1,j-1)` in the original matrix.  
- The sum of any submatrix can then be computed using **inclusion-exclusion principle**:  

\[
\text{sumRegion} = \_integral[r2+1][c2+1] - \_integral[r2+1][c1] - \_integral[r1][c2+1] + \_integral[r1][c1]
\]

- Using `m+1` by `n+1` matrix simplifies boundary checks and avoids negative indices.

---

## 💡 Intuition  
Think of `_integral` as a “summed area table”:  
- Each cell stores the sum of all elements above and to the left, including itself.  
- To get the sum of any rectangle, take the sum up to bottom-right corner and subtract the “extra areas” above and left.  
- This allows **constant-time queries** after a **preprocessing step**.

---

## ⏱️ Complexity

- **Preprocessing (constructor):** `O(m * n)` — compute the 2D prefix sum.  
- **Query (sumRegion):** `O(1)` — constant time using inclusion-exclusion.  
- **Space:** `O(m * n)` — for the prefix sum matrix.
