# 0053 - Maximum Subarray

### 🧠 Idea  
We want the **maximum sum of a contiguous subarray**.

Key observation:  
- At each index `i`, we have two choices:  
  - Extend the previous subarray (`pre + nums[i]`)  
  - Start a new subarray at `i` (`nums[i]`)  
- So we track the **maximum subarray ending at index `i`**, and update a global max.

This is a classic **1D Dynamic Programming** problem (Kadane’s Algorithm).

---

### 🛠️ Key Points  
- Let `pre` be the max subarray sum ending at previous index  
- At each step:  
  `pre = max(pre + nums[i], nums[i])`  
- Update the global max:  
  `max = max(max, pre)`  
- Handles negatives naturally (may start new subarray if needed)

---

### ⏱️ Complexity  

- **Time:**  
  - Traverse once → **O(n)**  
- **Space:**  
  - Only two variables (`pre`, `max`) → **O(1)**
