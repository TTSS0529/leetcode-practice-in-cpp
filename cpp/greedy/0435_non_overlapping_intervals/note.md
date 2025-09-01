# 0435 - Non-overlapping Intervals

## 🧠 Idea

We are asked to **remove the minimum number of intervals** so that the rest of the intervals are **non-overlapping**.  

- Each interval has a **start** `intervals[i][0]` and an **end** `intervals[i][1]`.  
- If two intervals overlap, we must remove one of them.  
- Goal: **maximize the number of non-overlapping intervals** (equivalently, minimize removals).  

This is a **Greedy + Sorting** problem.

---

## 🔁 Step-by-step

1. **Sort intervals by end time** in ascending order.  
   - Why? If we always pick the interval that ends first, we leave more room for future intervals.  

2. Keep track of:  
   - `prev`: the end time of the last **kept** interval.  
   - `res`: number of intervals removed.  

3. Iterate through intervals:  
   - If `interval[i][0] < prev` → overlap → must **remove** this interval (`res++`).  
   - Else → no overlap → **keep** it and update `prev = interval[i][1]`.  

4. Return `res` (the total removals).

---

## 🛠️ Key Points

- **Greedy choice:** always keep the interval with the **earliest ending time**.  
- Sorting ensures the greedy strategy works (similar to the classic **activity selection problem**).  
- We don’t need to explicitly remove intervals — just count how many overlaps occur.

---

## ⏱️ Complexity

- **Time:** `O(n log n)` → sorting intervals.  
- **Space:** `O(1)` → only variables `prev` and `res` are used.  
