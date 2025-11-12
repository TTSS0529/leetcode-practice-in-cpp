# 0218 - The Skyline Problem

## 🧠 Idea  
We are given a list of buildings, each represented as `[left, right, height]`.  
Our goal is to compute the **skyline** — the outer contour formed by these buildings when viewed from a distance.

The result should be a list of **key points** `(x, height)` where the skyline changes its height.

---

## 🛠️ Key Points  
- Use a **priority queue (max-heap)** to track the current active buildings’ heights.  
- Sweep from **left to right** along the x-axis:
  - When we encounter a **new building’s left edge**, we add it to the heap.  
  - When we reach a **building’s right edge**, we remove it from the heap.
- The **current highest building** (`pq.top().first`) determines the skyline height at that point.
- If the **current height changes** compared to the previous one, we record a new key point.

---

## 💡 Intuition  
Imagine scanning the city skyline from left to right:  
- When a tall building begins, the skyline rises.  
- When the building ends and no taller one remains, the skyline drops.  

The priority queue helps us always know which building is currently the tallest as we move along the x-axis.

---

## ⚙️ Implementation Details  
- Each element in the heap is `(height, right)` — sorted by height descending.  
- For each `cur_x`:
  - Add all buildings starting at `cur_x`.  
  - Remove buildings whose right side ≤ `cur_x`.  
  - Compute current maximum height from the heap.  
  - If it differs from the last recorded height, append `{cur_x, cur_h}` to the result.

---

## ⏱️ Complexity  
- **Time:** `O(n log n)` — each building is pushed and popped from the heap once.  
- **Space:** `O(n)` — for the heap and output skyline points.
