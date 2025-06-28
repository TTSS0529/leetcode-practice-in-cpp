# 0003 - Longest Substring Without Repeating Characters

### 🧠 Idea  
Three approaches to find the **length of the longest substring without repeating characters**:  
- **Brute-force**: Try every start index and expand the substring until a duplicate is found.  
- **Sliding Window + Hash Map**: Use a hash map to track the last seen position of each character.  
- **Sliding Window + Fixed Array**: Replace map with an ASCII array for better performance.

---

### 🛠️ Key Points  
- Brute-force is easy to implement but has O(n²) time complexity.  
- Hash map version improves performance to O(n), suitable for any character set.  
- Array version is the fastest if input is ASCII-only (256 chars), with better cache efficiency.  
- `i` represents the **left bound** of the valid window, `j` is the right bound (inclusive).

---

### ⏱️ Complexity  
- Brute-force:  
  - Time: O(n²)  
  - Space: O(1)  
- Map-based sliding window:  
  - Time: O(n)  
  - Space: O(n)  
- Array-based sliding window:  
  - Time: O(n)  
  - Space: O(1) (fixed 256 size)

---

## 🆚 Summary

| Feature            | Brute-force Version     | Sliding Window + Map     | Sliding Window + Array     |
|--------------------|--------------------------|---------------------------|-----------------------------|
| Code Simplicity    | High                     | Medium                    | Medium                      |
| Performance        | Slow (O(n²))             | Fast (O(n))               | Fastest (O(n), best cache)  |
| Memory Usage       | O(1)                     | O(n)                      | O(1)                        |
| Applicable To      | Any strings              | Any character set         | ASCII input                 |
| LeetCode Runtime   | ~50%                     | ~70%                      | ~100%                       |
