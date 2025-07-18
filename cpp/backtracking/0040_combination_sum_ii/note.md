# 0040 - Combination Sum II  

### 🧠 Idea  
We want all **unique combinations of numbers from `candidates`** that sum up to `target`.  

Key differences from **0039 - Combination Sum**:  
- **Each number can be used at most ONCE**.  
- **No duplicate combinations** are allowed (e.g., `[1,7]` should only appear once even if `1` appears twice in `candidates`).  

This is a **backtracking + pruning + duplicate skipping** problem.  

---

## ✅ Backtracking + Pruning + Deduplication  

### 🛠️ Key Points  
- **Sort** `candidates` first:  
  - Enables pruning → if `nums[i] > target`, we can `break`.  
  - Groups duplicates together so we can skip them easily.  
- Maintain a `path` storing the current combination.  
- Recursively pick numbers **starting from `start` index** (to ensure each number is only used once):  
  - **If `nums[i] > target` → prune** (since the array is sorted).  
  - **Skip duplicates on the same recursion level**:  
    ```cpp
    if (i > start && nums[i] == nums[i-1]) continue;
    ```  
  - Otherwise, pick `nums[i]`, recurse with `target - nums[i]` and `start = i + 1` (next index).  
  - After recursion, `pop_back()` to backtrack.  
- **When `target == 0`**, push the current `path` into the result.  

---

### ⏱️ Complexity  

- **Time Complexity:**  
  - Sorting: `O(n log n)`  
  - Backtracking worst case is **O(2^n)** (exploring all subsets).  
  - Output-sensitive: depends on the number of valid unique combinations `C`, adding an extra `O(C * k)` for copying each valid path of length `k`.  

  **Total:** `O(n log n + 2^n)`  

- **Space Complexity:**  
  - Recursion depth: `O(n)`  
  - `path` temporary space `O(n)`  
  - Result storage `res` depends on output size  

---

### ✅ Pros  
- Sorting + pruning improves performance significantly.  
- Duplicate skipping ensures only **unique combinations** are returned.  
- Clean and minimal code (no extra `used` array needed).  

---

### ❌ Cons  
- Still **exponential** in the worst case.  
- Pruning and deduplication help but can’t change worst-case complexity.  

---

### 📝 Key Difference vs 0039  
| 0039 Combination Sum | 0040 Combination Sum II |
|----------------------|-------------------------|
| Each number can be used **unlimited times** | Each number can be used **once only** |
| Recursive call uses `dfs(..., i)` | Recursive call uses `dfs(..., i + 1)` |
| No need to skip duplicates | Must skip duplicates (`i > start && nums[i]==nums[i-1]`) |
