# 0004 - Median of Two Sorted Arrays

## 🧠 Idea

Find the median of two sorted arrays `nums1` and `nums2` without fully merging them.  
We solve this with **binary search on the partition index**:

- **Binary search on the shorter array** to ensure O(log(min(m, n))) complexity.
- **Partition arrays** so that the left halves of `nums1` and `nums2` together contain `(m + n + 1) / 2` elements.
- Ensure **all elements in the left halves ≤ all elements in the right halves**.
- Once a valid partition is found, the median is:
  - The maximum of left halves if total length is odd.
  - The average of the max of left halves and min of right halves if total length is even.

---

## 🔁 Step-by-step

1. **Preprocessing**
   - Determine lengths `m` and `n`.
   - If `nums1` is longer, swap arrays to make it the shorter one.

2. **Binary Search**
   - Initialize `left = 0` and `right = m` (size of shorter array).
   - At each iteration, choose a cut `i` in `nums1` and compute corresponding `j` in `nums2`:
     ```
     j = (m + n + 1) / 2 - i
     ```
   - Compare boundary elements around the cuts to check validity:
     - Left max ≤ Right min on both arrays.
   - Adjust the search range until a valid partition is found.

3. **Edge Handling**
   - Use sentinel values (like INT_MIN / INT_MAX) to handle cases when a cut is at array boundaries.
   - If one array is empty, the median comes from the other array.
   - Both arrays empty → median undefined (throw exception or return special value).

---

## 🛠️ Key Points

- Binary search is performed on the **shorter array** for efficiency.
- **Partition condition** encodes "all left ≤ all right" without merging arrays.
- Sentinels avoid out-of-bounds checks.
- Works for both **odd and even total length**.
- Minimal extra space (O(1)) and optimal time complexity.

---

## ⏱️ Complexity

- **Time:** O(log(min(m, n))) — binary search on the shorter array.
- **Space:** O(1) — only a few variables used for partition indices and boundaries.
