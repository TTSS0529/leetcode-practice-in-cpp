# 0934 - Shortest Bridge  

## 🧠 Idea  

We are asked to **connect two islands in a binary grid with the shortest bridge (minimum 0 → 1 flips)**.  

Constraints:  
- `n × n` grid, `2 <= n <= 100`  
- Grid contains **exactly two islands** (groups of connected `1`s).  

**Key insights:**  
- Step 1️⃣: **Locate the first island** using DFS.  
  - Mark all its cells as `2`.  
  - Push all adjacent water cells (`0`s) into a queue as the **BFS frontier**.  
- Step 2️⃣: **Expand BFS layer by layer** from the frontier:  
  - Each layer expansion = bridge length `+1`.  
  - If we reach the second island (`1`), return current steps.  

This is essentially **DFS + BFS hybrid**:  
- DFS isolates the first island.  
- BFS grows outward until reaching the second island.  

---

## 🔁 Step-by-step  

1. Scan grid until the **first land cell (1)** is found.  
2. Run **DFS** to:  
   - Mark the entire first island as `2`.  
   - Collect boundary water cells (`0`) into a **queue**.  
3. Run **BFS** from the queue:  
   - Expand in 4 directions (`up, down, left, right`).  
   - If water (`0`) → mark as `2` and enqueue.  
   - If land (`1`) → reached second island → return steps.  
4. Keep a step counter to measure bridge length.  

---

## 🛠️ Key Points  

- DFS ensures we only mark **one island**, so BFS won’t mistakenly expand from both.  
- BFS guarantees the **shortest bridge** because it expands level by level.  
- Use `grid[x][y] = 2` as **visited marker** (avoids extra `visited[][]`).  
- Hybrid approach = clean separation:  
  - **DFS → preprocessing**  
  - **BFS → shortest path search**  

---

## ⏱️ Complexity  

- **Time:** `O(n²)`  
  - DFS visits the first island (`O(n²)` in worst case).  
  - BFS expands at most all cells (`O(n²)`).  
- **Space:** `O(n²)` for recursion stack (DFS) + BFS queue.  
