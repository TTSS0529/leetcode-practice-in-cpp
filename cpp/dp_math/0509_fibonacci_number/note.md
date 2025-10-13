# 0509 - Fibonacci Number  

### 🧠 Idea  
We want **F(n)** where:  

- **F(0) = 0, F(1) = 1**  
- **F(n) = F(n-1) + F(n-2)**  

Instead of recursion (**O(2^n)**), use an **iterative DP** approach and only keep the **last two values**.  

---

### 🛠️ Key Points  
- Use two variables `a` and `b` to represent **F(n-2)** and **F(n-1)**  
- Loop `n` times:  
  - `sum = a + b`  
  - shift → `a = b`, `b = sum`  
- Finally `a` holds **F(n)**  
- No extra memory, only **O(1)** space  

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
