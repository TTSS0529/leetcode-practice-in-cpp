# 0035 - Search Insert Position

## 🧠 Idea

We need to find the index where `target` should be inserted in a **sorted array** `nums`.  

- If `target` exists → return its index.  
- If not → return the index where it should be inserted to keep the array sorted.  
- This is essentially a **lower_bound** problem.

---

## 🔁 Step-by-step

1. **Initialize boundaries**  
   - `left = 0`, `right = nums.size()` (notice `right` is exclusive).

2. **Binary search loop**  
   - While `left < right`:  
     - Compute middle index:  
       `middle = left + (right - left) / 2`
     - If `nums[middle] < target` → search in the **right half** (`left = middle + 1`).  
     - Otherwise → shrink the **right boundary** (`right = middle`).

3. **Return result**  
   - When the loop ends, `left == right`.  
   - This index is exactly the **insert position**.

---

## 🛠️ Key Points

- The algorithm finds the **first index ≥ target**.  
- Works even if `target` is smaller than all elements (returns `0`) or larger than all elements (returns `nums.size()`).  
- Equivalent to C++ STL function:  
  `lower_bound(nums.begin(), nums.end(), target) - nums.begin();`

---

## ⏱️ Complexity

- **Time:** O(log n) — binary search.  
- **Space:** O(1) — only a few integer variables.
