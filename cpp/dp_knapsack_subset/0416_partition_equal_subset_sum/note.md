# 0416 - Partition Equal Subset Sum  

## 🧠 Idea  

We need to decide whether the array `nums` can be split into **two subsets with equal sum**.  

**Core insight:**  
- Equivalent to checking if there exists a subset with sum = `total_sum / 2`.  
- This is a **classic 0/1 Knapsack DP** problem.  
- Define: `dp[j] = whether we can reach sum j`.  
- Transition:  
  - For each number `num`, update from **right to left**:  
    `dp[j] = dp[j] || dp[j - num]`.  

---

## 🔁 Step-by-step  

1. Compute total sum of `nums`. If it's odd → impossible → return `false`.  
2. Set `target = sum / 2`.  
3. Initialize a DP array `dp[target+1]` with `dp[0] = true` (sum 0 is always possible).  
4. For each number `num` in `nums`:  
   - Iterate `j` backward from `target` to `num`:  
     - Update `dp[j] = dp[j] || dp[j - num]`.  
5. Answer is `dp[target]`.  

---

## 🛠️ Key Points  

- **DP definition:** `dp[j] = true` means sum `j` can be formed.  
- **Why backward iteration?** Prevents reusing the same number multiple times.  
- **Base case:** `dp[0] = true`.  
- **Equivalent to:** subset sum decision problem.  

---

## ⏱️ Complexity  

- **Time:** `O(n · target)`  
  - `n` = number of elements  
  - `target = sum / 2`  
- **Space:** `O(target)` using 1D DP array.  
