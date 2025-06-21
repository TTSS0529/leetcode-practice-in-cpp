# 0409 - Longest Palindrome

## ✅ Version 1: Fixed-Size Array (ASCII Count)

### 🧠 Idea  
Count the frequency of each character using a 256-size array (ASCII).  
For each character, we can use the even part of its frequency to contribute to the palindrome.  
If there's at least one odd count, we can add one more character in the center.

### 🛠️ Key Points  
- Use a fixed-size array `count[256]` to store character frequencies.  
- `result += (count / 2) * 2` ensures we use only even counts.  
- Track if any odd count exists to add a center character.  
- Works well with all ASCII characters.

### ⏱️ Complexity  
- Time: O(n)  
- Space: O(1) (since array size is constant 256)

---

## 🆚 Summary

| Feature            | Version 1               |
|--------------------|--------------------------|
| Code Simplicity    | High                     |
| Performance        | Excellent                |
| Memory Usage       | O(1)                     |
| Character Support  | ASCII (256 chars)        |
| LeetCode Runtime   | 100%                     |
