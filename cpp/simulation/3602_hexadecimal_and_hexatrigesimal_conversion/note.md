# 3602 - Hex + Base36 Conversion

### 🧠 Idea  
Given an integer `n`, convert `n²` into its **hexadecimal** representation (base-16 using `0-9A-F`) and `n³` into **base-36** representation (using `0-9A-Z`), then concatenate the two results.

The contest version uses **manual digit placement** (highest digit first) by finding the largest power of base that fits. The optimized version uses the standard `%` and `/` approach with reversal.

---

### 🛠️ Key Points  
- Use **two distinct digit sets** for base-16 and base-36 conversion.  
- Handle `n == 0` edge case directly as `"00"`.  
- Optimized version reuses one base conversion pattern for both parts.  
- Contest version avoids `reverse()` by placing high digits first, but more verbose.

---

### ⏱️ Complexity

| Metric        | Complexity         |
|---------------|--------------------|
| Time          | O(log n)           |
| Space         | O(log n)           |

---

### 🆚 Summary

| Feature             | Contest Version                | Optimized Version            |
|---------------------|--------------------------------|------------------------------|
| Logic               | Manual digit placement (div)   | `%` + `/` + `reverse()`      |
| Code Length         | Longer and more manual         | Shorter and idiomatic        |
| Readability         | Slightly harder to follow      | Clear and standard           |
| Performance         | Equivalent                     | Equivalent                   |

---
