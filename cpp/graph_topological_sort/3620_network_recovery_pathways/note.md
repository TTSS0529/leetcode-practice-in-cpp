# 3620 Network Recovery Pathways - Max Path Score  

### 🧠 Problem Idea  
We have a **directed graph** with edge costs and a total budget `k`.  
We want a path from `0` → `n-1` with **total cost ≤ k**, while **maximizing the minimum edge cost along the path**.  

---

## ❌ Naïve Approach (DFS - TLE)  

- Enumerate **all possible paths** from `0` → `n-1`.  
- For each path, find its **minimum edge cost**, and keep the maximum.  
- **Problem:** Number of paths can be exponential → **TLE** on large graphs.  

---

## ✅ Optimized Approach (Binary Search + Topological DP)  

1. **Filter offline nodes** → remove invalid edges.  
2. **Build graph** and compute **topological order** (DAG).  
3. **Sort unique edge costs**.  
4. **Binary Search** on candidate minimum edge cost:  
   - Keep only edges `>= mid`.  
   - Run **DP over topological order** to check if a valid path ≤ `k` exists.  
5. If feasible → try higher `mid`, else lower it.  

This reduces the problem to repeated **feasibility checks on DAG**.

---

### ⏱️ Complexity  

- **Time:** `O((V + E) log E)`  
  - Graph build + topo sort → `O(V + E)`  
  - Binary search over ≤ `E` unique costs  
  - Each feasibility check → `O(V + E)`  
- **Space:** `O(V + E)` for graph, topo order, and DP array  

---

## 🆚 DFS vs Optimized  

| Feature              | DFS (Naïve)        | Binary Search + DP |
|----------------------|--------------------|--------------------|
| Strategy             | Enumerate all paths| DAG DP + Binary Search |
| Complexity           | Exponential (TLE) | `O((V+E) log E)` |
| Handles large graphs | ❌                | ✅                |
| Uses DAG property    | ❌                | ✅                |

---
