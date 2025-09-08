# 0633 - Sum of Square Numbers

## 🧠 Idea

We are asked to determine if there exist **two integers** `a` and `b` such that:  

\[
a^2 + b^2 = c
\]

Constraints:
- `0 <= c <= 2^31 - 1`
- `a` and `b` are **non-negative integers**.

**Key insight:**
- This is essentially checking if `c` can be expressed as the sum of two squares.  
- A brute-force check up to `c` would be too slow.  
- Instead, use a **two-pointer approach**:
  - Let `left = 0` and `right = floor(sqrt(c))`.
  - Compute `sum = left^2 + right^2`.
  - Move pointers based on comparison with `c`.

---

## 🔁 Step-by-step

1. Initialize:
   - `left = 0`
   - `right = floor(sqrt(c))`

2. While `left <= right`:
   - Compute `sum = left^2 + right^2`.
   - If `sum == c`, return `true`.
   - If `sum < c`, increase `left` (to make `sum` larger).
   - If `sum > c`, decrease `right` (to make `sum` smaller).

3. If no pair found, return `false`.

---

## 🛠️ Key Points

- **Two-pointer search:** Efficiently narrows down possible values of `a` and `b`.  
- **Bounds:** No need to check beyond `sqrt(c)`, since both squares must be ≤ `c`.  
- **Overflow handling:** Use `long long` to avoid overflow when squaring.  

---

## ⏱️ Complexity

- **Time:** O(√c) — in the worst case, we move `left` from `0` to `√c`.  
- **Space:** O(1) — only a few variables used.  
