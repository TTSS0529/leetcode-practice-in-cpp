# 0128 - Longest Consecutive Sequence

## 🧠 Idea  
We are given an unsorted array of integers and need to find the **length of the longest consecutive elements sequence**.  

---

## 🛠️ Key Points  
- Use an **unordered_set** to store all numbers for `O(1)` average lookup time.  
- A number is the **start** of a consecutive sequence only if `(num - 1)` does **not** exist in the set.  
- For each such starting point, keep expanding `num + 1`, `num + 2`, ... until the sequence breaks.  
- Track the current sequence length and update the global maximum.

---

## 💡 Intuition  
Think of the array as scattered points on a number line:  
- If a point has no neighbor to its left, it must be the beginning of a new consecutive segment.  
- Only expanding from these valid starting points avoids redundant work and gives an overall `O(n)` complexity.

This is a classic use of hashing to quickly check whether a value exists.

---

## ⚙️ Implementation Details  
- Build the hash set: `unordered_set<int> hash(nums.begin(), nums.end());`  
- Iterate through each `num` in the set:  
  - If `(num - 1)` is not in the set → treat `num` as a starting point  
  - Expand forward while `hash.contains(num + 1)`  
  - Update `res = max(res, current_length)`  
- The solution uses the C++20 method `contains()`.  
  - If your environment doesn't recognize `contains`, ensure the compiler is set to `-std=c++20` or higher.

---

## ⏱️ Complexity  
- **Time:** `O(n)` — each number is processed at most twice.  
- **Space:** `O(n)` — for the hash set storing unique numbers.
