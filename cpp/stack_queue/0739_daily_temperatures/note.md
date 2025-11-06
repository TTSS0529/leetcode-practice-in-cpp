# 0739 - Daily Temperatures

## 🧠 Idea  
We are given an array `temperatures`, where each element represents the daily temperature.  
For each day, we must find **how many days** we need to wait until a **warmer temperature** occurs.  
If there’s no future day with a higher temperature, return `0` for that day.

---

## 🛠️ Key Points  
- We can use a **monotonic decreasing stack** to keep track of **indices** of days.  
- As we iterate through the array:
  - While the current temperature is **greater** than the temperature at the top of the stack,  
    it means we've found a **warmer day** for the day at the top of the stack.  
  - We pop that index from the stack and compute the **waiting days**:  
    `res[prev_index] = i - prev_index`.  
  - Push the current day's index into the stack.
- The stack ensures that indices inside it correspond to **temperatures in decreasing order**.

---

## 💡 Intuition  
Imagine scanning the temperature forecast:
- Keep a record of past days that are still waiting for a warmer temperature.  
- When a warmer day comes, it "resolves" some of those waiting days.  
- This approach avoids checking all future days for each index — the stack efficiently tracks pending comparisons.

---

## ⏱️ Complexity  
- **Time:** `O(n)` — each index is pushed and popped **at most once**.  
- **Space:** `O(n)` — for the stack and result arrays.
