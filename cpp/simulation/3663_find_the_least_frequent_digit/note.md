# 3663 - Least Frequently Used Digit

## 🧠 Idea

We are asked to find the **digit that occurs least frequently** in the decimal representation of an integer `n`.

Key properties:
- The number is given in **base 10**, so possible digits are `0–9`.  
- We must **count the frequency** of each digit.  
- If multiple digits have the same frequency, return the **smallest digit**.  
- Digits that do not appear at all (frequency = 0) are ignored.  

This is a straightforward **Simulation / Counting** problem.

---

## 🔁 Step-by-step

1. Initialize an array `count[10]` to store the frequency of each digit.  
2. Traverse the decimal representation of `n`:  
   - Extract the last digit using `n % 10`.  
   - Increment its counter.  
   - Remove the last digit with `n /= 10`.  
3. Iterate through `0–9` to find the digit with:  
   - **Non-zero frequency**, and  
   - The **smallest frequency** among all digits.  
   - If tied, pick the smaller digit.  
4. Return the chosen digit.  

---

## 🛠️ Key Points

- Only **non-zero frequency digits** are considered.  
- The task is pure **implementation** with no tricky edge cases.  
- Array of size 10 is enough → no need for extra data structures.  

---

## ⏱️ Complexity

- **Time:** `O(d)` where `d` is the number of digits in `n` (at most `O(log n)` in base 10).  
- **Space:** `O(1)` → fixed array of size 10.  

---
