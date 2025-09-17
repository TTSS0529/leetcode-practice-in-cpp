# 0547 - Number of Provinces

## 🧠 Idea

We are asked to find the **number of provinces** in a graph represented by an adjacency matrix.  

Constraints:  
- `1 <= n <= 200`  
- `isConnected[i][j] = 1` means city `i` and city `j` are directly connected.  
- A **province** is a connected component in the graph.  

**Key insights:**  
- This is essentially a **connected components problem** on an undirected graph.  
- We can use **DFS/BFS/Union-Find** to count how many connected components exist.  
- Each time we discover a new unvisited node, we traverse its entire connected component.  

---

## 🔁 Step-by-step

1. Initialize a `visited` array of size `n`.  
2. Iterate over each city `i`:  
   - If city `i` is not visited, this means we found a **new province**.  
   - Run DFS/BFS from `i` to visit all cities in this province.  
   - Increase the province count by 1.  
3. Return the count at the end.  

---

## 🛠️ Key Points

- The adjacency matrix makes it easy to check connections:  
  if `isConnected[i][j] == 1`, then city `i` and `j` are in the same province.  
- **DFS recursion** (or BFS queue) ensures all cities in a province are marked visited.  
- Each city belongs to **exactly one province**.  
- Equivalent to **flood fill on a graph** (instead of grid).  

---

## ⏱️ Complexity

- **Time:** `O(n²)` — adjacency matrix has `n²` entries to potentially scan.  
- **Space:**  
  - `O(n)` for the `visited` array.  
  - Recursion stack up to `O(n)` in the worst case.  
