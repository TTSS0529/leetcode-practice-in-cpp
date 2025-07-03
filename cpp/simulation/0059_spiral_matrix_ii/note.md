# 0059 - Spiral Matrix II

### 🧠 Idea  
Simulate filling the matrix layer by layer in spiral order using four boundary pointers: `up`, `down`, `left`, `right`.

Each step fills one edge:
- Go **right** across the top row
- Go **down** the right column
- Go **left** across the bottom row
- Go **up** the left column

After each direction, shrink the corresponding boundary.

---

### 🛠️ Key Points  
- Use `element` counter to track current value from 1 to n².
- Matrix is initialized with `n` empty rows, then resized to `n x n`.
- Exit early using boundary conditions after each move.
- `while (true)` loop simplifies boundary checks by breaking explicitly.

---

### ⏱️ Complexity

| Metric     | Value     |
|------------|-----------|
| Time       | O(n²)     |
| Space      | O(n²)     |

---

### 🆚 Summary

| Feature         | Your Solution       |
|------------------|---------------------|
| Code Style       | Clean and intuitive |
| Boundaries       | Explicitly managed  |
| Performance      | ✅ 100% runtime     |
| Readability      | ✅ Easy to follow   |
| Matrix Init      | Manual row resize   |

---
