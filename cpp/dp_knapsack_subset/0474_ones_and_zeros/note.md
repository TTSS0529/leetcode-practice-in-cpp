# 0474 - Ones and Zeroes  

## 🧠 Idea  

We need to find the **maximum number of strings** we can form with a given number of `m` zeros and `n` ones.  

**Core insight:**  
- This is a **2D 0/1 Knapsack DP** problem.  
- Each string consumes `n_zero` zeros and `n_one` ones.  
- Define:  
  - `dp[i][j] = max number of strings that can be formed with i zeros and j ones`.  
- Transition:  
  - For each string:  
    ```
    dp[i][j] = max(dp[i][j], dp[i - n_zero][j - n_one] + 1)
    ```
  - Iterate `i` and `j` **backwards** to avoid reusing the same string multiple times.  

---

## 🔁 Step-by-step  

1. Initialize DP table: `dp[m+1][n+1]`, all 0.  
2. For each string `str` in `strs`:  
   - Count `n_zero = count of '0'` and `n_one = count of '1'`.  
3. Update DP table (backward iteration):  
   - For `i = m → n_zero`  
   - For `j = n → n_one`  
   - `dp[i][j] = max(dp[i][j], dp[i - n_zero][j - n_one] + 1)`  
4. Return `dp[m][n]`.  

---

## 🛠️ Key Points  

- **DP definition:** `dp[i][j]` = max strings with `i` zeros and `j` ones.  
- **Why backward iteration?** Ensures each string is used at most once (classic 0/1 knapsack trick).  
- **Base case:** `dp[0][0] = 0` (no zeros and ones → 0 strings).  
- **Problem type:** 2D knapsack (constraints are both zeros and ones).  

---

## ⏱️ Complexity  

- **Time:** `O(len(strs) · m · n)`  
  - For each string, we update an `m × n` table.  
- **Space:** `O(m · n)`  
  - Only a 2D DP array is needed.  
