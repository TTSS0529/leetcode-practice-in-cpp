# 0476 - Number Complement

## 🧠 Idea  
We need to find the **bitwise complement** of a given positive integer —  
that is, flip all bits **only within its significant binary length** (ignore leading zeros).

---

## 🛠️ Key Points  
- The complement should **not include leading zeros**, so we must first identify the range of significant bits.  
- To do this, we build a **bitmask** consisting of all `1`s that cover the same number of bits as `num`.  
- Then, apply `~num & mask` to flip only the relevant bits.

---

## 💡 Intuition  
Imagine `num = 101` (binary for `5`).  
The mask `111` ensures we only flip those three bits:  
```
num = 101
~num = ...11111010
mask = 000000111
result = ~num & mask = 010 → 2
```
This way, we avoid touching the higher unused bits.

---

## ⏱️ Complexity  
- **Time:** `O(1)` — only a few bitwise operations are needed.  
- **Space:** `O(1)` — no extra storage required.  

