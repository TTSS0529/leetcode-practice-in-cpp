# 0047 - Permutations II  

### 🧠 Problem  
We need all **unique permutations of `nums`**, where `nums` may contain duplicates.  

This is a classic **backtracking problem with duplicate pruning**.  

---

## ✅ Method 1 - Backtracking with `used[] + path`  

### 🛠️ Key Points  
- **Sort `nums` first** → ensures duplicates are adjacent.  
- Maintain a separate `path` list for the current permutation.  
- Track visited elements with a `used[]` boolean array.  
- At each recursion level:  
  - Iterate over all unused elements  
  - **Skip duplicates**:  
    ```cpp
    if (i > 0 && nums[i] == nums[i-1] && !used[i-1]) continue;
    ```
    - ✅ Only use the **first unvisited duplicate** at each depth  
    - ❌ Avoid generating the same permutation twice  

### ⏱️ Complexity  
- **Time**: O(n·n!) – but actual output ≤ n! (due to duplicates)  
- **Space**: O(n) recursion depth + O(n) for `used[]` + O(n!) for results  

### ✅ Pros  
- Very **cache-friendly** (original `nums` order never scrambled)  
- **Minimal overhead** (just `push_back` & `pop_back`)  
- LeetCode runtime **~70%–100%**  

---

## ✅ Method 2 - Backtracking with In-place `swap` + `unordered_set`  

### 🛠️ Key Points  
- Instead of `used[]`, fix one position `start` by swapping `nums[start]` with each candidate.  
- Use an `unordered_set` to track **duplicates at the same recursion depth** → avoid swapping same number twice.  
- After recursion, **swap back** to restore original array.  

### ⏱️ Complexity  
- **Time**: O(n·n!) – same theoretical  
- **Space**: O(n) recursion depth + O(n!) for results  
- But **extra swap overhead** hurts runtime  

### ❌ Cons  
- **2× swap per recursion step** → higher constant factor  
- Worse **cache locality** because array is scrambled  
- LeetCode runtime **~35%–50%**, usually slower  

---

## 🆚 Summary  

| Feature                  | Method 1: `used[] + path` | Method 2: `swap` in-place |
|--------------------------|---------------------------|---------------------------|
| Duplicate pruning        | via sorted check          | via `unordered_set`      |
| Extra space              | O(n) (`used[]`)           | O(1)                     |
| Cache friendliness       | ✅ better                 | ❌ worse                 |
| Constant overhead        | Low (push/pop)            | High (2 swaps per step)  |
| Runtime (LeetCode)       | ✅ ~70–100% (faster)      | ❌ ~35–50% (slower)      |
| Code clarity             | ✅ clear                  | More tricky              |

---

### 🧾 Notes  

- Both approaches have **identical O(n·n!) complexity**, but **constant factors** matter.  
- `used[] + path` is usually **faster in practice** because it:  
  - keeps `nums` stable → better CPU cache  
  - avoids frequent `swap()` overhead  
- The `swap` approach saves memory, but duplicates require an extra `unordered_set`, negating that benefit.  
- **Recommendation**: use **`used[] + path`** for best runtime.  

---