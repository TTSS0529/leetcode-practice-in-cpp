# 0006 - Zigzag Conversion

### 🧠 Idea  
Simulate the zigzag writing process using a row-wise buffer.  
Track the current row and the direction (up/down), and append each character to the correct row string. After the traversal, join all rows to get the final result.

---

### 🛠️ Key Points  
- Use `std::vector<std::string>` to store each row's characters.
- Switch direction when reaching the top or bottom row.
- Use `reserve(s.size())` to avoid reallocations when building the final string.

---

### ⏱️ Complexity  
- **Time**: O(n), each character is processed once  
- **Space**: O(n), for storing zigzag rows and the result

---

### ✅ Final Version (100% runtime)