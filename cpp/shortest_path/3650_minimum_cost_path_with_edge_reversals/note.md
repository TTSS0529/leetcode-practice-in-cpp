# 3650 - Minimum Cost Path With Edge Reversals

## 🧠 Idea

We are given a **directed graph with edge costs**.  
When traversing an edge in its given direction `(u → v)` we pay its **original cost**.  
If we want to traverse it **in the reverse direction `(v → u)`**, we must **reverse the edge** at a cost of **`2 × original cost`**.  

We need to find the **minimum cost path** from **node 0** to **node n - 1**.

This is essentially a **shortest path problem** with a twist:  
- Each edge `(u, v, cost)` becomes **two directed edges**:
  - `(u → v, cost)`  
  - `(v → u, 2 × cost)`  
- After this transformation, the problem reduces to finding the shortest path in a weighted directed graph.  

We can solve it using **Dijkstra’s algorithm**.

---

## 🔁 Step-by-step

1. **Build adjacency list**:
   - For each edge `(from, to, cost)`:
     - Add `(to, cost)` to `adj[from]`.
     - Add `(from, 2 × cost)` to `adj[to]`.

2. **Initialize Dijkstra**:
   - Distance array `dist[n]`, initialized with `INF`.
   - Min-heap (priority queue) storing `(distance, node)`.
   - Set `dist[0] = 0` and push `(0, 0)` into heap.

3. **Run Dijkstra loop**:
   - Pop `(d, u)` from heap. If `d != dist[u]`, skip.
   - If `u == n-1`, we can stop early (destination reached).
   - For each neighbor `(v, w)` of `u`:
     - If `d + w < dist[v]`, update `dist[v]` and push `(dist[v], v)`.

4. **Result**:
   - If `dist[n-1]` is still `INF`, return `-1`.
   - Otherwise, return `dist[n-1]`.

---

## 🛠️ Key Points

- Transforming each edge into **two directed edges** handles the reversal logic naturally.
- Use `long long` for distances (since costs can grow).
- Early stopping when reaching `n-1` optimizes runtime.
- If final distance exceeds `INT_MAX`, return `-1`.

---

## ⏱️ Complexity

- **Time:**  
  - Building adjacency list: `O(E)`  
  - Dijkstra: `O((V + E) log V)`  
- **Space:**  
  - Adjacency list: `O(V + E)`  
  - Distance array + heap: `O(V)`  
