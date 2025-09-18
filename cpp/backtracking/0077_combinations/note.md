# 0077 - Combinations

## 🧠 Idea  

We are asked to **generate all combinations of `k` numbers out of `1 ... n`**.  

Constraints:  
- `1 <= n <= 20`  
- `1 <= k <= n`  

**Key insights:**  
- This is a classic **backtracking / DFS** problem.  
- We build combinations incrementally and **explore all possibilities**.  
- To avoid duplicates: always consider numbers **greater than the last chosen**.  

---

## 🔁 Step-by-step  

1. Initialize an empty `path` to store the current combination.  
2. Start recursion (`backtr`) from `curr = 1` up to `n`:  
   - Append `i` to `path`.  
   - Recurse with `i + 1` as the next starting point.  
   - Backtrack by removing the last element after recursion.  
3. Stop recursion when `path.size() == k` and push `path` into the result.  

---

## 🛠️ Key Points  

- Use **backtracking**: choose → recurse → undo choice.  
- To avoid duplicates, always **move forward** in the number range (`i + 1`).  
- Use `path.reserve(k)` for efficiency if needed (preallocate memory).  
- Simple recursion is enough; no need for extra visited array.  

---

## ⏱️ Complexity  

- **Time:** `O(C(n, k) * k)`  
  - `C(n, k)` is the number of combinations.  
  - Each combination costs `O(k)` to copy into the result.  
- **Space:** `O(k)` for recursion stack and current path.  
