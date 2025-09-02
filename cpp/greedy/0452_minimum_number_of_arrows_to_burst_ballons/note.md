# 0452 - Minimum Number of Arrows to Burst Balloons  

## 🧠 Idea  

We are asked to find the **minimum number of arrows** needed to burst all balloons.  
Each balloon is represented as an interval `[start, end]` along the x-axis.  

👉 One arrow shot at position `x` will burst **all balloons** that satisfy `start <= x <= end`.  

So the problem reduces to:  
- **Group overlapping intervals** into as few groups as possible,  
- Each group can be burst by a single arrow.  

---

## 🔁 Step-by-step  

1. **Sort** balloons by their right endpoint (`end`) in ascending order.  
   - This ensures we always try to burst as many balloons as possible with one arrow.  

2. Initialize:  
   - `res = 1` (at least one arrow is needed),  
   - `prev = points[0][1]` (position of the first arrow = end of first balloon).  

3. Traverse each balloon `i`:  
   - If `points[i][0] > prev`:  
     - The current balloon **does not overlap** with the previous arrow.  
     - Shoot a new arrow: `res++`, update `prev = points[i][1]`.  
   - Else:  
     - Balloon overlaps with the current arrow → no new arrow needed.  

4. Return `res`.  

---

## 🛠️ Key Points  

- **Sorting by `end`** is the greedy step: always shoot at the **rightmost possible point** to cover maximum balloons.  
- Condition difference with [0435. Non-overlapping Intervals]:  
  - Here `points[i][0] > prev` → need new arrow (endpoint touching still counts as overlap).  
- We don’t need to actually shrink intervals — just track the current `prev` arrow position.  

---

## ⏱️ Complexity  

- **Time:** `O(n log n)` → due to sorting.  
- **Space:** `O(1)` → only a few variables.  
