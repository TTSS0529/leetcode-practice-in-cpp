# 0202 - Happy Number

### 🧠 Idea  
We need to determine whether a number eventually becomes `1` when repeatedly replaced by the **sum of the squares of its digits**.  

If this process enters a loop (never reaches `1`), the number is **not happy**.  

👉 The task is essentially a **cycle detection** problem in a number transformation sequence.

---

### 🛠️ Key Points  
- Repeatedly transform `n` into the sum of squares of its digits.  
  Example: `19 → 82 → 68 → 100 → 1`.  
- Use a hash set to keep track of all numbers seen before.  
  - If `1` appears → return `true`.  
  - If a number repeats → there is a cycle → return `false`.  
- Continue the process until either case occurs.

---

### 💡 Intuition  
This behaves like detecting a loop in a linked list:  
once a number repeats, we’re trapped in a cycle forever.  
If the chain leads to `1`, it’s a **happy number** 🎉.  

---

### ⏱️ Complexity  
- **Time:** `O(log n)` per transformation × limited number of unique results → effectively `O(1)`  
- **Space:** `O(log n)` — bounded by the number of unique sums stored in the set  
