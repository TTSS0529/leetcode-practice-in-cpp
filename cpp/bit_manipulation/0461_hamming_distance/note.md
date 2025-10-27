# 0461 - Hamming Distance  

### 🧠 Idea  
We need to count how many bit positions differ between two integers `x` and `y`.  

👉 The trick is to use **bitwise XOR (`^`)** — it highlights all differing bits as 1s.  
Then, repeatedly remove the lowest set bit using **Brian Kernighan’s algorithm** (`tmp &= tmp - 1`) to count them efficiently.  

---

### 🛠️ Key Points  
- `x ^ y` → bits set to 1 indicate differences between `x` and `y`.  
- `tmp &= tmp - 1` → removes the lowest set bit in each loop iteration.  
- Each loop iteration counts one differing bit.  

---

### 💡 Intuition  
Instead of checking every bit individually, we can directly jump from one set bit to the next using bit manipulation.  
This makes the counting process faster than the naïve shift-and-check approach.  

---

### ⏱️ Complexity  
- **Time:** O(k), where *k* is the number of set bits in `x ^ y`.  
- **Space:** O(1), constant auxiliary space.  
