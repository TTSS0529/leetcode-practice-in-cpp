# 0704 - Binary Search

### 🧠 Idea  
Use **binary search** to find the target value in a sorted array in **logarithmic time**.  
This method halves the search space in each step, which is much faster than linear scan.

---

### 🛠️ Key Points  
- Maintain two pointers: `left` and `right` as the current search range.
- Compute the middle index using `left + (right - left) / 2` to **avoid overflow**.
- Compare the `middle` element with the `target`:
  - If less, search right half.
  - If greater, search left half.
  - If equal, return index.
- If not found, return `-1`.
- The loop condition is `left <= right`, ensuring all elements are checked.

---

### ⏱️ Complexity

| Metric     | Value       |
|------------|-------------|
| Time       | O(log n)    |
| Space      | O(1)        |

---

### 🆚 Summary

| Feature         | Your Solution           |
|------------------|-------------------------|
| Code Style       | Clear & standard        |
| Search Method    | Classic Binary Search   |
| Overflow-Safe    | ✅ Yes (`left + (right - left) / 2`) |
| Performance      | ✅ 100% runtime         |
| Memory Usage     | ✅ Constant space        |
| Robustness       | ✅ Handles all edge cases |

