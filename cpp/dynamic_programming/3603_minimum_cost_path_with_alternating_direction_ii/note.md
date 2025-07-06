# 3603 - Minimum Cost Path With Alternating Directions II

### 🧠 Idea  
Calculate the minimum cost to reach the bottom-right cell in a grid where entering each cell costs `(i+1)*(j+1)` and waiting costs vary per cell. Movement is restricted to right/down on odd seconds, waiting on even seconds. The solution uses dynamic programming to accumulate minimal cost while considering waiting costs.

The contest version explicitly handles initial boundary cases with many conditionals. The optimized version initializes the first row and column separately to simplify the inner loop and uses a more concise DP formulation.

---

### 🛠️ Key Points  
- Use a 2D DP array `costAll` where `costAll[i][j]` stores minimal cost to reach cell `(i,j)`.  
- Initialize base cases for the first row and first column to handle boundary movements and waiting costs.  
- For other cells, take the minimum cost from either the top cell or the left cell plus the corresponding waitCost and entry cost.  
- The optimized version reduces redundant checks by separating first row/column initialization.

---

### ⏱️ Complexity

| Metric        | Complexity         |
|---------------|--------------------|
| Time          | O(m * n)           |
| Space         | O(m * n)           |

---

### 🆚 Summary

| Feature             | Contest Version                  | Optimized Version              |
|---------------------|---------------------------------|-------------------------------|
| Initialization      | Inline with multiple conditionals | Separate first row/column initialization |
| Code Readability    | More verbose and repetitive       | Cleaner, fewer branches        |
| Performance         | Good (passes efficiently)         | Slightly faster runtime (~95.89%) |
| Approach            | DP with careful boundary handling | DP with clearer boundary setup |

---

### 🔄 Further Optimization Possibility  
While the current DP solution efficiently solves the problem in O(m * n) time, it is possible to model the problem as a shortest path on a state graph that accounts for alternating steps (movement vs waiting). Using shortest path algorithms like Dijkstra's could lead to a more general and potentially more optimal solution, especially if the problem constraints or movement rules become more complex.  

Exploring such graph-based shortest path approaches would deepen understanding of advanced graph algorithms and state modeling, and could be a future enhancement after solidifying the DP approach.
