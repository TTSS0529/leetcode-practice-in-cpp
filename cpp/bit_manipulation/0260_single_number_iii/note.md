# 0260 - Single Number III

## 🧠 Idea  
We are given an integer array where every element appears **twice** except for **two unique numbers** — we need to find those two numbers.

---

## 🛠️ Key Points  
- XOR all numbers → duplicates cancel each other out, leaving the XOR of the two unique numbers:  
  `xor_all = a ^ b`
- Find the **rightmost set bit** of `xor_all` (e.g., `right_one = xor_all & -xor_all`) —  
  this bit differs between `a` and `b`.
- Partition all numbers into two groups based on this bit:  
  - Group 1: numbers with this bit set  
  - Group 2: numbers without it  
- XOR within each group to isolate the two unique numbers.

---

## 💡 Intuition  
XOR acts like a “difference detector.”  
After canceling out duplicates, the remaining bits show where the two unique numbers differ.  
By isolating one differing bit, we can separate them into two groups and recover each individually.

---

## ⏱️ Complexity  
- **Time:** `O(n)` — single pass to XOR and another to partition.  
- **Space:** `O(1)` — only constant extra variables used.
