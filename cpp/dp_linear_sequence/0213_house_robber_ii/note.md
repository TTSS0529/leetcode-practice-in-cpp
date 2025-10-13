# 0213 - House Robber II

### 🧠 Idea  
Since the houses are arranged **in a circle**, the **first and last house cannot both be robbed**.

Split the problem into two linear subproblems (same as 198 - House Robber):
- Rob from **house 0 to n-2** (exclude the last house)
- Rob from **house 1 to n-1** (exclude the first house)

Solve both using the optimized DP approach from 198, and take the **maximum** of the two.

---

### 🛠️ Key Points  

- If there's only one house, just return `nums[0]`
- Otherwise:
  - Run DP on the range `[0, n-2]`
  - Run DP on the range `[1, n-1]`
  - Return the larger result

For each run:
- Use two variables to track the max profit:
  - Save `curr` to `tmp`
  - Update `curr = max(pre + nums[i], curr)`
  - Set `pre = tmp`

No need to build a full DP array → **space optimized**

---

### ⏱️ Complexity  

- **Time:**  
  - Two linear passes → **O(n)**
- **Space:**  
  - Only two variables → **O(1)**

---

## 🆚 Summary  

| Approach          | Time   | Space | Notes                                 |
|-------------------|--------|-------|----------------------------------------|
| Brute Force ❌    | O(2ⁿ)  | O(n)  | Try all combinations — too slow        |
| DP Array          | O(n)   | O(n)  | Use a DP array for each subproblem     |
| Optimized DP ✅   | O(n)   | O(1)  | Solve both subproblems with 2 vars     |

---
