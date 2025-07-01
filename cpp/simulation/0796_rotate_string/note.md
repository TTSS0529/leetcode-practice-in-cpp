# 0796 - Rotate String

### 🧠 Idea  
Repeatedly find occurrences of `s[0]` in `goal`, and check if rotating `goal` from that position matches `s`.  
Instead of concatenating strings (`s + s`) to check rotations, this solution simulates the rotation by comparing characters with circular indexing.

---

### 🛠️ Key Points  
- Check length equality first, return false immediately if lengths differ.  
- Use `goal.find(s[0], pos + 1)` to find next potential rotation start position efficiently.  
- Simulate rotation by comparing each character of `s` to corresponding rotated position in `goal`.  
- Avoid extra memory allocation from string concatenation.

---

### ⏱️ Complexity

| Metric        | Complexity             |
|---------------|-----------------------|
| Time          | O(n²) worst case      |
| Space         | O(1) constant extra   |

---

### 🆚 Summary

| Feature            | This Solution          | Common Alternative (`s+s` trick) |
|--------------------|-----------------------|----------------------------------|
| Code Complexity    | Moderate (manual loop) | Simple (one-liner with `find`)   |
| Memory Usage      | Constant extra space   | O(n) extra space for `s+s`       |
| Runtime Performance | 100% (very efficient) | Typically very fast as well       |

---