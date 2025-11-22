# 0870 – Advantage Shuffle

## 🧠 Idea

The task is to rearrange `nums1` to maximize the number of positions where: `nums1[i] > nums2[i]`

This can be solved with a greedy strategy inspired by **Tian Ji’s horse racing**.

Main insight:

1. Sort `nums1` in ascending order.
2. Pair each value in `nums2` with its index, then sort these pairs by value in descending order.
3. For each `(value, index)` in `nums2` from largest to smallest:
   - If `nums1[right]` can beat `value`, assign it.
   - Otherwise, assign `nums1[left]` as a sacrifice.

This guarantees the maximum number of advantageous comparisons.

---

## 🛠️ Key Points

- Sort `nums1` and use two pointers:
  - `left` → smallest remaining value  
  - `right` → largest remaining value
- Sort `nums2` while keeping original indices.
- Greedy rule:
  - **Use your strongest to beat their strongest.**
  - If you cannot win, **discard your weakest**.

---

## 💡 Intuition

This is the exact logic of “Tian Ji horse racing”:

- Use your best to defeat the opponent’s best when possible.
- When winning is impossible, sacrifice your weakest to preserve stronger numbers for future matchups.

By processing `nums2` from largest to smallest and picking from both ends of sorted `nums1`, each potential victory is secured optimally.

---

## ⏱️ Complexity

- **Time:** `O(n log n)`  
  Sorting `nums1` and sorting paired `nums2` values
- **Space:** `O(n)`  
  For the index-value pairs and the result array
