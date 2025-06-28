# 0151 - Reverse Words in a String

### 🧠 Idea  
Reverse the order of words in a string, removing extra spaces.  
Two approaches:
- **Brute-force**: scan from the end of the string using `substr` to extract words and build the result step by step.
- **Optimized**: same logic, but use `reserve()` to preallocate memory for the result string to avoid repeated reallocations during concatenation.

---

### 🛠️ Key Points  
- Both methods scan from the end toward the beginning of the string.
- Instead of splitting the whole string, words are extracted one at a time (“lazy extraction”).
- This is not a traditional two-pointer technique, but a **range-based backward scan** using character search functions (`find_last_of`, `find_last_not_of`).
- Optimized version improves performance by calling `result.reserve(s.size())` to prevent repeated memory allocation.

---

### ⏱️ Complexity  
- Brute-force:  
  - Time: O(n²) in worst case (due to repeated reallocations)  
  - Space: O(n)  
- Optimized (with `reserve`):  
  - Time: O(n)  
  - Space: O(n)

---

## 🆚 Summary

| Feature            | Brute-force Version              | Optimized Version (`reserve`)   |
|--------------------|----------------------------------|----------------------------------|
| Code Simplicity    | High                             | High                             |
| Performance        | Medium                           | Excellent                        |
| Memory Usage       | O(n), with possible reallocs     | O(n), with single allocation     |
| Applicable To      | Any string with extra spaces     | Same                             |
| LeetCode Runtime   | ~30%                             | 100%                             |
