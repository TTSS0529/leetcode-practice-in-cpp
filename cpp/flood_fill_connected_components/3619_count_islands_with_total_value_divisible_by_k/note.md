# 3619 - Count Islands With Total Value Divisible by K  

### 🧠 Idea  
This is a classic **flood-fill problem** on a grid:  

- An **island** is a connected component of non-zero cells (4-directionally connected).  
- We need to compute the **sum of all cells** in each island and check if it’s divisible by `k`.  

We can traverse islands using:  
- **DFS (Depth-First Search)** → recursively explore each island.  
- **BFS (Breadth-First Search)** → iteratively explore using a queue.  

---

## ✅ Method 1 - DFS (Recursive Flood Fill)

### 🛠️ Key Points  
- If `grid[i][j] > 0`, start DFS from this cell.  
- Add its value to the running sum, then mark it as visited (`grid[i][j] = 0`).  
- Recursively visit its 4 neighbors.  
- After DFS finishes, check `sum % k == 0` to count valid islands.  

---

### ⏱️ Complexity  
- **Time**: O(m × n), each cell visited once.  
- **Space**: O(m × n) worst-case recursion stack (but usually much smaller).  

---

## ✅ Method 2 - BFS (Queue-Based Flood Fill)

### 🛠️ Key Points  
- If `grid[i][j] > 0`, push it into a queue.  
- While queue not empty, pop a cell, add its value, and push unvisited neighbors.  
- Mark visited cells as `0` to avoid revisiting.  
- After BFS finishes, check `sum % k == 0`.  

---

### ⏱️ Complexity  
- **Time**: O(m × n), same as DFS.  
- **Space**: O(m × n) for queue in the worst case.  

---

## 🆚 Summary

| Feature                 | DFS (Recursive)         | BFS (Queue)              |
|-------------------------|-------------------------|--------------------------|
| Traversal Order         | Deep → then backtrack   | Layer-by-layer           |
| Data Structure          | Recursion stack         | Explicit queue           |
| Cache Locality          | ✅ Better (linear access)| ❌ Slightly worse         |
| Extra Memory Overhead   | Low (implicit stack)    | Higher (queue ops)       |
| Runtime (LeetCode)      | ✅ ~85–90% (faster)     | ❌ ~30–40% (slower)       |
| Risk of Stack Overflow  | Possible on huge grids  | No                      |
| Code Simplicity         | ✅ Simple               | Slightly more verbose    |

---