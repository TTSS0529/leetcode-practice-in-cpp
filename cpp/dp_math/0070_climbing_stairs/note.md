# 0070 - Climbing Stairs  

### 🧠 Idea  
To reach step **n**, you can only come from **n-1** or **n-2**.  
So the total ways satisfy the same recurrence as Fibonacci:  

- **dp[0] = 1, dp[1] = 1**  
- **dp[n] = dp[n-1] + dp[n-2]**  

Instead of recursion (**O(2^n)**), we use an **iterative DP** and keep only the last two states.  

---

### 🛠️ Key Points  
- This is essentially **Fibonacci shifted by one index**  
- Use two variables `dp0` and `dp1` to represent ways for **n-2** and **n-1**  
- Loop `n` times:  
  - `dpi = dp0 + dp1`  
  - shift → `dp0 = dp1`, `dp1 = dpi`  
- Finally `dp0` holds the answer for **n**  
- Use `long long` for intermediate values to avoid overflow at `n = 45`  

---

### ⏱️ Complexity  

- **Time:**  
  - Single loop runs **O(n)**  
- **Space:**  
  - **O(1)** → only two variables  

---

## 🆚 Summary  

| Approach              | Time    | Space | Notes |
|-----------------------|---------|-------|-------|
| Naive Recursion ❌    | O(2^n) | O(n) | Exponential blow-up |
| Memoized Recursion    | O(n)   | O(n) | Extra cache |
| DP Array              | O(n)   | O(n) | Straightforward |
| Iterative Rolling ✅  | O(n)   | O(1) | Optimal |
