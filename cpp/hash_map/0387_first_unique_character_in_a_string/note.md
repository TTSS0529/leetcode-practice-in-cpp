# 0387 - First Unique Character in a String

### 🧠 Idea  
Scan the string twice.  
1. First pass: count character frequencies using a 26-size array (optimized for lowercase letters).  
2. Second pass: return the index of the first character with count == 1.

### 🛠️ Key Points  
- Use `int count[26]` for fixed-size frequency map (faster than `unordered_map`).  
- Only works when input contains lowercase English letters (`a`-`z`).  
- `unordered_map<char, bool>` version is slower due to hashing overhead and dynamic memory.

### ⏱️ Complexity  
#### Array version:  
- Time: O(n)  
- Space: O(1)  

#### Map version:  
- Time: O(n) average, but worse due to hash and insert cost  
- Space: O(k), where `k` is the number of unique characters (up to 26)
