# 0583 - Delete Operation for Two Strings

### 🧠 Idea
We want to find the **minimum number of delete operations** to make two strings **equal**.

Key observation:  
- This is equivalent to **finding the length of the longest common subsequence (LCS)**.  
- Once LCS is known, deletions = **(len1 - LCS) + (len2 - LCS) = len1 + len2 - 2 * LCS**

We can use **dynamic programming** to compute LCS:  
- `dp[i][j]` = LCS length of `word1[0..i-1]` and `word2[0..j-1]`  
- Transition:  
  - If `word1[i-1] == word2[j-1]` → `dp[i][j] = dp[i-1][j-1] + 1`  
  - Else → `dp[i][j] = max(dp[i-1][j], dp[i][j-1])`

---

### 🛠️ Key Points
- Initialize `dp` table of size `(m+1) x (n+1)` with 0  
- Iterate `i = 1..m`, `j = 1..n`  
  - Match → extend LCS by 1  
  - Mismatch → take max of top/left  
- Result = `m + n - 2 * dp[m][n]`

---

### ⏱️ Complexity

- **Time:**  
  - Fill `dp` table → **O(m * n)**  
- **Space:**  
  - **O(m * n)** for DP table  
  - Can optimize to **O(min(m, n))** with 1D rolling array
