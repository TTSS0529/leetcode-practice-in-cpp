# 0240 - Search a 2D Matrix II

## 🧠 Idea

Each row is sorted left-to-right and each column is sorted top-to-bottom.  
This monotonic property allows a linear-time search:

- Start from the **top-right** corner.
  - If the current number is greater than target → move **left** (column--).
  - If smaller than target → move **down** (row++).
  - If equal → found.

This way we eliminate one row or one column each step.

---

## 🛠️ Key Points

- Greedy-like scanning by using matrix monotonicity.
- Much faster than scanning all elements.
- Avoids binary search in every row (which would be O(m log n)).

---

## ⏱️ Complexity

- **Time:** `O(m + n)`
- **Space:** `O(1)`
