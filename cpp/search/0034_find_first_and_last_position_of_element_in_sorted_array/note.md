# 0034 - Find First and Last Position of Element in Sorted Array

## 🧠 Idea

Find the **first** and **last** occurrence of a target in a sorted array using **two binary searches**:

- The array is sorted in ascending order.
- Use one binary search to locate the **left boundary** (first occurrence).
- Use another binary search to locate the **right boundary** (last occurrence).

---

## 🔁 Step-by-step

1. **Check empty array**  
   - If `n == 0`, return `[-1, -1]`.

2. **Find left boundary (first occurrence)**  
   - Initialize `left = 0`, `right = n - 1`.
   - While `left <= right`:
     - Compute `mid = left + (right - left) / 2`.
     - If `target > nums[mid]` → search right half (`left = mid + 1`).
     - Else → move left (`right = mid - 1`).
   - After loop, `left` points to first position where `nums[left] >= target`.
   - If `nums[left] != target`, return `[-1, -1]`.

3. **Find right boundary (last occurrence)**  
   - Reset `left = 0`, `right = n - 1`.
   - While `left <= right`:
     - Compute `mid = left + (right - left) / 2`.
     - If `target >= nums[mid]` → search right half (`left = mid + 1`).
     - Else → move left (`right = mid - 1`).
   - After loop, `left - 1` is the last position where `nums[index] == target`.

4. **Return results**  
   - Return `[first_index, last_index]`.

---

## 🛠️ Key Points

- Two binary searches:
  - **Left boundary search:** stop when you find the first `target`.
  - **Right boundary search:** stop when you find the last `target`.
- Avoid early return after finding `target` — continue until boundaries are located.
- Works in **O(log n)** time.

---

## ⏱️ Complexity

- **Time:** O(log n) — two binary searches on a sorted array.  
- **Space:** O(1) — only index variables used.
