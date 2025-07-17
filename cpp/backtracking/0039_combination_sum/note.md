# 0039 - Combination Sum  

### 🧠 Idea  
We want all **combinations of numbers from `candidates`** that sum up to `target`.  

Key points:  
- Each number **can be reused unlimited times**.  
- Order doesn’t matter → `[2,2,3]` is the same as `[3,2,2]`.  

This is a **backtracking + pruning** problem.  

---

## ✅ Backtracking + Pruning  

### 🛠️ Key Points  
- **Sort** `candidates` first → allows early `break` if the current number exceeds `target`.  
- Maintain a `path` that stores the current combination.  
- Recursively pick numbers starting from `start` index:  
  - **If `nums[i] > target` → prune** (since array is sorted).  
  - Otherwise, choose `nums[i]`, recurse with `target - nums[i]`, and **allow `i` again** because reuse is allowed.  
  - After recursion, `pop_back()` to backtrack.  
- **When `target == 0`**, push current `path` into the result.  

---

### ⏱️ Complexity  

- **Time Complexity:**  
  Worst case is **exponential**, because you may explore many valid combinations.  
  - Sorting: `O(n log n)`  
  - Backtracking: in worst case `O((target / min) ^ k)` where `min` = smallest candidate  
  - Output-sensitive: depends on the number of valid combinations  

- **Space Complexity:**  
  - Recursion depth: `O(target / min(candidates))`  
  - `path` temporary space  
  - `_res` result storage (depends on output size)  

---

### ✅ Pros  
- Simple, clean recursion  
- Sorting enables strong pruning → avoids unnecessary recursion  
- Can handle large target values efficiently when pruning works  

---

### ❌ Cons  
- Still **exponential** in the worst case  
- If `candidates` has many small numbers (like `[1,2,3,...]`), pruning has little effect  
- Runtime highly depends on test data  

---