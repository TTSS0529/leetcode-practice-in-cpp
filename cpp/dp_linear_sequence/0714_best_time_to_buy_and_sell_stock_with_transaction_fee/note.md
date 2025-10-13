# 0714 - Best Time to Buy and Sell Stock with Transaction Fee

## 🧠 Idea

We need to **maximize profit from stock trades where each sale incurs a transaction fee**.

**Core insight:**  
Use **dynamic programming with two states**:

- **Hold/Keep:** maximum profit if holding a stock  
- **Empty:** maximum profit if not holding a stock  

**State transitions:**

- **Keep:** either keep holding or buy today  
- **Empty:** either sell today (pay fee) or do nothing  

> Maximum profit at the end is always in the **Empty** state.

---

## 🔁 Step-by-step

1. **Initialize states**: start with holding or not holding a stock  
2. **Iterate over prices**: update the two states based on previous values  
3. **Return result**: the max profit when not holding a stock at the last day

---

## 🛠️ Key Points

- ✅ **Two states DP:** track profit with and without holding stock  
- ⚠️ **Transaction fee:** subtract only when selling  
- 💡 **Rolling variables:** no need for full DP array, constant space  
- 🧩 **Greedy-like transitions:** always choose the maximum profit for each state  

---

## ⏱️ Complexity

- **Time:** O(n) — iterate through prices once  
- **Space:** O(1) — only two variables needed
