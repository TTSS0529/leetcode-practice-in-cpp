# 0413 - Arithmetic Slices  

## 🧠 Idea  

We are asked to count the number of **arithmetic subarrays** (length ≥ 3) inside the array.  

**Key insights:**  
- An arithmetic slice means:  
  ```cpp
  nums[i] - nums[i-1] == nums[i-1] - nums[i-2]
  ```
- If `nums[i-2..i]` forms an arithmetic slice, then extending it by one element may form a **longer arithmetic slice**.  
- Use **DP** to track how many arithmetic slices end at index `i`.  

---

## 🔁 Step-by-step  

1. Initialize a DP array `dp[n]` with zeros.  
 - `dp[i]` = number of arithmetic slices **ending at index `i`**.  
2. For each `i` from `2` to `n-1`:  
 - If `nums[i] - nums[i-1] == nums[i-1] - nums[i-2]`, then:  
   ```cpp
   dp[i] = dp[i-1] + 1;
   ```  
   - This works because any arithmetic slice ending at `i-1` can be extended to `i`.  
   - Plus, the new slice `[i-2, i-1, i]` itself counts as one.  
3. The final answer = `sum(dp)` (accumulate all contributions).  

---

## 🛠️ Key Points  

- **DP definition:** `dp[i]` only depends on `dp[i-1]`.  
- **Arithmetic extension:** once a sequence is arithmetic, adding a new element with the same difference extends it.  
- **Optimization:** we don’t need the whole `dp` array — only a running variable.  

---

## ⏱️ Complexity  

- **Time:** `O(n)` — single pass through the array.  
- **Space:**  
- `O(n)` with DP array.  
- Can be reduced to `O(1)` using just one variable.  
