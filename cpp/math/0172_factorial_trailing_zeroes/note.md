# 0172 - Factorial Trailing Zeroes

### 🧠 Idea
We need to **count how many trailing zeros appear in `n!`** (the factorial of `n`).  
Trailing zeros come from factors of **10**, which equals **2 × 5**.  
Since there are always more 2’s than 5’s in factorial decomposition,  
**the number of zeros equals the number of factors of 5** in all numbers from `1` to `n`.

---

### 🛠️ Key Points
- Each multiple of `5` contributes one factor of 5.  
- Each multiple of `25`, `125`, `625`, etc., contributes extra 5’s.  
- Keep dividing `n` by 5, 25, 125, ... until the quotient becomes 0.  
- Sum all quotients to get the total number of trailing zeros.

---

### 💡 Intuition
Each number between `1` and `n` can be broken down into its prime factors.  
We only count how many times `5` appears overall:  

\[
\text{Trailing zeros} = \left\lfloor \frac{n}{5} \right\rfloor + \left\lfloor \frac{n}{25} \right\rfloor + \left\lfloor \frac{n}{125} \right\rfloor + \dots
\]

This gives the total number of 5’s contributing to trailing zeros.

---

### ⏱️ Complexity
- **Time:** `O(log₅ n)`  
- **Space:** `O(1)`  
