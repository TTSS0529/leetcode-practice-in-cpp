# 0088 - Merge Sorted Array

## 🧠 Idea

We are asked to **merge two sorted arrays** `nums1` and `nums2` into a single sorted array.  
The merged result should be stored in `nums1`.

Constraints:
- `nums1` has a size of `m + n`, with the first `m` elements valid and the rest filled with `0`.
- `nums2` has `n` elements.
- Both arrays are already sorted in **non-decreasing order**.

**Key insight:**
- If we start filling `nums1` **from the back**, we avoid overwriting elements that we still need to compare.
- Always place the **largest element** (from `nums1[m-1]` or `nums2[n-1]`) at the current position `pos`.

---

## 🔁 Step-by-step

1. Initialize three pointers:
   - `m` → last valid element in `nums1`.
   - `n` → last element in `nums2`.
   - `pos` → last position in `nums1`.

2. While both `m` and `n` are valid:
   - Compare `nums1[m]` and `nums2[n]`.
   - Place the larger one at `nums1[pos]`.
   - Move the pointer (`m` or `n`) and decrement `pos`.

3. If elements remain in `nums2`, copy them into `nums1`.  
   (No need to handle leftover `nums1`, because they are already in place.)

---

## 🛠️ Key Points

- **Backward merge:** Avoids shifting elements inside `nums1`.  
- **In-place:** No extra array needed.  
- **Only copy `nums2` remainder:** If any elements of `nums2` are left, they are smaller than everything else already placed.

---

## ⏱️ Complexity

- **Time:** O(m + n) — each element is processed once.  
- **Space:** O(1) — constant extra space.
