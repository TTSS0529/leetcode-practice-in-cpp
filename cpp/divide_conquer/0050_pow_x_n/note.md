# 0050 Pow(x, n) - Fast Power

### 🧠 Problem Idea  
Compute **xⁿ** for a double `x` and integer `n` (can be negative).  
Naïvely multiplying `|n|` times → **TLE** for large `n`.  
We need an **O(log |n|)** solution.

---

## ❌ Naïve Approach (Linear Multiplication - TLE)  

- Handle negative exponent by `x = 1/x`, `n = -n`.  
- Multiply `x` repeatedly `|n|` times.  
- **Problem:** Complexity `O(|n|)` → infeasible for `|n| ≈ 10⁹`.

---

## ✅ Optimized Approach (Exponentiation by Squaring)  

- Key idea:  
  - If `n` is even → `xⁿ = (x²)^(n/2)`  
  - If `n` is odd → `xⁿ = x * (x²)^(n/2)`  
- Scan `n`’s binary representation; multiply when the current bit is `1`.  
- Each step squares the base & halves the exponent → **O(log |n|)**.

---

### ⏱️ Complexity  

- **Time:** `O(log |n|)`  
- **Space:** `O(1)`

---

## 🆚 Naïve vs Optimized  

| Feature                   | Naïve (Linear)       | Fast Power (Log)       |
|---------------------------|----------------------|------------------------|
| Strategy                  | Multiply `\|n\|` times  | Binary exponentiation  |
| Time Complexity           | O(\|n\|) → **TLE**    | O(log \|n\|) ✅         |
| Handles large `\|n\|`       | ❌                    | ✅                      |
| Supports negative exponent| ✅                    | ✅                      |
