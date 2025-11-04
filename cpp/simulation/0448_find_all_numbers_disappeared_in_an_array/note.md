# 0448 - Find All Numbers Disappeared in an Array

## 🧠 Idea  
We are given an integer array `nums` containing numbers from `1` to `n`, where some elements may appear twice and others may be missing.  
We need to find all the numbers that **do not appear** in the array.

---

## 🛠️ Key Points  
- Use the **input array itself as a hash map** to mark which numbers have appeared.  
- For each number `num`, take its absolute value and mark the index `abs(num) - 1` as **visited** by negating `nums[pos]`.  
- After processing, all **positive values** in `nums` correspond to indices that were **never visited**, meaning their `(index + 1)` is missing.

---

## 💡 Intuition  
Instead of using extra space to track seen numbers,  
we cleverly modify the original array:  
- Each index represents a number.  
- Negating the element at that index marks it as “seen.”  
- Any index left unmarked corresponds to a missing number.  

This leverages **in-place marking** to achieve O(1) extra space.

---

## ⏱️ Complexity  
- **Time:** `O(n)` — one pass to mark, one pass to collect missing numbers.  
- **Space:** `O(1)` — modifies input array in place.  
