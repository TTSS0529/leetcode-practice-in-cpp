# 0198 - House Robber

### 🧠 Idea  
You want to rob houses **without robbing two adjacent ones**, maximizing total money.

Key observation:  
- For each house `i`, you have **two choices**:  
  - **Rob it** → get `nums[i] + dp[i-2]`  
  - **Skip it** → keep `dp[i-1]`  
- So the recurrence is:  
  `dp[i] = max(dp[i - 1], dp[i - 2] + nums[i])`

We don’t need a full DP array. Just track two variables:  
- `pre = dp[i - 2]`  
- `curr = dp[i - 1]`

---

### 🛠️ Key Points  
- Initialize `pre = 0`, `curr = 0`  
- For each house `i` in `nums`:  
  - Save current `curr` as `tmp`  
  - Update `curr = max(curr, pre + nums[i])`  
  - Update `pre = tmp`  
- No DP array needed → **space optimized**

---

### ⏱️ Complexity  

- **Time:**  
  - One pass over `nums` → **O(n)**  
- **Space:**  
  - **O(1)** → only two variables used

---

## 🆚 Summary  

| Approach          | Time   | Space | Notes                          |
|-------------------|--------|-------|--------------------------------|
| Brute Force ❌    | O(2ⁿ)  | O(n)  | Try all combinations           |
| DP Array          | O(n)   | O(n)  | Use array to store each state |
| Optimized DP ✅   | O(n)   | O(1)  | Track only two values          |
