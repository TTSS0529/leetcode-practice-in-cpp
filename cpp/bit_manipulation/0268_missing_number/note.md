# 0268 - Missing Number

## 🧠 Idea  
We need to find the **missing number** in a sequence containing all numbers from `0` to `n`, except one.  
Instead of using extra space or sorting, we can exploit the properties of **XOR** to find it efficiently.

---

## 🛠️ Key Points  
- XOR has two key properties:  
  1. `a ^ a = 0` — a number XORed with itself cancels out.  
  2. `a ^ 0 = a` — XOR with zero leaves the number unchanged.  
- By XORing all indices `[0..n]` and all elements in `nums`,  
  every number that appears twice will cancel out, leaving only the **missing one**.

---

## 💡 Intuition  
Think of XOR as a "pair-cancelling" operation:  
- Numbers that appear in both sequences (index and value) neutralize each other.  
- The only number without a pair is the missing one — that’s what remains after all XORs.  
This avoids any summation overflow and uses pure bit manipulation logic.

---

## ⏱️ Complexity  
- **Time:** `O(n)` — single pass through the array.  
- **Space:** `O(1)` — only one accumulator variable.
