# 0338 - Counting Bits

## 🧠 Idea
We need to find how many **1-bits** are in the binary representation of each number from `0` to `n`.  
Instead of recalculating for every number, we can reuse previous results using **dynamic programming**.

---

## 🛠️ Key Points
- For **even numbers**, the number of 1s is the same as in half of it.  
- For **odd numbers**, it’s just one more than the previous number.  
- This pattern allows building results iteratively from smaller numbers.

---

## 💡 Intuition
By observing binary patterns, we realize that each number’s 1-bit count can be **derived from a simpler one**,  
eliminating the need for costly bit-by-bit counting.  
It’s a classic example of using **bit properties + DP** to reduce redundant computation.

---

## ⏱️ Complexity
- **Time:** `O(n)` — compute each result once.  
- **Space:** `O(n)` — store results in a DP array.
