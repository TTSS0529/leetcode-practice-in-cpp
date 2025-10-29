# 0342 - Power of Four

### 🧠 Idea  
We need to **check if an integer `n` is a power of four**.  

👉 The trick is to combine **power-of-two check** with **bit-position check**:  
1. `n > 0` → only positive numbers can be powers of four.  
2. `!(n & (n - 1))` → ensures `n` is a **power of two** (only one bit is set).  
3. `n & 0x55555555` → ensures that the single set bit is at an **odd position** (1, 3, 5…) which corresponds to powers of four in binary.  

---

### 🛠️ Key Points  
- `n & (n - 1) == 0` → classic power-of-two check.  
- `0x55555555` → binary: `01010101010101010101010101010101`, masks bits at positions for powers of four.  
- Combine all conditions with `&&` → concise one-liner.  

---

### 💡 Intuition  
- Powers of four in binary: `1, 100, 10000, 1000000…`  
- Only **one bit is set**, and it’s always in an **odd index** (counting from 0).  
- By checking both, we **filter out powers of two that are not powers of four**.  

---

### ⏱️ Complexity  
- **Time:** O(1) → all operations are constant time bitwise ops.  
- **Space:** O(1) → only uses a few integer variables.  
