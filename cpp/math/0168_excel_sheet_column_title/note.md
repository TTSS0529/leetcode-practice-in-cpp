# 0168 - Excel Sheet Column Title

### 🧠 Idea
We need to **convert a given positive integer into its corresponding Excel column title**, where:  
`1 → A`, `2 → B`, …, `26 → Z`, `27 → AA`, `28 → AB`, etc.  

This is essentially a **base-26 conversion problem**, but with a **1-based system** instead of the usual 0-based numbering.

---

### 🛠️ Key Points
- Excel columns follow a **26-letter alphabet system**, using `A–Z`.  
- Unlike standard base-26, there is **no zero digit** — meaning `A` corresponds to `1` instead of `0`.  
- Therefore, before each division, we must **subtract 1** to align it with 0-based indexing.  
- Append the character corresponding to `(columnNumber - 1) % 26`, then divide by 26.  
- Reverse the resulting string since we build it from least significant to most significant “digit”.

---

### 💡 Intuition
Think of the number as being represented in “Excel base-26”:  
- When `columnNumber = 1`, → `A`  
- When `columnNumber = 26`, → `Z`  
- When `columnNumber = 27`, → `AA`  

Each step extracts the rightmost “digit” (`A–Z`) and reduces the number, similar to how you convert numbers to binary or hexadecimal — except here, the alphabet starts at 1 instead of 0.

---

### ⏱️ Complexity
- **Time:** `O(log₍26₎n)` — each iteration divides the number by 26.  
- **Space:** `O(1)` — only uses a few extra variables for the result string.  
