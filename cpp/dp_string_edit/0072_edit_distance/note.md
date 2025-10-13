# 0072 - Edit Distance  

## 🧠 Idea  

We need to find the **minimum number of operations** to convert `word1` into `word2`.  
Each operation can be **insert**, **delete**, or **replace** a single character.  

**Core insight:**  
- This is a **2D Dynamic Programming** problem.  
- Define:  
  - `dp[i][j]` = minimum operations needed to convert the first *i* characters of `word1` into the first *j* characters of `word2`.  
- Transition depends on whether the current characters match:  
  - If same → no operation needed.  
  - If different → choose the minimal cost among replace, insert, or delete.  

---

## 🔁 Step-by-step  

1. **Initialization**  
   - `dp[0][j] = j` → converting empty `word1` to first *j* chars of `word2` requires *j* insertions.  
   - `dp[i][0] = i` → converting first *i* chars of `word1` to empty `word2` requires *i* deletions.  

2. **Transition**  
   - If characters match → take diagonal value (no cost).  
   - Otherwise → take the minimum among:  
     - Replace (diagonal + 1)  
     - Delete (top + 1)  
     - Insert (left + 1)  

3. **Result**  
   - The answer is `dp[m][n]`, representing the minimum operations for the full strings.  

---

## 🛠️ Key Points  

- **DP meaning:** `dp[i][j]` works on prefixes, not the full strings directly.  
- **Insert vs Delete:**  
  - Insert → make `word1` longer to match `word2`.  
  - Delete → make `word1` shorter.  
- **Replace:** fix a mismatch by changing one character.  
- **Base cases** define boundaries for empty strings.  

---

## ⏱️ Complexity  

- **Time:** `O(m × n)`  
  - Each cell in the DP table is computed once.  
- **Space:** `O(m × n)`  
  - Can be optimized to `O(min(m, n))` using rolling arrays.  
