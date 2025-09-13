# 0540 - Single Element in a Sorted Array

## 🧠 Idea

We are asked to find the **single element** in a **sorted array** where **every other element appears exactly twice**.  

Constraints:  
- `1 <= nums.length <= 10^5`  
- Each element appears **exactly twice**, except one.  
- The array is **sorted**.  

**Key insights:**  
- If there were no single element, then pairs would always occupy **even/odd indices** `(0-1, 2-3, 4-5, …)`.  
- The **single element breaks this pattern**.  
- Using **binary search**, we can locate the anomaly in `O(log n)`.  

---

## 🔁 Step-by-step

1. Initialize search range: `left = 0`, `right = nums.size() - 1`.  
2. While `left < right`:  
   - Compute `middle = left + (right - left) / 2`.  
   - Ensure `middle` is **even** (so it points to the first index of a pair). If not, decrement by 1.  
   - If `nums[middle] == nums[middle + 1]`:  
     - Pair is valid → move search to the **right half**: `left = middle + 2`.  
   - Else:  
     - Pair is broken → move search to the **left half**: `right = middle`.  
3. Loop ends when `left == right`, which must be the single element.  

---

## 🛠️ Key Points

- **Pairing property:** before the single element, pairs align at `(even, odd)` indices; after it, the alignment shifts.  
- **Binary search:** by checking pair validity, we can discard half of the array each step.  
- **Guarantee:** problem constraints ensure exactly one unique element exists.  

---

## ⏱️ Complexity

- **Time:** `O(log n)` — binary search halves the array each iteration.  
- **Space:** `O(1)` — only uses a few variables.  
