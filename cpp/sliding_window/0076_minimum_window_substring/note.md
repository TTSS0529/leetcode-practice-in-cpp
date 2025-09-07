# 0076 - Minimum Window Substring

## 🧠 Idea

We are asked to find the **smallest substring** in `s` that contains **all characters** of `t` (including duplicates).

Constraints:
- Characters in `t` may repeat, so the window must contain them with the same frequency.
- The order does not matter, only inclusion.

**Key insight:**
- This is a classic **sliding window** problem.
- We expand the right pointer until the window contains all required characters,  
  then contract the left pointer to minimize the window.

---

## 🔁 Step-by-step

1. **Preprocessing `t`:**
   - Use an array `count[256]` to store how many times each character appears in `t`.
   - Use `flag[256]` to mark which characters are needed.

2. **Sliding window:**
   - Expand `right` over `s`:
     - If `s[right]` is required, decrement its `count`.
     - If `count[c] >= 0`, we have matched one occurrence → increment `num_in`.

   - When `num_in == t.size()`:
     - Try to shrink the window from `left`:
       - Update the minimum length answer.
       - If `s[left]` is required and removing it breaks the condition (`count > 0`), decrement `num_in`.
       - Move `left` forward.

3. Continue until the end of `s`.

4. Return the smallest window found, or `""` if no valid window exists.

---

## 🛠️ Key Points

- **Two arrays:**  
  - `count`: remaining required characters.  
  - `flag`: quick check whether a character matters.
- **Sliding window with balance check (`num_in`).**
- **Shrink as much as possible** once all requirements are met → ensures minimal window.

---

## ⏱️ Complexity

- **Time:** O(m + n) — each character is visited at most twice (once by `right`, once by `left`).  
- **Space:** O(1) — fixed array size (256 for ASCII).
