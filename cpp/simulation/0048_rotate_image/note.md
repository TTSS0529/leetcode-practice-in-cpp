# 0048 - Rotate Image

### 🧠 Idea  
Rotate the matrix **90 degrees clockwise** by performing two in-place operations:

1. **Transpose** the matrix over its main diagonal  
2. **Reverse each row** horizontally

This method avoids using extra space and cleanly decomposes the rotation into two simple steps.

---

### 🛠️ Key Points  
- Transposition swaps `matrix[i][j]` with `matrix[j][i]` for `i > j`.
- Row reversal swaps elements on both ends moving inward.
- Both operations are done **in-place**, so no extra memory is required.
- Avoids unnecessary rotations or copying by directly transforming the matrix structure.

---

### ⏱️ Complexity

| Metric     | Value     |
|------------|-----------|
| Time       | O(n²)     |
| Space      | O(1)      |

---

### 🆚 Summary

| Feature         | Your Solution         |
|------------------|-----------------------|
| Code Style       | Concise & readable    |
| Rotation Method  | Transpose + Reverse   |
| Performance      | ✅ 100% runtime       |
| Memory Usage     | ✅ In-place (O(1))     |
| Modularity       | ✅ Two clear steps     |
