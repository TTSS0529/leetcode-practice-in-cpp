# 0153 - Find Minimum in Rotated Sorted Array

## 🧠 Idea

We are asked to find the **minimum element** in a rotated sorted array (with no duplicates).  

Key observations:  
- The array was originally sorted in ascending order, then rotated.  
- Therefore, the minimum element is the **rotation pivot** (the point where order breaks).  
- Using **binary search**, we can find this pivot in `O(log n)` time.  

---

## 🔁 Step-by-step

1. **Initialize two pointers**  
   - `left = 0`, `right = nums.size() - 1`.

2. **Binary search loop**  
   - While `left < right`:  
     - Compute `middle = left + (right - left) / 2`.  
     - Compare `nums[middle]` with `nums[right]`:
       - If `nums[middle] > nums[right]`:  
         → Minimum must be in the **right half**.  
         → Set `left = middle + 1`.  
       - Else:  
         → Minimum is in the **left half (including middle)**.  
         → Set `right = middle`.

3. **Loop ends**  
   - At this point, `left == right`.  
   - The minimum element is `nums[left]`.

---

## 🛠️ Key Points

- Why compare with `nums[right]`?  
  - Because the minimum must be on the side where the order breaks.  
  - If `nums[middle] > nums[right]`, the break is on the right side.  

- No duplicates → guarantees correctness of binary search.  

- Unlike normal binary search for a value, here we are searching for the **index of the minimum**.  

---

## ⏱️ Complexity

- **Time:** `O(log n)` → classic binary search.  
- **Space:** `O(1)` → constant space used.  

---
