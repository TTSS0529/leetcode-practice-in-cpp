# 0130 - Surrounded Regions  

## 🧠 Idea  

We are asked to **capture all regions surrounded by `X`** in a 2D grid.  
- Any `O` that is **connected to the border** should **not** be flipped.  
- All other `O`s that are **fully surrounded by `X`** should be flipped into `X`.  

**Key insights:**  
- A naive DFS from each `O` would be expensive, but we can still solve it with **DFS search + temporary marking**.  
- The main trick:  
  - If an `O` touches the border (directly or indirectly), it’s **safe**.  
  - Otherwise, it’s **captured**.  

In this solution:  
- Use DFS to explore each `O` region.  
- Temporarily flip `O → X` during DFS.  
- Store visited coordinates in a vector (`place`).  
- If the DFS finds a border `O`, the whole region is **unsafe** → revert stored cells back to `O`.  
- Otherwise, keep them as `X`.  

---

## 🔁 Step-by-step  

1. Loop through the grid cell by cell.  
2. If current cell is `O`:  
   - Run `dfsSearch()` from here.  
   - During DFS:  
     - Mark visited `O → X`.  
     - Push coordinates into `place`.  
   - If DFS result = **unsafe** (region touches border):  
     - Revert all positions in `place` back to `O`.  
   - Else: keep them as `X` (captured).  
3. Clear `place` and continue scanning.  

---

## 🛠️ Key Points  

- **DFS return value** is crucial:  
  - If exploration reaches border with `O`, return **false**.  
  - Otherwise, return **true**.  
- Use `place` vector to **record visited cells** in current DFS search.  
- Revert step ensures only non-surrounded regions get flipped.  
- Works without an explicit `visited` matrix → uses `board[x][y] = 'X'` as visited marker.  

---

## ⏱️ Complexity  

- **Time:** `O(m × n)`  
  - Each cell is visited at most once in DFS.  
- **Space:**  
  - `O(m × n)` worst case recursion stack.  
  - Plus `place` vector that holds up to all cells in a connected region.  
