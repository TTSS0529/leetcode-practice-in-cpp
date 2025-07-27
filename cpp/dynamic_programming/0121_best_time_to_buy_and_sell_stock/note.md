# 0121 - Best Time to Buy and Sell Stock  

### 🧠 Idea  
You want to maximize profit = **sell_price - buy_price** with only **one transaction**.  

Key observation:  
- The best **buy price** before day `i` is simply the **minimum price so far**  
- So for each day `i`, the max profit is  
  `profit[i] = prices[i] - min_price_so_far`  

We just track the running **min price** and update the best profit in **one pass**.  

---

### 🛠️ Key Points  
- Initialize `preMin = prices[0]`  
- Initialize `res = 0` for max profit  
- For each day `i`:  
  - `profit = prices[i] - preMin` → update `res` if larger  
  - If `prices[i] < preMin` → update `preMin`  
- No DP table needed → just 2 variables  

---

### ⏱️ Complexity  

- **Time:**  
  - Single pass over `prices` → **O(n)**  
- **Space:**  
  - **O(1)** → only two variables (`preMin`, `res`)  

---

## 🆚 Summary  

| Approach                   | Time    | Space | Notes |
|----------------------------|---------|-------|-------|
| Brute force ❌             | O(n²)  | O(1) | Check all pairs |
| DP table                   | O(n)   | O(n) | Explicitly store profit per day |
| Prefix min + single pass ✅| O(n)   | O(1) | Optimal |
