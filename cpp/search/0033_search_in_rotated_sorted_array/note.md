# 0033 - Search in Rotated Sorted Array

## 🧠 Idea

Search for a target in a rotated sorted array using **binary search with rotation awareness**:

- The array is **sorted but rotated** at some pivot.
- Use binary search to locate the target without fully unrotating or merging arrays.
- At each step, determine whether the target lies in the **left sorted portion** or **right sorted portion**.

---

## 🔁 Step-by-step

1. **Initialize binary search**  
   - `left = 0`, `right = n - 1`  

2. **Binary search iteration**  
   - Compute middle index: `middle = left + (right - left) / 2`
   - If `nums[middle] == target` → return index
   - Otherwise, determine which side is sorted:
     - **Left sorted portion:** `nums[middle] < nums[right]`
     - **Right sorted portion:** `nums[middle] > nums[right]`
   - Decide which half to continue searching based on where `target` lies relative to the sorted portion.

3. **Loop until found**  
   - Adjust `left` or `right` accordingly.
   - If not found, return `-1`.

---

## 🛠️ Key Points

- Compare `nums[middle]` with `nums[right]` to detect the sorted half.
- Adjust the search boundary carefully to avoid missing the pivot.
- Works in **O(log n)** time since each step halves the search space.
- No extra space needed (O(1) space).

---

## ⏱️ Complexity

- **Time:** O(log n) — standard binary search on rotated array.  
- **Space:** O(1) — only indices and temporary variables used.
