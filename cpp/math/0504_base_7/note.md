# 0504 - Base 7

### 🧠 Idea
We need to **convert an integer to its base-7 representation**.  
This is a standard base conversion problem — repeatedly divide the number by `7` and record the remainders.

---

### 🛠️ Key Points
- Handle the **sign** first — if the number is negative, remember it and convert its absolute value.  
- Repeatedly:  
  - Take `num % 7` to get the current digit.  
  - Append it to the result string.  
  - Divide `num` by `7` to move to the next digit.  
- Since digits are generated from least significant to most significant, **reverse** the string at the end.  
- If the number was negative, prepend `'-'`.  
- Special case: if the input is `0`, return `"0"` directly.

---

### 💡 Intuition
Base conversion is essentially **expressing a number using powers of 7**:  
\[
num = d_k \times 7^k + d_{k-1} \times 7^{k-1} + \dots + d_0
\]  
By taking successive remainders (`num % 7`), we extract each `d_i` from least to most significant digit.  
Reversing the collected digits gives the correct base-7 representation.

---

### ⏱️ Complexity
- **Time:** `O(log₇ n)` — each step divides by 7 once.  
- **Space:** `O(log₇ n)` — for the resulting string.
