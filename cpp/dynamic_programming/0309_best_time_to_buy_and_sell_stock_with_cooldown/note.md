# 0309 - Best Time to Buy and Sell Stock with Cooldown  

## 🧠 Idea  

We want to maximize profit with a **1-day cooldown** after selling a stock.  

**Core insight:**  
- The problem can be modeled as a **state machine**.  
- On each day, you can be in one of three states:  
  - `hold`: currently holding a stock  
  - `cool`: just sold (cooldown day)  
  - `rest`: not holding and not cooling (can buy again)  

---

## 🔁 State Logic  

- **Hold:** choose to keep holding, or buy after a rest day.  
- **Cool:** you sell today, moving from the hold state.  
- **Rest:** stay idle, or finish cooldown to be ready for the next buy.  

The goal is to end in the best of `cool` or `rest` (since holding means an unfinished transaction).  

---

## 🧩 Concept Summary  

| State | Meaning | Transition Description |
|:------|:---------|:-----------------------|
| `hold` | Currently holding a stock | Keep holding or buy after resting |
| `cool` | Just sold a stock | Transition from `hold` after selling |
| `rest` | Not holding, not cooling | Stay idle or finish cooldown |

This design naturally enforces the **cooldown rule** — you cannot buy immediately after selling.  

---

## ⏱️ Complexity  

- **Time:** `O(n)` — single pass over prices  
- **Space:** `O(1)` — only three states tracked  
