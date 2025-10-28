# 0190 - Reverse Bits

### 🧠 Idea  
We need to **reverse the bits** of a 32-bit unsigned integer `n`.  

👉 The trick is to process each bit from the least significant to the most significant, and **construct the reversed number** by shifting `res` left and adding the current bit of `n`.  

---

### 🛠️ Key Points  
- Iterate 32 times (for each bit in a 32-bit integer).  
- `res <<= 1` → make space for the next bit.  
- `res += n & 1` → add the least significant bit of `n` to `res`.  
- `n >>= 1` → move to the next bit of `n`.  

---

### 💡 Intuition  
Think of it as **building the reversed number bit by bit**:  
- Take the rightmost bit of `n` and append it to the left of `res`.  
- Repeat until all bits are processed.  

---

### ⏱️ Complexity  
- **Time:** O(32) → constant, since we always process 32 bits.  
- **Space:** O(1), constant auxiliary space.  
