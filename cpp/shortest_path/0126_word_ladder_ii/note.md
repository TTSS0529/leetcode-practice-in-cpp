# 0126 - Word Ladder II

## 🧠 Idea

We are asked to find **all shortest transformation sequences** from `beginWord` to `endWord`.  
Each transformation must change **exactly one letter**, and the new word must exist in the given dictionary.  

This is essentially a **shortest path problem in an unweighted graph**, where:
- Each word is a **node**.
- An edge exists between two words if they differ by exactly one character.
- We need not just the distance, but also **all paths** with minimum length.

---

## 🔁 Step-by-step

1. **BFS to calculate shortest depth**  
   - Perform BFS starting from `beginWord`.  
   - Use a `depth` map: `depth[word] = shortest distance from beginWord`.  
   - Only push a word into queue once (to avoid revisiting and longer paths).  
   - Stop when we reach `endWord`, since BFS guarantees shortest distance.

2. **Backtracking to reconstruct paths**  
   - Starting from `endWord`, recursively backtrack to `beginWord`.  
   - At each step, try changing one character at a time.  
   - If `depth[prev] + 1 == depth[curr]`, then `prev` is part of a shortest path.  
   - Collect words in reverse order, then reverse the path before storing.

3. **Combine results**  
   - Each valid reconstructed path is appended to the final result list.

---

## 🛠️ Key Points

- **Two-phase approach**:  
  - BFS ensures we only explore the shortest depth.  
  - Backtracking ensures we collect **all valid shortest sequences**.
- During BFS, once a word is visited it is erased from `wordSet` → prevents cycles & longer paths.
- Depth map is crucial: it acts like a "layer marking" so backtracking knows valid predecessors.
- This approach avoids generating non-shortest paths.

---

## ⏱️ Complexity

- **Time:**  
  - BFS explores each word at most once → `O(N * L * 26)`  
    - `N = number of words`, `L = word length`.  
  - Backtracking may generate up to `O(#paths * L)`.  
- **Space:**  
  - Depth map + queue: `O(N)`.  
  - Recursion stack: `O(L)`.
