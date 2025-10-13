# 0494 - Target Sum

## 🧠 Idea

We need to **find the number of ways to assign '+' and '-' signs to make the sum of all numbers equal to `target`**.

**Core insight:**  
This problem can be **transformed into a subset sum problem**.

- Split all numbers into two groups:  
  - \( P \): numbers assigned with '+'  
  - \( N \): numbers assigned with '-'

- Equation relation:  
  - sum(P) - sum(N) = target  
  - sum(P) + sum(N) = sum(nums)

- Combine the two:  
  - sum(P) = (target + sum(nums)) / 2

> So the problem becomes: **count the number of subsets whose sum equals `sum_p = (target + sum(nums)) / 2`.**

---

## 🔁 Step-by-step

1. **Compute total sum**  
   - If `(sum + target)` is negative or odd → impossible, return 0.

2. **Define dp array**  
   - dp[j] = number of ways to reach sum j  
   - Initialize dp[0] = 1 → one way to make sum 0 (choose nothing)

3. **Iterate over numbers**  
   - For each number, update dp from high to low to avoid using the same number multiple times

4. **Result**  
   - dp[sum_p] gives the number of valid assignments

---

## 🛠️ Key Points

- ✅ **Subset Sum Transformation:**  
  Convert the "+" and "−" assignment problem to a standard 0/1 knapsack counting problem.

- ⚠️ **Edge Cases:**  
  - (sum + target) is odd → impossible  
  - (sum + target) < 0 → impossible

- 🧩 **Backward iteration:**  
  Ensures each number is only used once

- 💡 **dp[0] = 1:**  
  Represents the single way to make sum 0

---

## ⏱️ Complexity

- **Time:** O(n × sum_p) — each number updates all possible sums up to sum_p  
- **Space:** O(sum_p) — only a 1D dp array is needed
