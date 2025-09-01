# 0455 - Assign Cookies

## 🧠 Idea

We are asked to maximize the number of **content children** given:

- Each child has a **greed factor** `g[i]`.  
- Each cookie has a **size** `s[j]`.  
- A child is content if they receive a cookie `>= g[i]`.  
- Each child and cookie can only be used once.  

This is a **Greedy + Sorting + Two Pointers** problem.

---

## 🔁 Step-by-step

1. **Sort** both arrays `g` and `s` in ascending order.  
   - This way, we try to satisfy the child with the **smallest greed** first.  

2. Use **two pointers**:  
   - `i` → index of the current child.  
   - `j` → index of the current cookie.  

3. Iterate through cookies:  
   - If `s[j] >= g[i]`, assign cookie `j` to child `i`, increment `i`.  
   - Otherwise, discard cookie `j` and try the next one.  

4. Stop when either:  
   - All children are satisfied, or  
   - All cookies are used up.  

5. The answer is the number of satisfied children `i`.

---

## 🛠️ Key Points

- **Greedy choice:** always give the smallest possible cookie that satisfies the current child.  
- Sorting ensures we don't "waste" large cookies on children with small greed.  
- Classic **two-pointer greedy** pattern.

---

## ⏱️ Complexity

- **Time:** `O(n log n + m log m)` → sorting both arrays.  
- **Space:** `O(1)` → only indices used.  
