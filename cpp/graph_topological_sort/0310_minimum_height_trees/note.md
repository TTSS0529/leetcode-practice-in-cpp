# 0310 - Minimum Height Trees  

## 🧠 Idea  

We are asked to find all **roots of Minimum Height Trees (MHTs)** in an undirected graph with `n` nodes.  

**Key insights:**  
- The **root(s) of MHT** are always the **center(s) of the tree**.  
- A tree can have **1 or 2 centers**.  
- The problem reduces to **finding the tree’s centroid(s)**.  

We achieve this by **iteratively trimming leaf nodes** until only 1–2 nodes remain.  

---

## 🔁 Step-by-step  

1. **Build graph** using adjacency list and track `degree[i]` for each node.  
2. **Initialize queue** with all current leaf nodes (`degree[i] == 1`).  
3. While `remain > 2`:  
   - Remove all current leaves (`sz = q.size()`).  
   - For each removed leaf, decrement its neighbors’ degree.  
   - If a neighbor becomes a new leaf, push it into the queue.  
   - Update `remain -= sz`.  
4. The **remaining nodes (1–2)** are the MHT roots.  

---

## 🛠️ Key Points  

- **Leaves trimming:** similar to **topological sort**.  
- **Why stop at 2 nodes?**  
  - A tree’s center is either 1 node (odd diameter) or 2 nodes (even diameter).  
- **Efficiency:** each edge is processed only once.  

---

## ⏱️ Complexity  

- **Time:** `O(n)` — each node and edge is visited at most once.  
- **Space:** `O(n)` — adjacency list, degree array, and queue.  
