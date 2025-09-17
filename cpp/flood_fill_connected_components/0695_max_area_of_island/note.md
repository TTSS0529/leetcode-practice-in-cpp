# 0695 - Max Area of Island

## 🧠 Idea

We are asked to find the **largest area of an island** in a binary grid.  

Constraints:  
- `m, n <= 50`  
- `0` = water, `1` = land  
- An island is a **group of 1s connected 4-directionally** (up, down, left, right).  

**Key insights:**  
- This is a **flood fill problem** (similar to DFS/BFS traversal).  
- For each land cell, run DFS to **count the size of its island** and mark visited cells.  
- Keep track of the **maximum island size** seen so far.  

---

## 🔁 Step-by-step

1. Iterate through each cell in the grid.  
2. If the cell is land (`1`):  
   - Run DFS/BFS to explore the connected component.  
   - Count the number of `1`s in this island.  
   - Update the maximum area.  
3. Return the maximum area after scanning all cells.  

---

## 🛠️ Key Points

- **Mark visited cells** by setting them to `0` to avoid recounting.  
- DFS explores recursively in **4 directions**.  
- Each island is counted **once only**.  
- Works for both DFS and BFS; here we used **DFS recursion**.  

---

## ⏱️ Complexity

- **Time:** `O(m * n)` — each cell is visited at most once.  
- **Space:**  
  - `O(m * n)` in the worst case due to recursion stack (all land).  
  - If BFS is used, queue size could also reach `O(m * n)`.  
