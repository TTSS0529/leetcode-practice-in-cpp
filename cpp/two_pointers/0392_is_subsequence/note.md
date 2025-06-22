# 0392 - Is Subsequence

### 🧠 Idea  
Use two pointers: one for string `s`, and one for string `t`.  
Move both forward. Advance `s` only when characters match.  
If all characters in `s` are matched in order, then it's a subsequence.

### 🛠️ Key Points  
- Iterate through `t`, only increment `s` pointer on match.  
- Early exit is built-in when either string is fully processed.  
- Efficient and easy to understand.

### ⏱️ Complexity  
- Time: O(n), where n = length of `t`  
- Space: O(1)

---

## 🆚 Summary

| Feature            | Version 1              |
|--------------------|------------------------|
| Code Simplicity    | Very High              |
| Performance        | Excellent              |
| Memory Usage       | O(1)                   |
| Applicable To      | Ordered character matching |
| LeetCode Runtime   | 100%                   |
