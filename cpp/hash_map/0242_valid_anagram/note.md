# 0242 - Valid Anagram

### 🧠 Idea  
Use a fixed-size array to count letter frequencies. Increment for `s`, decrement for `t`.  
If all counts end at zero, the strings are anagrams.

### 🛠️ Key Points  
- Pre-check: if lengths differ, return `false` immediately.  
- Use `charCount[26]` as a frequency map for lowercase letters.  
- Traverse both strings in one loop for better performance.

### ⏱️ Complexity  
- Time: O(n)  
- Space: O(1) (fixed 26-size array)
