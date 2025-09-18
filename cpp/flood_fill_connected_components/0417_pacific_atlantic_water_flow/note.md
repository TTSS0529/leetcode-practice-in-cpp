# 0417 - Pacific Atlantic Water Flow

## 🧠 Idea  

We are asked to find all grid cells from which water can flow to **both the Pacific and the Atlantic Ocean**.  

Constraints:  
- `1 <= m, n <= 200`  
- Water can only flow **from higher or equal height to lower/equal height** in 4 directions.  
- Pacific touches the **top and left** edges.  
- Atlantic touches the **bottom and right** edges.  

**Key insights:**  
- Instead of simulating water flow from every cell (which would be expensive), we **reverse the problem**:  
  - Start from the ocean borders, and find which cells can **reach** each ocean.  
  - Then take the intersection of these reachable sets.  
- This can be solved using **DFS/BFS flood fill** from the borders of each ocean.  

---

## 🔁 Step-by-step  

1. Create two `m x n` boolean grids:  
   - `reach_p` for cells that can reach the **Pacific**.  
   - `reach_a` for cells that can reach the **Atlantic**.  
2. Start DFS/BFS from:  
   - Pacific edges: `(i, 0)` and `(0, j)`  
   - Atlantic edges: `(i, n-1)` and `(m-1, j)`  
3. In DFS/BFS, only move to a neighbor `(nx, ny)` if `heights[nx][ny] >= heights[x][y]` (water can flow backward).  
4. After filling both reachable matrices, collect all cells `(i, j)` where `reach_p[i][j] && reach_a[i][j]`.  

---

## 🛠️ Key Points  

- **Reverse thinking**: simulate from oceans inward, not from each cell outward.  
- Use **DFS recursion** or **BFS queue** for traversal.  
- Avoid revisiting cells with a visited check.  
- Intersection of Pacific- and Atlantic-reachable cells is the answer.  

---

## ⏱️ Complexity  

- **Time:** `O(m * n)`  
  - Each cell is visited at most once for Pacific and once for Atlantic.  
- **Space:**  
  - `O(m * n)` for the `reach_p` and `reach_a` boolean grids.  
  - Recursion stack or BFS queue up to `O(m * n)` in worst case.  
