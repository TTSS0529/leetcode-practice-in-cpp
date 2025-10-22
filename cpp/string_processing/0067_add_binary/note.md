# 0067 - Add Binary

### 🧠 Idea
We need to **add two binary strings** and return their sum, also as a binary string.  
This is analogous to how we perform **manual addition** — but in **base-2** instead of base-10.

---

### 🛠️ Key Points
- Process both strings from **right to left** (least significant bit to most).  
- Keep a variable `carry` to store the carry-over (0 or 1).  
- For each position:
  - Add corresponding bits from `a` and `b` (if any) plus the carry.
  - Append `(sum % 2)` to the result string.
  - Update `carry = sum / 2`.
- Reverse the result at the end since we build it from the least significant bit first.

---

### 💡 Intuition
Think of how you’d add two decimal numbers by hand:
You add from right to left, keeping track of any carry.  
The same logic applies here, except each digit can only be `0` or `1`.

This implementation reverses both strings at the start to simplify iteration,  
so you can just move forward instead of manually indexing from the end.

---

### ⏱️ Complexity
- **Time:** `O(max(m, n))` — we iterate once over both strings.  
- **Space:** `O(max(m, n))` — result string grows up to one digit longer than the longer input.  
