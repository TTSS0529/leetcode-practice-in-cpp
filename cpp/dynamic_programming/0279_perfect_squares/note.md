# 0279 - Perfect Squares  

## 🧠 Idea  

We need the minimum number of **perfect squares** that sum up to `n`.  

**Core insight:**  
- This is a **DP / complete knapsack** type problem.  
- Define: `dp[i]` = minimum number of perfect squares that sum to `i`.  
- Transition: try all squares `j² ≤ i` and update `dp[i]`.  

---

## 🔁 Step-by-step  

1. Initialize `dp[0] = 0`.  
2. For each `i = 1..n`:  
   - Enumerate all squares `j² ≤ i`.  
   - Pick the choice that minimizes `dp[i]`.  
3. The answer is `dp[n]`.  

---

## 🛠️ Key Points  

- **DP definition:** `dp[i]` depends on smaller states.  
- **Complete knapsack nature:** each square can be reused multiple times.  
- **Base case:** `dp[0] = 0`.  
- **Math note:** By **Lagrange’s four-square theorem**, the answer is at most 4.  

---

## ⏱️ Complexity  

- **Time:** `O(n√n)`  
- **Space:** `O(n)`  
