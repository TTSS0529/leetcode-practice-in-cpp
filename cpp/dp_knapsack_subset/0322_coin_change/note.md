# 0322 - Coin Change  

## 🧠 Idea  

We need to find the **minimum number of coins** to make up a given `amount`.  

**Core insight:**  
- This is a **1D Dynamic Programming (Unbounded Knapsack)** problem.  
- Each coin can be used multiple times.  
- Define:  
  - `dp[j] = minimum coins needed to form amount j`.  
- Transition:  
  - For each coin:  
    ```
    dp[j] = min(dp[j], dp[j - coin] + 1)
    ```  
  - Iterate `j` forward to allow reusing the same coin multiple times.  

---

## 🔁 Step-by-step  

1. Initialize DP array:  
   - `dp[0] = 0` (0 coins to form amount 0).  
   - Others = large value (`INT_MAX - 1`) as "impossible".  
2. For each amount `j` from `1 → amount`:  
   - For each coin:  
     - If `j >= coin`:  
       - Update `dp[j] = min(dp[j], dp[j - coin] + 1)`.  
3. Answer is `dp[amount]`. If still impossible, return `-1`.  

---

## 🛠️ Key Points  

- **DP definition:** `dp[j]` = minimum coins needed for amount `j`.  
- **Why forward iteration?** Because coins are **unbounded** (can be reused).  
- **Impossible state handling:** use `INT_MAX - 1` to avoid overflow when adding `+1`.  
- **Base case:** `dp[0] = 0`.  

---

## ⏱️ Complexity  

- **Time:** `O(amount × len(coins))`  
  - For each amount, we try all coins.  
- **Space:** `O(amount)`  
  - Only a 1D DP array is used.  
