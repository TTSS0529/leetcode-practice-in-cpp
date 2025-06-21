# 0205 - Isomorphic Strings

## ✅ Version 1: `unordered_map`

### 🧠 Idea  
Use two hash maps to track `s -> t` and `t -> s` mappings. Ensure mapping consistency at each step.

### 🛠️ Key Points  
- Check both forward and reverse mapping.  
- Add mappings only when consistent.  
- Handles all characters, not just ASCII.

### ⏱️ Complexity  
- Time: O(n)  
- Space: O(n)

---

## ✅ Version 2: Fixed-Size Array (Optimized)

### 🧠 Idea  
Use two 256-size arrays to track last seen indices of characters.  
Assign `i + 1` to avoid conflict with default zero values.

### 🛠️ Key Points  
- Use `unsigned char` to avoid negative index issues.  
- Compare and update both arrays at each index.  
- Extremely fast due to fixed-size constant-time access.

### ⏱️ Complexity  
- Time: O(n)  
- Space: O(1)

---

## 🆚 Summary

| Feature            | `unordered_map` Version | Fixed-Size Array Version |
|--------------------|--------------------------|---------------------------|
| Code Simplicity    | Moderate                 | High                      |
| Performance        | Good                     | Excellent                 |
| Memory Usage       | O(n)                     | O(1)                      |
| Character Support  | All (ASCII & Unicode)    | ASCII only (256 chars)    |
| LeetCode Runtime   | ~40–60%                  | ~100%                     |
