# 0264 - Ugly Number II

### 🧠 Idea  
Instead of checking every integer to determine whether it is ugly, we **generate ugly numbers in ascending order**.

Maintain a `dp` array to store the first `n` ugly numbers, and use **three pointers** (`i2`, `i3`, `i5`) to track the next multiples of `2`, `3`, and `5`.  
At every iteration:
- Pick the minimum among `dp[i2] * 2`, `dp[i3] * 3`, `dp[i5] * 5` as the next ugly number
- Move any pointer whose candidate equals that minimum (to avoid duplicates)

---

### 🛠️ Key Points  

- Initialize `dp[0] = 1`
- Candidates for each round:
    ```cpp
    a = dp[i2] * 2;
    b = dp[i3] * 3;
    c = dp[i5] * 5;
    dp[i] = min(min(a, b), c);
    ```
- If `dp[i] == a`, increment `i2`; same for `b`/`c`
- Pointers ensure:
  - Ordered generation
  - No duplicates

---

### ✅ Advantages

| Feature            | Behavior            |
|-------------------|---------------------|
| Generation order   | Ascending           |
| Duplicate handling | Yes (via pointers)  |
| Uses heap?         | No                  |
| Optimal?           | ✅ Yes              |

---

### ⏱️ Complexity  

- **Time:** `O(n)`  
- **Space:** `O(n)`  

---