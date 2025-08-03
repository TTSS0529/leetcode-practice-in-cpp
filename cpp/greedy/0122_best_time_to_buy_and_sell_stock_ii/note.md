# 0122 - Best Time to Buy and Sell Stock II

## 🧠 Idea

Unlike problem 0121 where only one transaction is allowed, here you may perform **multiple buy/sell operations**, as long as they **do not overlap**.

The greedy strategy:
- Whenever `prices[i] > prices[i−1]`, take the difference as profit.
- Summing up all such **positive price differences** is equivalent to buying at each local minimum and selling at each local maximum.

---

## 🛠️ Key Points

- Traverse prices and accumulate `prices[i] - prices[i - 1]` **only if it is positive**
- Greedily captures all upward slopes
- No need to track individual transactions explicitly

---

## ⏱️ Complexity

- **Time:** `O(n)`
- **Space:** `O(1)`
