# 0188 - Best Time to Buy and Sell Stock IV

## 🧠 Idea

We need to find the **maximum profit** achievable with **at most `k` transactions**,  
where each transaction consists of **one buy and one sell** operation,  
and you cannot hold multiple stocks simultaneously.

This problem generalizes all previous stock trading problems:  
- **121:** one transaction  
- **122:** unlimited transactions  
- **123:** at most two transactions  
- **188:** at most `k` transactions  

---

## 🔁 Step-by-step

1. **Unlimited transaction shortcut**  
   - If `k` is large enough (`k >= len / 2`), it’s equivalent to having unlimited transactions.  
   - In that case, simply accumulate every positive price difference.

2. **Dynamic Programming for limited transactions**  
   - Define two states for each transaction index `i`:  
     - `buy[i]`: max profit after the *i-th buy* (currently holding stock)  
     - `sell[i]`: max profit after the *i-th sell* (currently not holding stock)  
   - For each day’s price, update `buy[i]` and `sell[i]` iteratively.  

3. **Initialization**  
   - Before any operation, profits are 0 when not holding (`sell[0] = 0`),  
     and negative infinity when holding (`buy[i] = -∞`).  
   - Iterate over all prices and transactions to update DP states.

4. **Final result**  
   - The answer is stored in `sell[k]`,  
     representing the maximum profit after at most `k` sells (i.e., transactions).  

---

## 🛠️ Key Points

- Each buy/sell pair counts as **one transaction**.  
- State transitions ensure **buy before sell** order.  
- Space optimized to **O(k)** using 1D arrays.  
- When `k` is large, the problem reduces to **unlimited transaction** case.  

---

## ⏱️ Complexity

- **Time:** `O(n * k)` — iterate prices for each transaction count.  
- **Space:** `O(k)` — track only `buy` and `sell` states.  

---

## 🧩 Summary

| Version | Max Transactions | Approach |
|:--:|:--:|:--|
| 121 | 1 | Simple DP with one buy/sell pair |
| 122 | ∞ | Greedy sum of positive diffs |
| 123 | 2 | Two-layer DP |
| 188 | k | Generalized DP for any k |
