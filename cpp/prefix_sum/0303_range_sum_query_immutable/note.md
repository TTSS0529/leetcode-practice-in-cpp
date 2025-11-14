# 0303 - Range Sum Query – Immutable

## 🧠 Idea
We are given an immutable array and need to answer many queries of the form  
`sumRange(left, right)`.  
A naive approach sums the range each time (`O(n)` per query), which is too slow for many queries.

A better approach:  
👉 **Precompute prefix sums so every query can be answered in `O(1)`.**

---

## 🛠️ Key Points
- Build a prefix sum array `_pre` of length `n + 1`.
  - `_pre[i]` stores the sum of `nums[0..i-1]`.
- Then any range sum can be computed with:
  \[
  \text{sumRange}(l, r) = \_pre[r + 1] - \_pre[l]
  \]
- `std::partial_sum` provides a clean way to build prefix sums.

---

## 💡 Intuition
When computing many range sums, the repeated work is in recalculating overlapping segments.  
Prefix sum intuition:

- Precompute cumulative sums from the beginning of the array.
- For any range `[l, r]`, subtracting two prefix sums gives the answer in constant time.

---

## ⏱️ Complexity  
- **Time:**
  - Preprocessing: `O(n)`
  - Query: `O(1)`
- **Space:** `O(n)` — for the prefix sum array.
