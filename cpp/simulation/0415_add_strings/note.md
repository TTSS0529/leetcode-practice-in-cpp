# 0415 - Add Strings

### 🧠 Idea  
Simulate manual addition of two non-negative integers represented as strings, starting from the rightmost digit.

Two approaches:
- **Brute-force**: Prepend each digit to the result and use `substr` to handle leftovers.
- **Optimized**: Append digits with `push_back`, then `reverse` at the end to improve efficiency.

---

### 🛠️ Key Points  
- `char + result` creates a new string every time → O(n²) time.
- `push_back` is O(1) and avoids repeated reallocations.
- Use `int carry` instead of `bool` for cleaner arithmetic.

---

### ⏱️ Complexity

| Version     | Time    | Space |
|-------------|---------|--------|
| Brute-force | O(n²)   | O(n)   |
| Optimized   | O(n)    | O(n)   |

---

### 🆚 Summary

| Feature         | Brute-force        | Optimized           |
|------------------|---------------------|------------------------|
| Code Simplicity  | ✅                  | ✅                    |
| Performance      | ❌ (slow due to prepend) | ✅ (fast with `push_back`) |
| LeetCode Runtime | ~11%               | 100%             |

---
