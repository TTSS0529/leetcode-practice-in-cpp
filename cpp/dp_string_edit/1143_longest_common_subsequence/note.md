# 1143 - Longest Common Subsequence  

## 🧠 Idea  

We need to find the **length** of the longest subsequence common to both strings `text1` and `text2`.  

**Core insight:**  
- This is a **classic DP / sequence alignment** problem.  
- Define: `dp[i][j]` = length of LCS between prefixes `text1[0..i-1]` and `text2[0..j-1]`.  
- Transition:  
  - If `text1[i-1] == text2[j-1]` → `dp[i][j] = dp[i-1][j-1] + 1`  
  - Else → `dp[i][j] = max(dp[i-1][j], dp[i][j-1])`  

---

## 🔁 Step-by-step  

1. Initialize a 2D DP table `dp[m+1][n+1]` with all zeros.  
2. Iterate over `i = 1..m` and `j = 1..n`:  
   - If characters match → extend the subsequence by 1.  
   - Otherwise → take the maximum from removing one character either from `text1` or from `text2`.  
3. Answer is `dp[m][n]`.  

---

## 🛠️ Key Points  

- **DP definition:** `dp[i][j]` = LCS length of prefixes.  
- **Transition:** match → +1 from diagonal, else take max from top/left.  
- **Base case:** `dp[0][*] = 0` and `dp[*][0] = 0` (empty string case).  
- **Important:** don’t confuse with substring — subsequence allows skipping characters.  

---

## ⏱️ Complexity  

- **Time:** `O(m · n)`  
  - `m` = length of `text1`  
  - `n` = length of `text2`  
- **Space:** `O(m · n)` (can be optimized to `O(min(m,n))` using rolling array).  
