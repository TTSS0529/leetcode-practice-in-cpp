# 0046 - Permutations  

### 🧠 Idea  
We want all **permutations of `nums`**, i.e. all possible orderings.  

This is a classic **backtracking problem**.  

There are two main ways to generate permutations:  
- **Method 1: Backtracking with `used[] + path`** (build path explicitly)  
- **Method 2: Backtracking with in-place `swap`** (modify nums directly)  

Both generate **n! permutations**, but they differ in **space usage & runtime performance**.  

---

## ✅ Method 1 - Backtracking with `used[] + path`  

### 🛠️ Key Points  
- Maintain a separate `path` list for the current permutation.  
- Track visited elements with a `used[]` boolean array.  
- At each step, iterate over all unused elements, append to `path`, recurse, then pop back.  

### ⏱️ Complexity  
- **Time**: O(n·n!) – each recursion level tries all possible elements  
- **Space**: O(n) recursion depth + O(n) for `used[]` + O(n!) for results  

### ✅ Pros  
- **Cache-friendly**: elements in `nums` remain in original order  
- No extra swap overhead, just `push_back` and `pop_back`  
- Typically **faster in practice** on LeetCode, runtime ~100%  

---

## ✅ Method 2 - Backtracking with In-place `swap`  

### 🛠️ Key Points  
- Instead of a `used[]` array, fix one position at a time by swapping elements.  
- At recursion depth `place`, swap `nums[place]` with each possible candidate.  
- After recursion, **swap back** to restore original state.  

### ⏱️ Complexity  
- **Time**: O(n·n!) – same theoretical complexity  
- **Space**: O(n) recursion depth + O(n!) for results  
- But introduces **extra overhead from swap calls**  

### ❌ Cons  
- **More swaps** → O(n·n!) swap operations  
- **Worse cache locality** because `nums` is constantly rearranged  
- Copying the entire `nums` into results is less predictable for CPU cache  
- Typically **slower in practice**, LeetCode runtime ~37.5%  

---

## 🆚 Summary  

| Feature                | Method 1: `used[] + path` | Method 2: `swap` in-place |
|------------------------|---------------------------|---------------------------|
| Extra space            | O(n)                     | O(1)                     |
| Backtrack cleanup      | Pop + mark `used=false`  | Extra `swap` per step     |
| Cache friendliness     | ✅ better                 | ❌ worse (nums scrambled) |
| Constant overhead      | Low (push/pop)           | High (2 swaps per call)   |
| Runtime (LeetCode)     | ~100% (faster)           | ~37.5% (slower)           |
| Memory efficiency      | Slightly worse (used[])  | Slightly better           |

---

### 🧾 Notes  

- Both approaches have **identical theoretical complexity O(n·n!)**.  
- The **swap version saves an extra `used[]` array**, but adds more swap operations, which increases runtime overhead.  
- The **`used[]` + path version is more cache-friendly**, since the original `nums` order stays stable.  
- On LeetCode, runtime differences often come from **constant factors** (swaps vs push/pop) and **CPU cache behavior**, not big-O complexity.  
- **Recommendation**: if you care about runtime ranking, prefer `used[] + path`; if you want minimal extra memory, `swap` is acceptable.  
