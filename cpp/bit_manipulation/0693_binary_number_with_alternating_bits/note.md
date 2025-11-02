# 0693 - Binary Number with Alternating Bits

## 🧠 Idea  
We need to determine whether a number’s binary representation has **alternating bits** — that is, no two adjacent bits are the same.  
Instead of checking each bit individually, we can use properties of bit patterns to verify this efficiently.

---

## 🛠️ Key Points  
- A number with alternating bits will produce a **consistent pattern** when compared with a shifted version of itself.  
- This pattern can be checked in constant time using **bitwise properties**, without iterating through every bit.  
- The method avoids loops and extra space by leveraging the structure of alternating-bit numbers.

---

## 💡 Intuition  
Think of alternating bits as a repeating 0-1 sequence.  
By transforming the number, we can detect whether it forms a **continuous sequence pattern**,  
and any deviation immediately indicates non-alternating bits.

---

## ⏱️ Complexity  
- **Time:** `O(1)` — uses a fixed number of operations regardless of the number size.  
- **Space:** `O(1)` — no extra storage needed.
