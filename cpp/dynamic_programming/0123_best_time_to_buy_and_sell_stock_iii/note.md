# 0123 - Best Time to Buy and Sell Stock III

## 🧠 Idea

We need to find the **maximum profit** achievable with at most **two stock transactions**.  
Each transaction consists of one **buy** and one **sell**, and you can hold **only one share at a time**.

**Key insights:**
- The total profit can be divided into **two segments**:
  - First transaction → buy once, sell once  
  - Second transaction → buy again, sell again
- The optimal result can be expressed as the **maximum sum of two independent profits**:  
  `max(left[i] + right[i])`  
- Alternatively, we can model the process using **four DP states**, representing the best achievable profit after each possible action.

---

## 💡 Approaches

### 1. Left-Right Partition Method

- Traverse once from **left to right**: record the best profit if we sell on each day.  
- Traverse again from **right to left**: record the best profit if we buy on each day.  
- Combine both to find the **maximum sum of profits** from two transactions.

🧩 **Intuition:**  
Each day `i` acts as a split point —  
the first transaction finishes on or before `i`,  
and the second transaction starts on or after `i`.

- **Time Complexity:** `O(n)`  
- **Space Complexity:** `O(n)`

---

### 2. State Machine Dynamic Programming

Define four states representing all possible stages:

| State | Meaning |
|:------|:---------|
| `dp1` | After the **first buy** |
| `dp2` | After the **first sell** |
| `dp3` | After the **second buy** |
| `dp4` | After the **second sell** |

Each state transition updates based on the previous one, forming a sequence of buy → sell → buy → sell.  

🧩 **Intuition:**  
At every price, we decide whether to **buy, sell, or hold** to keep the maximum profit for that state.

- **Time Complexity:** `O(n)`  
- **Space Complexity:** `O(1)`

---

## 🛠️ Key Points

- At most **two transactions**, thus **four profit states**.  
- **Left-Right method** is intuitive and easy to visualize.  
- **State machine DP** is elegant and memory-efficient.  
- Both methods enforce the constraint that **you cannot hold multiple stocks simultaneously**.

---

## ⏱️ Complexity Summary

| Approach | Time | Space |
|:----------|:------|:-------|
| Left-Right Partition | `O(n)` | `O(n)` |
| State Machine DP | `O(n)` | `O(1)` |
