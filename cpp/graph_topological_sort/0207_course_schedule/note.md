# 0207 - Course Schedule

### 🧠 Idea  
Model the course prerequisites as a **Directed Graph**.  
Each prerequisite pair `[a, b]` means a directed edge **b → a**.  
The problem reduces to detecting whether the graph has a **cycle**.

We solve this in two ways:
- **BFS (Kahn's Algorithm)**: Topological Sort using a queue and indegree tracking.
- **DFS**: Detect cycles by marking visiting states.

---

## ✅ Method 1 - BFS (Topological Sort)

### 🛠️ Key Points  
- Build an adjacency list and compute the indegree of each course.  
- Enqueue all courses with `indegree == 0`.  
- Repeatedly dequeue and reduce indegree of neighbors.  
- If any neighbor’s indegree drops to 0, enqueue it.  
- If all nodes are processed, return true; otherwise, false.

---

### ⏱️ Complexity  
- **Time**: O(V + E), where V is the number of courses and E is the number of prerequisites  
- **Space**: O(V + E), for graph and queue

---

## ✅ Method 2 - DFS (Cycle Detection)

### 🛠️ Key Points  
- Use a state array:  
  - `0` = unvisited  
  - `1` = visiting (in current DFS path)  
  - `2` = visited (safe)  
- For each unvisited course, perform DFS.  
- If a visiting node is revisited → cycle detected.  
- After visiting all neighbors, mark current node as `2`.

---

### ⏱️ Complexity  
- **Time**: O(V + E), same as BFS  
- **Space**: O(V + E), due to recursion stack and adjacency list

---

## 🆚 Summary

| Feature               | Method 1: BFS (Topological Sort) | Method 2: DFS (Cycle Detection) |
|------------------------|-----------------------------|------------------------------|
| Strategy               | Indegree + Queue             | Recursive DFS + Visit State  |
| Detects Cycles         | ✅                           | ✅                             |
| Modifies Graph         | No                           | No                             |
| Suitable for DAG Check | ✅                           | ✅                             |
| Runtime (your tests)   | ~79–100%                     | ~79–100%                       |
| Space Efficiency       | Good                         | Good                           |

---

### 🧾 Notes  
- Both methods are efficient for detecting cycles in directed graphs.  
- BFS provides a clearer topological order (if needed).  
- DFS is a classic cycle detection strategy for directed graphs.  
- Runtime fluctuations on LeetCode are normal due to backend load/test variance.
