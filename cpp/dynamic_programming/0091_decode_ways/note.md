# 0091 - Decode Ways  

## 🧠 Idea  

We want to count how many ways a string of digits can be decoded into letters (`1 → A`, `2 → B`, …, `26 → Z`).  

**Core insight:**  
- This is a **DP problem** where each state depends on the previous 1 or 2 digits.  
- A valid decoding must satisfy:  
  - Single digit (`1`–`9`) → valid.  
  - Two digits (`10`–`26`) → valid.  

---

## 🔁 Step-by-step  

1. Let `dp[i]` = number of ways to decode substring `s[0..i-1]`.  
2. Initialization:  
   - `dp[0] = 1` (empty string has 1 way).  
   - `dp[1] = 1` if `s[0] != '0'`, else `0`.  
3. For each `i = 2..n`:  
   - If `s[i-1]` is valid (`'1'..'9'`), then `dp[i] += dp[i-1]`.  
   - If `s[i-2..i-1]` is valid (`10..26`), then `dp[i] += dp[i-2]`.  
4. Return `dp[n]`.  

---

## 🛠️ Key Points  

- **Invalid cases:**  
  - Leading `'0'` → no decoding.  
  - A `'0'` must be part of `"10"` or `"20"`, otherwise invalid.  
- **Transition:** depends on **last digit** and **last two digits**.  
- **Robustness:** if at any step we hit an invalid substring, return `0`.  

---

## ⏱️ Complexity  

- **Time:** `O(n)`  
- **Space:** `O(n)` (can be optimized to `O(1)` with rolling variables).  
