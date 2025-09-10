# 0081 - Search in Rotated Sorted Array II

## 🧠 Idea

We are asked to determine whether a **target integer exists** in a **rotated sorted array** that may contain **duplicates**.  

Constraints:  
- `1 <= nums.length <= 5000`  
- `-10⁴ <= nums[i], target <= 10⁴`  

**Key insights:**  
- The array is **rotated**, but each part is still sorted.  
- **Duplicates** complicate the usual binary search because `nums[mid] == nums[right]` may happen, making it unclear which side is sorted.  
- A **modified binary search** can handle this by carefully checking ranges and shrinking the search space.  

---

## 🔁 Step-by-step

1. Initialize search range: `left = 0`, `right = nums.size() - 1`.  
2. While `left <= right`:  
   - Compute middle: `middle = left + (right - left) / 2`.  
   - If `nums[middle] == target`, return `true`.  
   - If `nums[middle] == nums[right]`, **decrement `right`** to skip duplicates.  
   - Else if `nums[middle] > nums[right]` (left half is sorted):  
     - If `target > nums[middle]` **or** `target < nums[left]`, move `left = middle + 1`.  
     - Else, move `right = middle - 1`.  
   - Else (right half is sorted):  
     - If `target < nums[middle]` **or** `target > nums[right]`, move `right = middle - 1`.  
     - Else, move `left = middle + 1`.  
3. If the loop ends without finding the target, return `false`.  

---

## 🛠️ Key Points

- **Handling duplicates**: when `nums[mid] == nums[right]`, we cannot determine which side is sorted; safely shrink the search by `--right`.  
- **Binary search in rotated array**: always check which half is sorted to decide search direction.  
- Careful comparison using both `left` and `right` ensures correct bounds even with rotation.  

---

## ⏱️ Complexity

- **Time:** `O(n)` in the worst case (all elements are duplicates),  
  **O(log n)** on average for distinct elements.  
- **Space:** `O(1)`  
  - Only a few variables are used.  
